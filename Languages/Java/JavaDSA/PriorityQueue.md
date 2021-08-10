# Priority Queue

The elements are pushed into the Queue in a similar way however when they are made to be poped out the elements with the Maximum priorities are poped out first.

**Implemented using Heaps**

It is a special type fo Queue in which each element is associated with a Priority and is served accordingly. If two have same priority they are served according to the Order.

```
PriorityQueue<Integer> pq1 = new PriorityQueue<>();
PriorityQueue<Integer> pq2 = new PriorityQueue<>(Collections.reverseOrder());
```

## Methods

1. insert(item,priority)
2. getHighestPriority()
3. deleteHighestPriority()