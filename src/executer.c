// Copyright (C) Pyl Programming Language
// Created and developed by Arthur - Ionut Turcan (AKA Dr. AIT)

// Pyl is a interpreted programming language with a very simple and similar syntax to other programming languages like Python, C, and mostly Shell or Bash.
// The project started at the start of 2023 and it was originally written in Python,
// but because of the written language it was 2x slower and required a lot of memory.

// This script contains the execute function which is the main function to parse, lexing the given argument, which is a string 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100

typedef struct Pair {
    char* key;
    char* value;
    struct Pair* next;
} Pair;

Pair* hashTable[TABLE_SIZE] = {NULL};

unsigned int hash(char* key) {
    unsigned int sum = 0;
    for (int i = 0; key[i] != '\0'; i++) {
        sum += key[i];
    }
    return sum % TABLE_SIZE;
}

void insert(char* key, char* value) {
    unsigned int index = hash(key);
    Pair* newPair = malloc(sizeof(Pair));
    newPair->key = strdup(key);
    newPair->value = strdup(value);
    newPair->next = hashTable[index];
    hashTable[index] = newPair;
}

char* search(char* key) {
    unsigned int index = hash(key);
    Pair* pair = hashTable[index];
    while (pair != NULL && strcmp(pair->key, key) != 0) {
        pair = pair->next;
    }
    if (pair == NULL) {
        return NULL;
    } else {
        return pair->value;
    }
}


void execute(char* string) {
    if (string == NULL) {
        printf("Error: command not provided\n");
        return;
    }

    // Remove comments
    char* comment = strchr(string, '#');
    if (comment != NULL) {
        *comment = '\0';
    }

    char* token = strtok(string, " ");
    while (token != NULL) {
        if (strncmp(token, "echo:", 5) == 0) {
            printf("%s\n", token + 5);  // Skip past "echo:"
        }
        // If the token starts with a quote
        else if (token[0] == '"' || token[0] == '\'') {
            char quote = token[0];  // Remember the type of quote
            char* endQuote;
            do {
                endQuote = strchr(token + 1, quote);
                if (endQuote == NULL) {
                    printf("Error: mismatched quotes\n");
                    return;
                }
                // If it's an escaped quote, ignore it
            } while (*(endQuote - 1) == '\\');

            // Overwrite the quotes with null characters
            token[0] = '\0';
            *endQuote = '\0';
            printf("%s\n", token + 1);
            
            // Move the token pointer to the end of the quoted string
            token = endQuote;
        } else {
            printf("%s\n", token);
        }

        token = strtok(NULL, " ");
    }
}
