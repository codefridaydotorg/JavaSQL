# Java

->Platform Independent  ->Architecture Neutral  ->OOP   ->Secure

Architecture Neutral: It means the java program can be run on any processor irrespective of its vendor and architecture. 

**Reasons For Success**

1. SourceCode->Compiler->M/C Code
2. Earlier compiler vendors had to develop different Compiler for Different O/S also S/W developers had to develop different deliverable for different O/S, they thus flocked to Java.

Q. Why can't we develop a universal compiler?
Compilation process requires importing of properties from the host OS, thus a program compiled in one OS cannot run in another.

```
Java Source Code----->Compiler----->Byte Code
```

Compiler Has No Interaction with the O/S, Byte Code is thus independent of O/S.

**Byte Code:**
1. Short Hand of Java
2. Keywords repreented as 1 Byte symbols.

The byte code is then converted to M/C code for the respective OS. The question then arises that we still have to develop different Compiler/Interpreter/Translator for each OS. Here the catch is that it is much easier and economical to convert Byte Code to M/C over source code to M/C.

**Byte Code----->Machine Code**

Byte Code is saved on the Hard Disk of the *foreign* OS. To run on the System, first a Virtual Environment is setup in RAM which is dependent on the OS. The code is then run in the JVM.

API: Application Programing Index
JRE: Java RunTime Environment

JRE=JVM+Java Native API

Java Native API is responsible for interacting with OS. It was initially developed by OS vendors but is now made available on the Net.

![Java-VS-C++](.\Images\JavaVC.jpeg)

![Byte-Code-To-MC](.\Images\ByteCodeToMC.jpeg)

1. Class Loader: Loads program into the Virtual Environment
2. Byte Code Verifier: Filters Byte Code of all harmful code
3. Execution Engine: Converts Byte Code to MC

**5 Phases Of Java Program**

1. Editting
2. Compilation
3. Load
4. Verifier
5. Execution

**Java Features**

1. Platform Independency
2. Robust: Hard to have RunTime Errors
3. Dynamic
4. High Performance
5. Multi-Threaded
6. Compilation of S/C and Interpretation of Byte Code