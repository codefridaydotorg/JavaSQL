# Java-Interview-Bit

1. Why is Java a Platform Independent Language?

**Ans.** Java was built in a way that it doesn't depend on any external Software or Hardware. This was achieved by making the Compiler convert the platform independent Byte Code which can be run on multiple systems easily(It is easier to developer interpreters for Byte Code to Machine Code).

2. Why is Java not Purely Object Oriented Language?

**Ans.** Java supports primitive data types such as int, bool, float etc, which are simply heaps of data and not Class Instances.

3. Why does Java not support Pointers?

**Ans.** Pointers are complicated for initial users and adds a certain security risk to the program. Java developers wanted to focus on code simplicity and security thus Pointers are not supported.

4. What is the difference between Instance and Local variables?

**Ans.** Instance Variables : Accessible by all the methods of Class, declared within the Class and outside all functions, while Local Instances are declared inside closed blocks '{}' of a function, contructor etc, thus accessible only their.

5. What is Data Encapsulation?

**Ans.** An OOP concept of hiding/bind the data attributes and their behaviours in a single unit, helps follow modularity, helps in security by hiding private properties.

6. What is JIT compiler?

**Ans.** JIT stands for 'Just In Time' Compiler, it is used to improve performance during run time. It compiles parts of Byte Code having similar functionality at the same time, thus reducing the amount of compilation.

JIT is a part of JVM, it's task is to improve the overall efficiency of the compilation process.

Works at Run Time.

7. (equals) vs (==)?

**Ans.** 
|equals()|==|
|:---|:---|
|Method of Object Class|A Binary Operator|
|Checks Equality of Content|Check/Compares the addresses/references|

Note. Incase the equals() is not overridden, the class will use the equals methods of closest parent class.
Note. The Object Class, parent of classes uses the == operator too.

8. How is infinite Loop declared?

9. What is constructor overloading?

**Ans.** When we declare multiple constructors inside a class with different parameter signatures.

10. Comment on Method Overloading and Methos Overriding?

**Ans.** 
Method Overloading : When we have same function name with different parameter signature, it enhances program readability.
Method Over-riding : Two methods having the same method signature present in two different classes having an inheritence relationship.

11. A single try block with multiple catch blocks can exist. Explain

**Ans.** Yes, but certain things have to be taken care of as only the first Catch block satisfying the the catch condition will be executed.

12. Explain the use of final keyword/

**Ans.** It is used to define something as constant.

    1. final variable   : Its value cannot be modified once assigned.
    2. final method     : Cannot be over-ridden by it's children.
                        : Constructors cannot be final.
    3. final class      : No class can be inheritted from a final class.

13. Do final, finally and finalize have the same function?

**Ans.** 

final   : Add restriction to variables, functions and classes.
finally : A block present in a program where all the code written inside gets executed irrespective of handling exception.
finalize: Prior to the garbage collection of an object this method is called to initialize the cleanup activity.

14. When can we use super keyword?

**Ans.** Used to call parent class constructor, access hidden fields and over-ridden methods and attributes of the parent class.

15. Can a static methods be overloaded?

**Ans.** Yes.

16. Can a static method be over-ridden?

**Ans.** No, overriding takes place during the runtime but the static methods are loaded and looked up at the compile time.

17. What is the objective of Garbage Collection?

**Ans.** To free up the memory space occupied by the uneccessary and unaccessible objects, ensures efficient use of memory.

18. What part of memory is cleaned during garbage collection?

**Ans.** Heap

19. Why are Strings immutable in Java?

**Ans.** String is made immutable due to the following reasons:

    1. String Pool : String is majorly used part of programmingm developers of java thus optimized it. They came up with the idea of using a String pool, a storage area inside the Java Heap to store String literals, thus decreasing the temporary String object with sharing. An immutable class thus was needed to facilitate it.

    2. Multi-Threading : The safety of threads regarding the String objects is an important aspect in Java. No external synchronization is required if the Strings are immutable.

    3. Collections : In case of HashMaps and HashTables, keys are String objects. If the strings are not mutable they might get modified during runtime, making the data stored in Hash collection lost to us.

20. String vs StringBuffer vs StringBuilder

**Ans.** 

|Attribute|String|String Buffer|String Builder|
|:---|:---|:---|:---|
|Storage Area|String Pool|Heap|Heap|
|Mutability|Immutable|Mutable|Mutable|
|Efficiency|Slowest|Medium|Fastest|
|Thread Safet|Not used|Multiple Thread Environment|Single Thread Environment|

21. Interface vs Abstract Class

|Attribute|Interface|Abstract Class|
|:---|:---|:---|
|Availability|Only abstract methods|Non-Abstract methods maybe present|
|Variable Type|Only static and final variables allowed|Non-Static and Non-Final variables are allowed|
|Inheritence|Multiple Inheritence|No Multiple Inheritence|
|Data Member Accessibility|All are public|Can be protected or private|

22. Can we override Static and Private methods?

**Ans.** No neither of the methods can be over-ridden.

23. What makes a HashSet different from TreeSet?

**Ans.** Both are unsynchronized and ensure that there is no duplication.

|Attribute|HashSet|TreeSet|
|:---|:---|:---|
|Implementation|Hash Table is used, not sorted|Red-Black Tree is used, sorted Order|
|Complexity|O(1)|O(log N)|
|Object Types|Hetrogeneous are Allowed|Hetrogeneous not Allowed|

24. Why is Character Array preferred over String to store Confidential Information?

**Ans.** Strings are immutable in nature thus would require a String pool to be implemented, this would mean that the cnfidential information will remain in the Heap until garbage collection for an unspecified amount of time, making the data vulnerable. char array on the other hand are mutable and can/should be changed to someother value as soon as our work is done.

25. JDK vs JRE vs JVM ?

**Ans.** 

|Criteria|JDK|JRE|JVM|
|:---|:---|:---|:---|
|Abbreviation|Java Development Kit|Java RunTime Environment|Java Virtual Machine|
|Definition|A development kit consisting of JRE, Documentation, Compiler and Debugger|Software providing all the necessary Libraries and other components to run a Java Program|A Platform Independent abstract machine to allow execution of Java Byte Code|
|Purpose|Development|Environment for Execution|Provides specifications for all Implementations of JRE|

26. HashMap vs HashTable in Java?

**Ans.** 

|HashMap|HashTable|
|:---|:---|
|Not-Synchronized thus can be used for Non-Threaded Application|Synchronized thus can be used for Threaded Applications|
|Allows NULL in key and values|This doesn't allow NULL in either Key or Value|
|Gaurantees order of Insertion|Does not gaurantees order of Insertion|

27. What is the importance of Reflection in Java?

**Ans.** The term reflectionn is used for describing the inspection capability of a code. For example, if we have an object of unknown type and there is another function which we need to call on the object. Java won't allow us to do that, unles it's type is known beforehand.

```
Method methodOfFoo = fooObject.getClass().getMethod("fooBar", null);
methodOfFoo.invoke(fooObject, null);
```

Reflection hits speed of the program really hard not to mention that it can cause many run time errors.

28. What are the different ways of Thread Usage?

**Ans.** On can use threads in 2 ways.
    1. Extend thread class
    2. Implement Runnable interface

|Extend Thread|Implement Runnable|
|:---|:---|
|We cannot extend from any other class|We can exend from other classes|
|When we create multiple threads, each of our thread creates a unique Object|Only a single Object is created which is shared by all threads|

29. Constructor vs Method

**Ans.** 

|Constructor|Method|
|:---|:---|
|Used to initialize the object|Used to expose object behaviour|
|No return type|Has some sort of return type or void|
|Invoked implicitly|Invoked explicitly|
|A default is always present|No default present|
|Name has to be same as the Class Name|Name different than Class Name|
|Cannot be final|Can be final|

30. Can Java use Pass by Reference?

**Ans.** No, Java only has Pass by Value, but a copy of the Reference to the Original Parameter is sent to the function making the functionality of Pass by Reference still possible.

31. Which to use String or StringBuffer, incase there is a lot of Updation required?

**Ans.** StringBuffer, String are immutable thus a new String will have to be created even for the most minisclue change.

32. How to not allow serialization of attributes of a class in Java?

**Ans.** Serialization in Java is the mechanism of writing the state of an object in a stream of Bytes. It is mainly used in Hibernate. However if one wishes to keep objects from serializing, one can use the Keyword transient.

```
public class Example { 

   private transient String someInfo; 
   private String name;
   private int id;
}
```

33. What happens if there isn't a static modifier infront of the main method in Java?

**Ans.** There will be no compilation error, however during the Runtime, JVM won't be able to Map the main method, thus throwing 'NoSuchMethodError'.

34. What happens if one declares multiple main methods?

**Ans.** There will be a compilation error, compiler will say that the method has already been declared inside the class.

35. What do you mean by Object Cloning in Java?

**Ans.** 