# Freeing a Pointer to a Local Variable
This repository demonstrates a common error in C programming: attempting to free a pointer that points to a local variable. Local variables are allocated on the stack, not the heap, and should not be freed using `free()`.  This can lead to unpredictable behavior and crashes.

## The Bug
The `bug.c` file contains the problematic code. It attempts to free a pointer that points to a local variable, `x`. This is incorrect and causes undefined behavior.

## The Solution
The `bugSolution.c` file provides a corrected version.  It demonstrates that `free()` should only be used on pointers previously allocated using `malloc()`, `calloc()`, or similar functions.