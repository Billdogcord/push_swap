```markdown
Push_swap

## Overview

**Push_swap** is a sorting algorithm project from 42. The goal is to sort a stack of integers using a specific set of allowed operations. The challenge is to sort the stack with the fewest possible moves. The project requires the implementation of both the sorting algorithm and a program that generates the sequence of operations.

### Objectives
- Given two stacks (A and B), sort stack A using predefined operations while keeping stack B as a temporary holder.
- The solution must minimize the number of moves.

## Allowed Operations

The following operations are allowed for sorting:

- `sa` : Swap the first two elements of stack A.
- `sb` : Swap the first two elements of stack B.
- `ss` : Swap the first two elements of both stacks simultaneously.
- `pa` : Push the first element of stack B onto stack A.
- `pb` : Push the first element of stack A onto stack B.
- `ra` : Rotate stack A upwards (first element becomes the last).
- `rb` : Rotate stack B upwards.
- `rr` : Rotate both stacks upwards.
- `rra` : Reverse rotate stack A (last element becomes the first).
- `rrb` : Reverse rotate stack B.
- `rrr` : Reverse rotate both stacks.

## Approach

### Data Structure: Arrays
I chose to solve the problem using arrays to represent the stacks. Each stack is an array where:
- Stack A contains the input integers.
- Stack B is initially empty and used as a helper stack for the sorting process.

### Sorting Algorithm
For sorting, I implemented a combination of the following strategies:
1. **Small number of elements (<=5):**
   - For small stacks, I used a brute-force approach to test every possible combination of operations.
   
2. **Larger stacks:**
   - For larger stacks, I implemented an algorithm similar to quicksort, dividing the stack into smaller parts, pushing elements to stack B, and recursively sorting them.
   
### Edge Cases Handled
- Empty input.
- Single element input.
- Already sorted stack.
- Duplicate numbers (invalid input).

## How to Use

### Compilation
To compile the program, use the provided `Makefile`:

```bash
make
```

This will generate the `push_swap` executable.

### Running the Program
You can run the program as follows:

```bash
./push_swap <list_of_integers>
```

For example:

```bash
./push_swap 3 2 5 1 4
```

### Example Output
The output will be a sequence of operations that sort the input integers:

```
pb
pb
ra
pa
pa
```

You can also use the `checker` program provided by 42 to verify the output of your solution:

```bash
./push_swap 3 2 5 1 4 | ./checker 3 2 5 1 4
```

## Files

- `push_swap.c` : Contains the main logic for sorting and handling input/output.
- `operations.c` : Implements the allowed stack operations.
- `utils.c` : Utility functions for managing stacks and handling errors.
- `Makefile` : Automates the compilation of the program.

## Efficiency
I optimized the algorithm to minimize the number of operations. The performance varies depending on the size of the input and the specific sequence of numbers provided.

- **Small input (3-5 elements):** Efficient brute-force solutions.
- **Larger input:** Implemented a more complex strategy for fewer operations.

## Testing
You can test the solution with random numbers using the `ARG` environment variable:

```bash
ARG="3 2 5 1 4"; ./push_swap $ARG | ./checker $ARG
```

## Resources

- [42 Push_swap subject](https://cdn.intra.42.fr/pdf/pdf/133152/en.subject.pdf)
- [Sorting Algorithms Overview](https://en.wikipedia.org/wiki/Sorting_algorithm)
```
