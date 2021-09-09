# Data Structure Interview

A fundamental concept of any programming language, essential for algorithmic design. It is used for the efficient organization and modification of data. It helps represent data and its relationship with other data there is.

## Types

There are 2 types of Data Structures:

1. Linear       : Results in a sequence. Eg. Array, LinkedList, Stack, Queue
2. Non-Linear   : Non-sequential Data Structure. Eg. Graph, Tree

## Interview Questions

1. What is the Difference Between File Structure and Storage Structure?

**Ans.** File Structure : Representation of Data into secondary memory which remains intact until manually deleted.
Storage Structure : Data is stored in Main memory.

2. Can you tell how Linear DS differs from Non-Linear DS?

**Ans.** If the elements of the DS result in a sequence or a linear list then it is called a Linear DS. In Non-Linear DS the traversal of Nodes happen in a Non-Linear fashion.

3. What is an Array?

**Ans.** A collection of similar types of data in a contiguous memory location.

4. What is a multi-dimensional array?

**Ans.** Span in multiple dimensions, they have multiple index variables.

5. What is a linked list?

**Ans.** A DS with a sequence of Nodes where every Node is connected to the another Node by a reference variable forming a sequence. Each Node has a 1. Data Field, 2. A Reference Variable. 

6. Are Linked List linear or non-linear DS?

**Ans.** Linked Lists are linear data structures.

7. How are Linked List more efficient than Arrays?

**Ans.** 
    1. Insertion and Deletion is more efficient
    2. Dynamic in Nature
    3. No Wasted Memory

8. Explain Scenarios where : 
    1. One can use Linked List over Array:
        1. When one doesn't know the number of entries.
        2. When there are a large number of Add and Remove Operations
        3. Few random access operations
        4. We might need to insert elements into the middle
    2. Once can use Arrays over Linked List:
        1. When we need to access elements randomly.
        2. When we know the number of entries before hand.

9. What is Doubly Linked List?

**Ans.** Has 2 reference variables thus providing the ability to move both up and down the linked list.

10. What is a Stack?

**Ans.** LIFO

11. What is a Queue?

**Ans.** FIFO

12. How is Stack different from Queue?

**Ans.** LIFO vs FIFO

13. Explain the process of variable in memory?

**Ans.** 
    1. Required amount of storage is allocated.
    2. Data stored accoring to the Data Structure

14. How to implement a Queue using Stack?

**Ans.** Use two Stacks

15. How to implement a Stack using Queue?

**Ans.** Use two Queue

16. What is a HashMap data structure?

**Ans.** An implementation of Hash table which allows the access of data in O(1) time.

17. What objects can be used as key and values in HashMap in Java?

**Ans.** The key or value must implement the equals() and hashCode() mehtods for retrieving and inserting values into the HashMap respectively.

18. How does a HashMap handle collisions in Java?

**Ans.** In Java the apporach of Chaining is used to handle Collisions. If a new value with the same key is attempted to be pushed, they will be stored into a LinkedList/Bucket of values.

19. What is the Time Complexity of the get() and put() methods in HashMap?

**Ans.** O(1) if the hash function is good enough otherwise the Complexity may rise to O(N).

20. Which DS is used to implement LRU cache?

**Ans.** Queue and HashMap

21. What is a Priority Queue?

**Ans.** An Abstract Data Type which is like a normal queue but arranges the elements accorrding to some pre-defined order of priority. It uses a Heap in background.

22. Can we store duplicate keys in a HashMap?

**Ans.** No

23. What is a Tree Data Structure?

**Ans.** A recursice, non - linear data structure, it is a set of Data nodes having no or multiple children with one assigned to be the Root Node. It organizes itself in a heirarchial fashion. Some of its applications are, File Systems, Comments on Social Media.

24. What is a Binary Tree?

**Ans.** A special type of tree where each node can have atmost 2 children.

25. What is the maximum number of children in a tree of height 'K'?

**Ans.** (2 ^ (K + 1)) - 1 for K > 0

26. WAP to calculate the height of the Tree?

**Ans.** 

27. WAP to count the number of Nodes in a Binary Tree?

**Ans.** 

28. What are Tree Traversal Algorithms?

**Ans.** Process of visiting all the Nodes in a Binary Tree :
    1. PreOrder
    2. InOrder
    3. PostOrder

29. What is a Binary Search Tree?

**Ans.** A variant of Binary Tree that stores the data in an efficient manner such that the values of the nodes on the Left Sub-Tree is smaller than the Root Node Value while the ones on the Right Sub-Tree are greater than the Root Node Values.

30. What are AVL Tree?

**Ans.** These are Height Ballancing BST. They help further optimize the search efficiency of the Binary Tree by mantaining the Ballance Factor of 1.

Ballance Factor = MOD(Height(Right Sub-Tree) - Height(Left Sub-Tree))

31. WAP to Print Left View of a Tree?

**Ans.** 

32. What is s Graph Data Structure?

**Ans.** A Non-Linear Data Structure that consists vertices and nodes connected by edges.

33. Applications of Graph DS.

**Ans.** Application Include.

    1. Social Media Networks
    2. Transport Grids
    3. Water and Electricity Utiliy

34. How do you represent a Graph?

**Ans.** Adjacency Matrix and Adjacency List

35. What is the Difference between Graph and Tree?

**Ans.** A Tree Data Structure is always connected and never has any loops.

36. What is the Difference b/w DFS and BFS?

**Ans.** Both are graph traversal algorithms to visit all Nodes of the Graph.

|BFS|DFS|
|:---|:---|
|Breadth First Search|Depth First Search|
|Uses Queue|Uses Stack|
|Considers all Neighbours First|For Exploring all Node to the End First|

37. How do you know when to use DFS and Over BFS and vice versa.

**Ans.** BFS is used to search closer vertex while DFS is used to search for far off vertex.

38. What is Topological Sorting in a Graph?

**Ans.** Sorting for the Directed Acyclic Graph, here the vertices are oredered linearly such that for directed edge ij, i comes before j.
