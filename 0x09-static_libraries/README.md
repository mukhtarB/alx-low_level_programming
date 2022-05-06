C Programming: Static Libraries

Libraries are used to store object files (machine code) for usage across a wide range of source code programs. They are of two types; Static and Dynamic.

This folder explores how static libraries work in the C Programming Language.

How It Works:

I have created a static library for the function declarations in the header file, such that any program being run in this directory using the library and any of these functions do not return an error indicative of the absence of the function prototype or body, despite explicitly not defining the functions in this directory.
