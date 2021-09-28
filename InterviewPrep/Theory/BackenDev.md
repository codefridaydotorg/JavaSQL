# Backend Development

1. What is CAP theoram?

**Ans.** Theoram for Distributed Computing. It states that a system cannot simultaneously provide all three gaurantees:
    1. Consistency          : All nodes have same data.
    2. Availability         : Every request receive a response of success and failure.
    3. Partition Tolerance  : The system continue to operate despite arbitary loss or failure.

2. What does REST stands for?

**Ans.** REpresentational State Transfer, a web-standard based architecture which uses HTTP protocol for communication. The REST architecture involves a REST server which simply provides access to resources and REST client accesses and presents it. It uses several representations like Text, JSON and XML.

3. What are NoSQL databases?

**Ans.** A database which provides mechanisms for storage and retrieval of data modeled in a way other than the Tabular Relation.

Eg. Document Oriented, Key Value, Graph, Column Oriented

4. What do you understand by NoSQL databases?

**Ans.** SQL was developed in a time when there was no way to know how much data will be ubiqutous in the future, today in the world of Big Data and Big Complexity. NoSQL is the answer it means Not only SQL thus it can handle even unstructured data.

5. What is SQL Injection?

**Ans.** Stems from the lack of strict seperation between Program Instruction and User-Provided Input. This allows attackers to inject malicious code into a data snippet.

Prevention:
    1. Prepared Statement with Parameterized Query
    2. Stored Procedures

6. What is Meant by Continuous Integration?

**Ans.** A development practise where the programmer would integrate code into a shared repository several times a day. Each check in is then verified by an automated build to test for problems.

7. Compare SQL database with Mongo DB at a high level?

**Ans.** SQL stores data in the form of tables in the form of predefined data data models Mongo DB on the other hand uses a more flexible structure.

8. Difference Between Acceptance and Functional Test?

**Ans.** 

    1. Functional Test : Did we build the product correctly
    2. Acceptance Test : Did we build the correct product

9. Explain the architectral style for creating a Web API?

**Ans.** 
    1. HTTP for client server communication
    2. XML/JSON as formating language
    3. Simple URI as the address for the service
    4. Stateless Communication

**State Less vs State Full**

Statefull means the program keeps track of the interactions while Stateless means the program doesn't keeps track of the interaction eq. Login Session

10. How to mitigate the SQL Injection risk?

**Ans.** 

    1. Prepared Statement : Always ensure that your program can differentiate between code and data, this can be done by using Static SQL queries over Dynamic SQL queries
    2. Stored Procedure : A pre-defined procedure which is called when needed.
    3. White List Input : Allow only pre-approved inputs by the user.

11. Name some performance testing steps?

**Ans.** 

    1. Identify Testing Environment
    2. Identify Performance Matrix
    3. Plan and Design Test
    4. Configure the Test Environment
    5. Implement your Design
    6. Execute Tests
    7. Analyze, Report, Test

12. What are the Advantages of Using Go?

**Ans.** Go is a language developed by Google Engineers, it compiles very fast and was initially intended to replace famous server side languages like Java.

Uses:
    1. It is possible to compile a large Go program in a few seconds.
    2. Makes dependency analysis very easy.
    3. Go is fully Garbage Collected.

13. What are the advantages of Web Services?

**Ans.** 

    1. Interoperability: Web Services are accessible over Networks and runs on HTTP/SOAP protocol and uses JSON/XML to transport data.
    2. Reusability: One service may be used by many clients.
    3. Loose Coupling:
    4. Easy to Deploy and Integrate

    SOAP : Simple Object Access Protocol

14. What are the beinfits of using Go Programming?

15. What does Containerization mean?

**Ans.** Containerization is a type of virtualization strategy, where the operating system is shared by many containers instead of simply being cloned for each virtual machine.

Virtualization : Software to simulate hardware.

16. Why would you opt for Micro Service Architecture?

**Ans.** 
    1. Microservices can adapt easily with other frameworks.
    2. Failure of one process won't effect the other.
    3. Can be deployed independently.

17. Name some performance testing practises?

**Ans.** 
    1. Test as early as possible.
    2. Conduct multiple performance tests.
    3. Test individual units seperately.
    4. Keep test environment consistent.

18. What do you mean by High Availability?