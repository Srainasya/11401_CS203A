# CS203A – Data Structures · Code Practice

## Array

### Practice I: Code Review and Refinement
- Review the [practice_array_1](array_1.c).
- Refactor and complete the code to improve safety, readability, and correctness.
  - Add Header files, main(), error checking for memory allocation, memory deallocation

### Practice II: Observing Array Behavior
- Use the [example C code](example_code.c) to study memory allocation with `malloc` and `realloc`.
- Add the following line to observe memory addresses during execution [practice_array_2_1](array_2_1.c)  :
  ```c
  printf("Index %d -> Value: %d, Address: %p\n", i, array[i], (void*)&array[i]);
  
- Compare the memory layout before and after reallocation to understand the behavior of dynamic arrays.
  - **Realloc extended in place** : In this run, `realloc` kept the same starting address and simply enlarged the block.
  - **Continuous block preserved** : The memory remained contiguous, and old values were not moved.
  - **Possible relocation** : If enough free space is not available after the original block, `realloc` may allocate a new memory block elsewhere, copy the old data, and free the original one.  
 → That’s why sometimes the array’s base address changes after `realloc`.

    |                     | before      | after       |
    |---------------------|-------------|-------------|
    | Size                | 10 integers | 20 integers |
    | Start Address       | 0x...B81450 | 0x...B81450 |
    | End Address         | 0x...B814EC | 0x...B8158C |
    | Each integer takes  | 4 bytes     | 4 bytes     |
  
- Extend this concept to 2D, 3D, or higher-dimensional arrays to explore how memory is allocated for multidimensional arrays.
  - 2D array [practice_array_2_2](array_2_2.c)
- Execute the binary code multiple times to observe the memory locations during the initial allocation with malloc and subsequent expansion with realloc.
 
