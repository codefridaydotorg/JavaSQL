# Set Interface

The set interface of the java collection framework provides the features of the mathematical set in Java. It does not implement List interface thus it can contain duplicate elements.

In order to use functionalities of the Set Interface, we can use these classes:

1. HashSet
2. LinkedHashSet
3. EnumSet
4. TreeSet

|Differences|HashSet|LinkedHashSet|TreeSet|
|:---|:---|:---|:---|
|Internal Working|Uses HashMap|Uses Linked HashMap|Uses TreeMap|
|When To Use|If you don't want to mantain insertion order|If you want to mantain insertion order|If you want to use some Comparator|
|Complexity|O(1)|O(1)|O(log(N))|

## Methods of Set

1. add(element)
2. addAll(Collection)
3. remove(element)
4. removeAll()      *//  Removes Elements Matching Collection*
5. retainAll()      *// Intersection of Elements*
6. clear()          *//  Removes all Elements*
7. size()
8. contains()
9. containsAll()    *// Subset Operation*
10. isEmpty()
11. toArray()

```
Set<Integer> s = new HashSet<>();
```

## Operations on Set

1. Union:           x.addAll(y)
2. Intersetion:     x.retainAll(y)
3. Subset:          y.containsAll(x)