# ArrayDeque

Also *called Array Double Ended Queue* is a special kind of growable array that allows us to add and remove elements from both the ends.

**ArrayDeque as a Deque** ArrayDeque also provides a faster implementation of the Deque

|Operation|Method Return Null/False|Method Throwing Exception|
|:---|:---|:---|
|Insertion From Head|offerFirst|addFirst|
|Removal From Head|pollFirst|removeFirst|
|Retrieval From Head|peekFirst|getFirst|
|Insertion From Tail|offerLast|addLast|
|Removal From Tail|pollLast|removeLast|
|Retrieval From Tail|peekLast|getLast|

**ArrayDeque as a Stack** ArrayDeque also provides a faster implementation of the Stack. It provides the following functionality:

1. push()
2. peek()
3. pop()

**Note:** The stack is an implementation of Vector class which is thread safe thus have an additional overhead making ArrayDeque more efficient.