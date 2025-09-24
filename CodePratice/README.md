# CS203A – Data Structures · Code Practice

## Array

### Practice I: Code Review and Refinement
- Review the [practice_array_1](array_1.c).
- Refactor and complete the code to improve safety, readability, and correctness.
  - Add free

### Practice II: Observing Array Behavior
- Use the [example C code](example_array.c) to study memory allocation with `malloc` and `realloc`.
- Add the following line to observe memory addresses during execution:
  ```c
  printf("Index %d -> Value: %d, Address: %p\n", i, array[i], (void*)&array[i]);
- Compare the memory layout before and after reallocation to understand the behavior of dynamic arrays.
- Extend this concept to 2D, 3D, or higher-dimensional arrays to explore how memory is allocated for multidimensional arrays.
- Execute the binary code multiple times to observe the memory locations during the initial allocation with malloc and subsequent expansion with realloc.
