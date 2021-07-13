# Pointers

*A pointer is a variable that stroes an address location*

**Why Use Pointers**

1. Pointer notation is faster when working with arrays.
2. They provide functions access to large blocks of data.
3. Can be used to allocate memory dynamically.

**Usefull Tricks**

1. When pointer is not initialized it is set to NULL.
2. It is always a good advice to initialize a pointer.
3. It is helpful to use a prefix of "p" for pointer variables names.

**Question 1.** Why do pointers to different data types takes different memory size when they all store address to a variable? It allows the compiler to dereference the variables as otherwise the compiler would not know how to differentiate between an int and a char.

**Char Pointer**

```
char initial = 'P';
char* pInitial = &initial;
// A way to declare strings using pointers

cout << "Memory address for initial P: " << pInitial<<endl;
cout << "Memory address for initial P: " << (void *)pInitial << endl;
cout << "Memory address for initial P: " << static_cast <void *>(pInitial) << endl;

const char* pString{ "Hello World" };
cout << "Contents of the String" << pString<<endl;
// A way to declare strings using pointers
```

**Dereferencing Pointer**

```
double testScores[5], sum=0;
double* pTestScores;
pTestScores = testScores;
for (int i = 0; i < 5; i++)
{
    cout << "Enter the test score: " << endl;
    cin >> *(pTestScores + i);
    sum += *(pTestScores + i);
}
cout << "testScores: "<<testScores<<endl;
cout << "Total for all students: " << sum << endl;
cout << "Average score: " << sum / 5 << endl;
```

