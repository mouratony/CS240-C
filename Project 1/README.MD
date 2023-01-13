# Requirements

1. Answer Part 1 questions here in this file
2. Answer Part 2 questions in the source files
3. Submit this file and the two source files on to the Gradescope

# Part1: Short Answer Questions

### 1. Called by Value (10 Points)

What it means called by value in C?
What are the values being passed when arguments are integer and char data respectively?

**Answer**: It means passing arguments to a function where the values are copied into the formal
            parameter of the function. The changes made to the parameters in the block
            of a function doesn't apply to the actual values of the arguments. The values being passed 
            are the locations of the first elements of the arrays. 

### 2. Scope (10 Points)

What is the scope of a variable in C? What's the usage of the
key word *extern* in C?

**Answer**: The scope of a variable is the area of a program text in which a variable can be
            referenced. It means a region in the program (block of the code) where a certain 
            variable can be referenced, used, and modified. The "extern" keyword is used for 
            searching the external variable referenced somewhere else.

### 3. Static (10 Points)

What is the static key word means for an external and an internal variable?

**Answer**: static key makes sure that a variable persists its value across the various function calls. 
            The scope of the static  variable is throughout the program. In the case of external variable,
            it is declared at the top of the program, and its visibility is throughout the program. In the 
            case of internal variable, the memory of a static internal variable is valid throughout the program, 
            but the scope of visibility of a variable is the same as the automatic local variables.

### 4. Commandline Arguments (10 Points)

How to use commandline arguments in C? Give an example.

**Answer**: We use the main function where argc determines the number of arguments passed, and 
            argv[] is a pointer array which points to the passed arguments. 
            Example:
            int main(int argc, char *argv[]) {
                if (argc == 2) {
                    printf("There is only one argument: %s\n", argv[1]);
                }
                if (argc == 1) {
                    printf("There is no argument\n");
                }
            }

# Part2: Coding  (60 Points)

Read the question in the README file and then complete the [solution] function
in the Source Code file for submission.

Coding 1: [README](coding_1.MD) and [Source Code](coding_1.c)

Coding 2: [README](Coding_2.MD) and [Source Code](coding_2.c)
