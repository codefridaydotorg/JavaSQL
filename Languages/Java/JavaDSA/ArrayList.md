# Array List

Array has a constant size but ArrayList class allows us to form re-sizable arrays. It inherits from the List Interface. In ArrayList class, if the number of inputs exceeds the size of array the size of ArrayList is automaticlly doubled(in the backend).

## Array List vs Array

An implementation of the List Interface that allows us to create Resizable Arrays. In Java one must declare the size of an array before we can use it. Once declared we cannot change it EASILY*. To tackle this we can use the ArrayList data structure present inside the *java.util* package. Unlike arrays Array List's size can be changed.

```
ArrayList<Integer> arrayList = new ArrayList<>();
```

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