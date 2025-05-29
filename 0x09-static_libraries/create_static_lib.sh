#!/bin/bash
# Script to create a static library named liball.a from all .c files

# Compile all .c files in the current directory to .o files
gcc -Wall -Wextra -Werror -pedantic -c *.c

# Create the static library from the compiled object files
ar rcs liball.a *.o

