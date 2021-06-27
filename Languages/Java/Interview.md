# Java Interview Questions

1. Difference Between C++ and Java

|C++|Java|
|:---|:---|
|Platform Dependent|Platform Independent|
|For System Programing|FOr Application Programing|
|Supports Goto, Mulitple Inheritence, Operator Overloading, Pointers, Call by Value and Call by Reference, Supports Structures and Unions|Doesn't Supports Goto, Multiple Inheritence, Operator Overloading, Pointers, Supports only Call by Value, Doesn't Supports Structures and Unions|
|Compiled|Both Compiled and Interpretted|
|No Thread Support|Thread Support|
|Closer to Hardware|Not so interactive with Hardware|

2. Features of Java Programming?

Simple, Object-Oriented, Portable, Platform Independent, Secured, Robust, Architecturally Neutral.

3. What do you know about JVM?

Enables computers to run Java Program. A run-time engine which calls main method present in Java Code.

4. How many types of Memories are in JVM?

    1. Class Area: stores per class structure
    2. Heap: Runtime Data Area
    3. Stack: Local Variables and Partial Results
    4. Program Counter Register: Address of JVM Instructions
    5. Native Method Stack: Native Methods of Application

5. What is JIT?

JIT: Stands for Just in Time Complier, used to optimize performance by compiling similar functionality at the same time.

6. When we don't provide argument to the main function, it reads it as Empty String but not Null.

7. public static void main is same as static public void main.

8. Various access specifiers in Java: Public, Protected(Within Sub-Class), Default(Within Package), Private

9. Use of Packages:
    1. Avoid Clashes of Names
    2. Easier to Control
    3. Easier to Locate Classes

10. 
![Output-1](.\Images\Output1.PNG)

11. 

```
class Test   
{  
    public static void main (String args[])   
    {  
        for(int i=0; 0; i++)   
        {  
            System.out.println("Hello Javatpoint");  
        }  
    }  
} 
```

The above code gives a Compilation error as Loops require a Bool Value.

12. Object Oriented Programing Paradigm: 
    1. Follows Bottom Up.
    2. Focus on Data.
    3. Includes Encapsulation, Abstraction.
    4. Implements Inheritence and Abstraction.
    5. Eg. Python

13. Object: A real-time entity having some state and behaviour.

14. Construct is a special type of function used to initialize the stage of an object. It is envoked at the time of instantiation to allocate memory to an object.

15. Types of Constructors:
    1. Default
    2. Parameterized
    3. Copy Constructor

16. Constructor implicitly returns the current instance of class.

17. final keyword in Java is used to make sure that no changes are made to an entity in the future.

18. A constructor cannot be made final.

19. Constructor Vs Method

|Constructor|Method|
|:---|:---|
|Initialize an Object|Expose a functionality|
|No return type|Must have a return type(atleast void)|
|Invoked Implicitly|Invoked Explicitly|
|A default is provided|No default Provided|

20. 

![Output-2](.\Images\Output2.PNG)

21. Restrictions on static methods?

    1. Cannot use non-static members.
    2. Cannot use this and super.

22. Why is main method static?

The object is not required to call it. If it were so, JVM would first have to make an object which would lead to extra memory allocation.

23. We cannot override static methods.

24. static block: It is used to initialize static data members, it is executed before the main method.
```
class A{
    static{
        Sstem.out.print("Hello");
    }
}
```
25. Can we execute a program without main method? No, not since jdk 1.7

26. Abstract Class vs Interface

|Abstract Class|Interface|
|:---|:---|
|Can have both abstract and non-abstract methods|Only abstract, default and static methods|
|No multiple inheritence|Multiple Inheritence Allowed|
|Can have final, non-final, static and non-static method|Only static and final variables|

Both are used to achieve abstraction.