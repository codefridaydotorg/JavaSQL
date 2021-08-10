# String

A Non-Primitive Data Type. Contains an Array of Characters inside a class which provides a number of Implementations alongside. They are immutable in Nature, if you wish a Mutable variant you can use [StringBuffer]. Java exploits this Immutable property of Strings and store them in a seperate **String Pool Area** where former strings are Cached and Reused incase a similar string has to be declared.

**Note:** When we declare a string using new Keyword the object is created in the Heap area and a copy is created in the String Pool area(if there isn't a copy already present there).

```
String name1="Apoorv";
String name2=new String("Apoorv");

System.out.println(name1 == name2);
```

**Output:** False (name1 is inside the pool area while the next one is inside the Heap Area)

## Functions

1. charAt(int index)
2. int length()
3. String substring(int beginIndex, int endIndex)
4. String substring(int beginIndex)
5. boolean contains(CharSequence s)
6. boolean equals(String s)

```
String name1="Apoorv";
String name2=new String("Apoorv");

System.out.println(name1.equals(name2));
```

**Output:** True (Equals checks value so the output is True)

7. boolean isEmpty()
8. String concat(String str)
9. String replace(char old, char new)
10. String[] split(String regex)

11. int indexOf(char ch)
12. String toLowerCase()
13. String toUpperCase()
14. String trim()       *// Removes Extra Space(Before and After)*

