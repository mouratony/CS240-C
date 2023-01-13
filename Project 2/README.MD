# Requirements

1. Answer Part 1 questions here in this file
2. Answer Part 2 questions in the source files
3. Submit this file and the two source files on to the Gradescope

# Part1: Short Answer Questions

### 1. How to add custom search path for header files and libraries file for gcc compiling (10 Points)

**Answer**: Use the -Idir option for gcc to add custom search path for the header files, and
            the -L<dir_path> option to add custom search path for the library files.
            

### 2. How to create a int data of length 100 using heap memory (10 Points)

**Answer**: We may create the array using the malloc() function, which sends a request of a 
            memory block to the heap. Ex: 
            int *list;
            list = (int *) malloc(100 * sizeof(int));

### 3. Give each an example of dangling pointer and wild pointer (10 Points)

**Answer**: Dangling pointer is a pointer pointing to a memory location that has been freed. 
            Ex: int *p = (int *)malloc(sizeof(int));
                free(p);
            Wild Pointer is a pointer which has not been initialized to anything.
            Ex: int *p;

### 4. What are the four different segments of a C program runtime memory layout and what are they used of? (10 Points)

**Answer**: The four segments are: Text segment that as machine instruction of the program.
            Data segment: is a portion of the virtual address space of a program, which 
            contains the variables
            Stack: contains the program stack, where automatic variables are stored, along 
            with information that is saved each time a function is called.
            Heap: is the segment where dynamic memory allocation usually takes place

# Part2: Coding  (60 Points)

Read the question in the README file and then complete the [solution] function
in the Source Code file for submission.

Coding 1: [README](coding_1.MD) and [Source Code](coding_1.c)

Coding 2: [README](coding_2.MD) and [Source Code](coding_2.c)
