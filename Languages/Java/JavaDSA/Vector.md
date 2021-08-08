# Vector

A Vector is an Implementation of the List Interface that allows us to create resizable-arrays similar to ArrayList.

## Java Vector vs ArrayList

Both implements List Interface however there exists some difference between them. The **Vector class synchronizes each individual operation**. This means whenever we want to perform some operation on vectors, the Vector class automatically applies a lock to it, however the ArrayList methods are not synchronized.

**Note:** It is recommended to use ArrayList since Vectors are not thread safe and less efficient.

## Methods

1. add(element)
2. addAll(Collection)
3. get(index)
4. set(index, value)
5. remove(index)
6. removeAll(Collection)
7. clear()
8. size()
9. contains()
10. isEmpty()
11. toArray()