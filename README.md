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
### Conditions of an Algorithm
- **Input**: There must be 0 or more inputs.
- **Output**: There must be 1 or more outputs.
- **Explicitness**: The meaning of each instruction must be clear and unambiguous.
- **Finiteness**: It must terminate after a finite number of steps.
- **Validity**: Each instruction must be an executable operation.
### ADT
ADT, or Abstract Data Type, is a theoretical concept in computer science and data structures that defines a data type purely by its behavior (operations) rather than by its implementation. It focuses on what operations can be performed on the data, without specifying how they are implemented.

An ADT consists of:
1. **Data**: The values or elements the ADT can hold.
2. **Operations**: The operations that can be performed on the data (e.g. insertion, deletion, retrieval).
## 2. Arrays and Structures
### Characteristics of Arrays
- An array is a collection of <index, element> pairs. Given an index, the corresponding element is accessed. Notably, all elements in an array are of the same data type.
- When referencing the k-th item, its position (address) can be calculated directly, which is known as **direct access**. The time complexity for accessing an item is O(1).
- In contrast, for a linked list, to reference the k-th item, you need to traverse from the first item and move k steps forward. This method is known as **sequential access**, and the time complexity for accessing an item is O(n).
### Arrays as Function Parameters
- When an array is passed as a parameter to a function and the function modifies the contents of the array, the original array is also modified.
- Passing the name of an array actually passes the address of the first element of the array.
- When passing an array as a parameter, the length of the array should also be passed.
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
