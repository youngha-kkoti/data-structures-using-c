# Index
1. Data Structures and Algorithms
2. Arrays and Structures
3. Stack
4. Queue
5. Pointers and Linked Lists
6. Lists
7. Recursion
8. Tree
9. Binary Search Tree
10. Priority Queue
11. Graph
12. Weighted Graph
13. Sorting
14. Searching

# Note
## 1. Data Structures and Algorithms
### Classification of Data Structures
- Primitive Data Structures
    - Integer
    - Floating Point
    - Character
    - String
    - Pointer
- Composite Data Structures
    - Linear Structures
        - Stack
        - Queue
        - Deque
        - List
    - Non-Linear Structures
        - Tree
            - General Tree
            - Binary Tree
                - Binary Search Tree
                - AVL Tree
        - Priority Queue
        - Graph
            - Directed Graph
            - Undirected Graph
            - Weighted Graph
        - Map
### Conditions of an algorithm
- **Input**: There must be 0 or more inputs.
- **Output**: There must be 1 or more outputs.
- **Explicitness**: The meaning of each instruction must be clear and unambiguous.
- **Finiteness**: It must terminate after a finite number of steps.
- **Validity**: Each instruction must be an executable operation.
### ADT
ADT, or Abstract Data Type, is a theoretical concept in computer science and data structures that defines a data type purely by its behavior (operations) rather than by its implementation. It focuses on what operations can be performed on the data, without specifying how they are implemented.

An ADT consists of:
1. **Data**: The values or elements the ADT can hold.
2. **Operations**: The operations that can be performed on the data (e.g., insertion, deletion, retrieval).
### Definition of Big O Notation

**Big O notation** is a mathematical notation used to describe the asymptotic behavior of a function as its input size grows. It provides an upper bound on the growth rate of the function, allowing us to classify algorithms according to their worst-case or upper-bound performance. 

Formally, we say that a function \( f(n) \) is **O(g(n))** if and only if there exist positive constants \( c \) and \( n_0 \) such that:

\[ f(n) \leq c \cdot g(n) \]

for all \( n \geq n_0 \).

In other words, **Big O notation** provides an upper bound on the growth rate of a function. If a function \( f(n) \) is O(g(n)), it means that for sufficiently large values of \( n \), the function \( f(n) \) does not grow faster than a constant multiple of \( g(n) \). This helps in evaluating the efficiency of algorithms, particularly in terms of their time complexity or space complexity.

### Example

- If an algorithm has a time complexity of \( O(n^2) \), this means that the time taken by the algorithm grows quadratically with the input size \( n \), up to a constant factor.
- If \( f(n) = 3n^2 + 2n + 5 \), then \( f(n) \) is \( O(n^2) \) because the quadratic term \( n^2 \) dominates the growth of \( f(n) \) as \( n \) becomes large.

### Key Points

- **Upper Bound**: Big O notation describes an upper bound on the growth rate of a function.
- **Asymptotic Analysis**: It is used for analyzing the behavior of functions as the input size approaches infinity.
- **Not Exact**: Big O notation does not describe the exact growth rate, but rather the general growth trend.
## 2. Arrays and Structures
## 3. Stack
## 4. Queue
## 5. Pointers and Linked Lists
## 6. Lists
## 7. Recursion
## 8. Tree
## 9. Binary Search Tree
## 10. Priority Queue
## 11. Graph
## 12. Weighted Graph
## 13. Sorting
## 14. Searching
