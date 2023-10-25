Solution to this Learning Objectives:
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are make, Makefiles
When, why and how to use Makefiles
What are rules and how to set and use them
What are explicit and implicit rules
What are the most common / useful rules
What are variables and how to set and use them

Make and Makefiles are tools commonly used in software development for automating the build process of a project. They are primarily used to manage dependencies and efficiently compile source code into executable programs.

1. *Make*: Make is a build automation tool that reads a file called a Makefile and follows the instructions in it to build a target (usually a software program) from source files.

2. *Makefiles*: Makefiles are plain text files that contain rules and dependencies for building software projects. They provide a way to describe how source files are transformed into executable files.

*When and Why to Use Makefiles*:
- Makefiles are used when you have a project with multiple source files, and you want to automate the compilation and linking process.
- They are helpful when you want to ensure that only modified source files are recompiled, saving time and resources.
- Makefiles are commonly used in C/C++ projects but can be used for various programming languages and build processes.

*Rules*:
- Rules in a Makefile define how to build a target. They consist of a target, dependencies, and a set of commands. For example:


target: dependencies
    commands


*Explicit and Implicit Rules*:
- *Explicit Rules*: These are rules explicitly defined in the Makefile. 
They specify how to build a specific target from its dependencies. 
For example, you might have a rule to compile a .c file into an executable.

- *Implicit Rules*: These are predefined rules that Make uses to build targets 
based on their file extensions. For example, Make automatically knows how to compile 
a .c file into an object file.

*Common/Useful Rules*:
- `.c` to `.o` Rule: This rule compiles a C source file into an object file.

make
%.o: %.c
    gcc -c $< -o $@


- Executable Rule: This rule links object files into an executable.

make
myprogram: file1.o file2.o
    gcc $^ -o $@


*Variables*:
- Variables in Makefiles are used to store values that can be 
referenced throughout the Makefile. They are defined with `VARNAME = value`.
- Common variables include `CC` for the compiler, `CFLAGS` 
for compiler flags, and `SRC` for source files.

*Setting and Using Variables*:
make
CC = gcc
CFLAGS = -Wall -O2
SRC = main.c file1.c file2.c

myprogram: $(SRC)
    $(CC) $(CFLAGS) $^ -o $@


Makefiles provide a powerful way to manage complex build processes, 
and they are essential for large software projects to ensure 
efficient and automated compilation and dependency management.