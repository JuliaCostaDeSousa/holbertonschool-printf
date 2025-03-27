# _printf

## Description
This project is a custom implementation of standard the `printf` function in C, which handles variadic arguments and custom format specifiers. This version mimics the original function's behavior by supporting various format specifiers to display different types of data.

## Requirements

* Allowed editors: `vi`, `vim`, `emacs`

* Compiled on Ubuntu 20.04 LTS using `gcc`

* Code must adhere to Betty style

* No global variables

* No more than 5 functions per file

* Function prototypes must be included in `main.h`

# Limitations

This function doesn't handle: 

* flag characters

* field width

* precision

* length modifiers

## Function prototype

`int _printf(const char *format, ...);`

## Man page

Here is the link toward the man page of `_printf` function:

[Man page of _printf](https://github.com/JuliaCostaDeSousa/holbertonschool-printf/blob/main/man_3_printf)

## Supported conversion specifiers

| Specifier   | Description           |
| ----------- | ----------------------|
| `%c`        | Prints a character    |
| `%s`        | Prints a string       |
| `%%`        | Prints a percentage   |
| `%d`        | Prints an integer     |
| `%i`        | Prints an integer     |

## File descriptions

.

├── main.h               # Header file containing function prototypes and macros

├── _printf.c            # Main function that mimics printf behavior

├── print_char.c         # Function handling characters

├── print_string.c       # Function handling strings

├── print_percent.c      # Function handling percentages

├── print_integer.c      # Function handling integers

├── _putchar.c           # Function for printing

├── README.md            # Project documentation

└── man_3_printf         # Manual page for the _printf function

## Flowchart 

**!!! METTRE LE FLOWCHART !!!**

## Examples

If you want to test `_printf`, you can copy instructions below in a file named `main.c`  in the `holbertonschool-printf` after cloning the repository (see **"Installation"** section below)

```
#include "main.h"
#include <stdio.h>

int main(void)
{
    int len;

    len = _printf("Character: [%c]\n", 'H');
    printf("Return Value: _printf = %d\n", len);

    len = _printf("String: [%s]\n", "Hello, world!");
    printf("Return Value: _printf = %d\n", len);

    len = _printf("Integer: [%d]\n", 1234);
    printf("Return Value: _printf = %d\n", len);

    return 0;
}
```

The output should be :

```
Character: [H]
Return Value: _printf = 11
String: [Hello, world!]
Return Value: _printf = 15
Integer: [1234]
Return Value: _printf = 5
```

## Installation

To use this custom printf function, follow these steps:

* Clone the repository
  `git clone https://github.com/JuliaCostaDeSousa/holbertonschool-printf.git`
* Navigate to the project directory
  `cd holbertonschool-printf`
* Copy the main file from the **"Examples"** section above
* Compile the project
  `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o printf_test`


If you want to check if Betty coding style is respected, you need to :

* Go to the Betty repository (https://github.com/hs-hq/Betty)

* Clone the repo to your local machine

* `cd` into the Betty directory

* Install the linter with `sudo ./install.sh`

* `emacs` or `vi` a new file called `betty`, and copy the script below:
```
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`

Move the betty file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`

You can now type `betty <filename>` to run the Betty linter!


## Compilation command

To compile, use `gcc` with the following command:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o _printf`

To launch the executable, use:
`./_printf`

## Authors

Beydi Coulibaly

[Github](https://github.com/Beydi-dev)

Julia Costa de Sousa

[Github](https://github.com/JuliaCostaDeSousa)






