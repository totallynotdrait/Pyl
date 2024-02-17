# Pyl Programming Language
Pyl is an High-Level interpreted programming language written in C++, designed and created to be simple, useful for general purposes and powerfull

# Set up
1. Download the zip folder of latest release of Pyl
2. Extract it
3. run `pyl.exe` to run the shell or to run a pyl script define the script `pyl.exe os.pyl`
4. (optional) add `pyl.exe` in PATH for easy access

# Examples
Pyl provides a very easy and simple syntax, similar to other programming languages, mostly shell

Hello world example:

```shell
include; <headers/stdio.phs> # includes to the script the standard input and output header file to write messages

echo: "Hello, World!" # prints the message
```

---

Functions examples:
In Pyl you can also define and call functions

example:
```shell
include; <stdio.phs>

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
include; <stdio.phs>

var my_var = 32.5 # assign the variable 'my_var' with the value 32.5, which is a float

var a = 6
var b = 18

echo: "{a}+{b}"
```

# Pyl Header Scripts (phs)
Pyl Header Scripts (PHS) are used to define functions, variables so any Pyl script can have access to it.

# PHS examples:

example:

include.phs
```shell
#include <stdio.phs>

var version = "1.0"

function print_me: msg {
    echo: "You have printed: {msg}"
    echo: "{version}"
}
```
include.pyl

```shell
#include "include.phs"

print_me: "Hello, World!"
```

# Notes
Pyl is in early development stages and it's currently a prototype, a lot of changes can happen to Pyl and it's syntax and it's currently not reccomended to use it.
