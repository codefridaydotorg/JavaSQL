# Java Collection Framework

1. Collection Interfaces
2. List
3. Set
4. Queue
5. Map
6. Natural Ordering and Sorting
7. Comparators

## Functions

1. add()        :   inserts a specified element to the collection.
2. size()       :   returns the size of the collection.
3. remove()     :   removes the specified element from the collection.
4. iterator()   :   return an iterator to access the element of the collection.
5. addAll()     :   adds all the element of a specified collection to another collection.
6. removeAll()  :   removes all the collection of a specified collection.
7. clear()      :   removes all the elements from the collection.
8. set()        :   Mutates the value at the given index with another value.

![Java-Collections-Interface](..\Images\collection-framework-hierarchy.jpg)

## Collection Interface

The collection interface is the root of the collection framework hierarchy. Java does not provide the implementation for the Colection interface but it provides them for it's sub-interfaces like **List, Set and Queue**.

### List Interface

The list interface is an ordered collection that allows us to store and access elements sequentially. It extends the collection interface. Since list is an interface we cannot create objects from it, but it has Classes which are:

    1. ArrayList
    2. LinkedList
    3. Vector
    4. Stack

### Set Interface

The set interface provides the features of the Mathematical Set in Java. It cannot hold duplicate elements. It has the following classes:

    1. HashSet
    2. LinkedHashSet
    3. EnumSet
    4. TreeSet

### Queue Interface

The Queue interface of Java Collections framework provides the functionality of the Queue Data Structure. It has the following classes:

    1. ArrayDequeue
    2. LinkedList
    3. PriorityQueue

### Map Interface

It has the following classes:

    1. HashMap
    2. EnumMap
    3. LinkedHashMap
    4. WeakHashMap
    5. TreeMap