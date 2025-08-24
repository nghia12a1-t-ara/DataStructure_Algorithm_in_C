# DataStructure_Algorithm_in_C

This repository contains implementations of fundamental data structures and algorithms in C. Each data structure is organized in its own directory, with source files and headers as appropriate.

## Project Structure

- **DS_CircularQueue/**: Implementation of a circular queue.
  - `CircularQueue.c`, `CircularQueue.h`
- **DS_HashTable/**: Implementation of a hash table.
  - `HashTable.c`
- **DS_Monotoic_Stack/**: Implementation of a monotonic stack.
  - `MonoStack.c`
- **DS_PriorityQueue/**: Implementation of a priority queue.
  - `PriorityQueue.c`, `PriorityQueue.h`
- **DS_Queue/**: Implementation of a standard queue.
  - `Queue.c`, `Queue.h`
- **DS_Single_LinkedList/**: Implementation of a singly linked list.
  - `Linked_List.c`, `Linked_List.exe`, `ctags_path.txt`, `a.exe`
- **DS_Stack/**: Implementation of a stack.
  - `Stack.c`

## How to Use

1. Clone the repository:


**DS_Queue/**:  
A queue is a First-In-First-Out (FIFO) data structure. Elements are added at the rear and removed from the front. Queues are fundamental for managing tasks, buffering data, and breadth-first search algorithms.  
Reference: [DSA 01. Linear Queue](https://www.laptrinhdientu.com/2022/05/Queue.html)
  - `Queue.c`, `Queue.h`

**DS_CircularQueue/**:  
A circular queue is a linear data structure that connects the end of the queue back to the front, forming a circle. It efficiently utilizes storage by allowing elements to wrap around, solving the problem of wasted space in a standard linear queue. Useful for buffering and scheduling tasks.  
Reference: [DSA 02. Circular Queue](https://www.laptrinhdientu.com/2022/06/CircularQueue.html)
  - `CircularQueue.c`, `CircularQueue.h`

**DS_PriorityQueue/**:  
A priority queue is a data structure where each element has a priority, and elements are served based on their priority rather than their insertion order. It is often implemented using heaps and is useful for algorithms like Dijkstra’s shortest path and task scheduling.  
Reference: [DSA 03. Priority Queue](https://www.laptrinhdientu.com/2023/12/PriorityQueue.html)
  - `PriorityQueue.c`, `PriorityQueue.h`

**DS_Stack/**:  
A stack is a Last-In-First-Out (LIFO) data structure. Elements are added and removed from the top. Stacks are essential for function call management, expression evaluation, and backtracking algorithms.  
Reference: [DSA 04. Stack](https://www.laptrinhdientu.com/2024/07/Stack-DSA.html)
  - `Stack.c`

**DS_Monotoic_Stack/**:  
A monotonic stack is a special stack that maintains its elements in either increasing or decreasing order. It is commonly used to solve problems related to finding the next greater or smaller element in an array, optimizing time complexity for such queries.  
Reference: [DSA 05. Monotonic Stack](https://www.laptrinhdientu.com/2024/07/monotonic-stack-dsa.html)
  - `MonoStack.c`

**DS_Single_LinkedList/**:  
A singly linked list is a sequence of nodes where each node points to the next. It allows efficient insertion and deletion of elements, especially when the position is known. Linked lists are used for dynamic memory allocation and implementing other data structures.  
Reference: [DSA 06. Single Linked List](https://www.laptrinhdientu.com/2024/06/Linked-List-DSA.html)
  - `Linked_List.c`, `Linked_List.exe`, `ctags_path.txt`, `a.exe`

**DS_HashTable/**:  
A hash table is a data structure that maps keys to values using a hash function. It provides fast access, insertion, and deletion operations. Hash tables are widely used for implementing associative arrays, caches, and sets.
  - `HashTable.c`
This project is intended for educational purposes, providing clear and simple implementations of classic data structures and algorithms in C. It can be used as a reference for learning, teaching, or interview preparation.

## Contributing

Contributions are welcome! Feel free to submit issues or pull requests to improve the implementations or add new data structures and algorithms.

## License

This project is licensed under the MIT License.
