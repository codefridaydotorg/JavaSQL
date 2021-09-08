**Normal Code**

```
public class Pair{
    int x;
    String y;

    public Pair(int x,String y){
        this.x=x;
        this.y=y;
    }
};
```

**Generic Code**

```
public class Pair<X,Y>{
    X x;
    Y y;

    public Pair(X x,Y y){
        this.x=x;
        this.y=y;
    }
};
```
