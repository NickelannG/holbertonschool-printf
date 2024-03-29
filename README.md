# Project Name 
Printf Project 

## Description
This program is a custom implementation of the 'printf' function in C, which prints formatted output to the standard output stream. Our _printf function  supports certain format specifiers. It was created as part of the first group project for Holberton School Australia Cohort 23.

## Table of contents:
- [Features](#features)
- [Flowchart](#flowchart)
- [Installation](#installation)
- [Usage](#usage)
- [Contributors](#contributors)


## Features

### Supports the format specifiers: 
- '%c': Character
- '%s': String
- '%%': Percent sign
- '%i', '%d': Integers

## Flowchart
![Flowchart for Printf project](https://github.com/NickelannG/holbertonschool-printf/blob/main/printf_flowchart.jpeg?raw=true)

## Installation
To install this program, clone this repository using the git clone command as shown below.
```bash
git clone https://github.com/NickelannG/holbertonschool-printf.git
```

## Usage 
**1. Create a source file**<br>
Create a main.c file and include the 'main.h' header file. Call the '_printf' function with the desired format string and arguments

**2. Compilation**<br>
Compile the program using a c compiler. For example, we have used GCC:
```C
gcc -Wall -Werror -Wextra -pedantic *.c -o printf
```
This will compile all the '.c' files in the directory into an exectuable named printf 

**3. Run the program**<br>
After compiling the program, you can run it from the command line:
```bash
./printf
```

Example of main.c file: 
```C
#include <stdio.h>
#include "main.h"

int main() {
    _printf("Hello, %s!\n", "world");
    _printf("The value of pi is approximately %f\n", 3.14159);
    return 0;
}
```
Output:
```bash
Hello, world!
The value of pi is approximately 3.141590
```


## Contributors 
- [Nicole Ann Gorospe](https://github.com/NickelannG)
- [Wen-I Liu](https://github.com/WennieL)
