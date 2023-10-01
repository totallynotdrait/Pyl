# Pyl Programming Language
Pyl is a High-Level interpreted programming language writted in C (originally in Python), designed to be simple and make terminal applications more easily

# Set up
1. Download the Pyl Zip folder
2. Extract it
3. run `shell.exe` to run the shell (to run a pyl script type `shell.exe filename.pyl`)

# Examples
Pyl provides a very easy and simple syntax, similar to other programming languages like python, java, c and mostly shell

Hello world example:

```shell
include; "headers/stdio.phs" # includes to the script the standard input and output header file to write messages

echo: "Hello, World!" # prints the message
```

---

Functions examples:
In Pyl you can also define and call functions

example:
```shell
include; "headers/stdio.phs"

function my_fun: arg1, arg2, arg3 {
    echo: "{arg1}\n{arg2}\n{arg3}"    
}

my_fun: "foo", "bar", "other"
```

---

Variables:
In Pyl you can create variables

example:
```shell
include; "headers/stdio.phs"
include; "headers/tools.phs"

int my_int = 5 # creates a number
float my_float = 12.1 # creates a float number
str my_str = "Caparezza" # creates a string
bool my_bool = true # creates a boolean
var my_var = 32.5 # automatically defines what type of variable is this (which in this case is a float)

var a = 6
var b = 18

do: {a}+{b}

echo: "{my_int}\n{my_float}\n{my_str}\n{my_bool}\n{my_var}"
```

# Pyl Header Scripts (phs)
Pyl Header Scripts (PHS) are used to define functions, variables so any Pyl script can have access to it. PHS has the same syntax as Pyl scripts but has some built-in functions like pyexec: or set_var_value:

