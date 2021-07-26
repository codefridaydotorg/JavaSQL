# DBMS-Data Base Management System

1. What are the properties of RDBMS?

**Ans.** RDBMS are databse management systems that mantain data records and indices in tables. Relationships maybe created and mantained across and among the data and tables. In a relational database, the relationship between data items are expressed by the means of tables.

Interdependencies among these tables are expressed by data values rather than by pointers. This allows for a high degree of data independence.

**Features**
    1. High levels of Information Security
    2. Quick and Precise
    3. Provides Facilities like Primary Keys
    4. Values are atomic
    5. Values are of same type
    6. No two rows have the same data

2. Describe ACID Properties.

**Ans.** A transaction is a single logical unit of work that accesses and modifies the contents of Database. Transaction access data using Read and Write operation. In order to mantain consistency in a DB certain properties are followed.

Atomicity:      Entire transaction takes place at once.
Consistency:    Database must be consistent before and after the transaction.
Isolation:      Multiple Transactions occur independent of Each Other.
Durability:     The changes of a Successful transaction occurs even in case of System Failure.

3. What are Keys in Database?

**Ans.** The attribute which uniquely identifies each entity in the entity set is called a key. Eg.

    1. Candidate Key:   The minimal set of an attribute that can uniquely identify a tupple.
    2. Super Key:       Set of attributes that can uniquely identify a tupple.
    3. Primary Key:     There can be multiple candidate keys but only one Primary Key.
    4. Foreign Key:     If an attribute can only take the value which are present as values of some other(foreign) attribute.

4. Difference Between Vertical and Horizontal Scaling.

**Ans.** 

|Vertical Scaling|Horizontal Scaling|
|:---|:---|
|Adding new server racks to meet the expectation.|Adding new resources to meet expectation|
|Difficult to implement|Easy to implement|
|Costlier|Cheaper|
|Takes more time|Takes less time|

5. What is Sharding?

**Ans.** A very important concept used to optimze the Data Base. Helps keep data in the form of Shards or "smaller parts of the whole". These shards are not only smaller but also faster and manageable.

Need: Consider a very large database whose sharding has not been done. To find an entry we will have to look through all these records which is a tedious process. Now if we were to divide this data according to some property and then look for our result. This will greatly increase the efficiency.

6. What are SQL Commands? Explain the types.

**Ans.** Structured Query Language is the database language by the use of which we can perform certain operations on the existing database or to create a database. SQL uses commands like Create, Drop, Insert etc.

Types:
    1. DDL: Data Definition, Create Drop, Alter
    2. DML: Data Manipulation, Insert, Delete, Update
    3. DCL: Data Control, Grant, Revoke
    4. DQL: Data Query Language, Select
    5. TCL: Transaction Control, Commit, Rollback, SavePoint

7. What is Indexing in Database?

**Ans.** Indexing is a way to optimize the performance of a database by minimizing the number of Disk Accesses required when a query is processed. It is a Data Structure Technique used to quickly locate and access data.

8. Explain the Normal Forms in DBMS.

**Ans.** Normalization is the process of minimizing redundancy from a set of relations.

1. First Normal Form:   If a relation contains a composite or multi-valued attribute, it violates the 1st Normal Form.
2. Second Normal Form:  1st Normal Form + No Partial Dependency.

9. What is Normalization and De-Normalization and why do we need them?

**Ans.**

10. What do you mean by Conflict Serializability in DBMS?

**Ans.** As discussed in Concurrency Control, serial schedules have less resource utilization and low throughput. To improve it, two or more transactions are run concurrently. But concurrency of transaction may lead to inconsistency in the Database. To remedy this we first must check if these concurrent schedules are serializable or not.

Conflict Serializability: A schedule is called conflict serializable if it can be transformed into a serial schedule by swapping non-conflicting operations.

Conflicting Operations: Two operations are called conflicting if all the following conditions are satidfied:

1. They belong to Different Transactions.
2. They operate on the same Data item.
3. Atleast one of them is a write Operation.

11. What are Concurrency Control Protocol?

**Ans.** Concurrency control is provided in a database to:

1. Enforce isolation among transactions.
2. Preserve Database consistency.
3. Resolve Read-Write and Write-Read Conflicts

Various Concurrency Control Techniques are:

1. Two Phase Locking
2. Time Stamp Ordering
3. Multi-Version Concurrency Control
4. Validation Concurrency Control

12. Can a Primary Key have two Entities?

**Ans.** We can have only one Primary Key but the Primary key can contain multiple Attributes.

13. What are Concurrency Control Protocols?

**Ans.** Concurrency Control is provided in a Database to:

1. Enforce isolation among transactions.
2. Preserve Database consistency.
3. Resolve Read-Write conflict.

Various Concurrency control protocols are:

1. **Two-Phase Locking Protocol**: Locking is an operation that secures: permission to read and write a data item. Two-Phase Locking is a process to gain ownership of shared resources without creating the possibility of deadlock.

```
The 3 Activities are:
    1. Lock Acquisition
    2. Modification of Data
    3. Release Locks
```

This prevents deadloks because of the phases make sure that never have 2 processes held shared resources.

2. **Time Stamp Ordering Protocol**: A time stamp is a tag that can be attached to any transaction or any data item, which denotes a specific time on which the transaction or the data item has been used in anyway. One way is to directly attach clock value to transaction or data item. The other is to attach value as a Logical Counter.

3. **Multiversion Concurrency Control**: Mutliversion schemes keeps old versions of data items to increase concurrency. Multiversion Two Phase Locking: Each successful write results in the creation of a new version of the data item written. Timestamps are used to label the version. When a read(X) operation is issued, select an appropriate version of X based on the timestamp of the transaction.

14. What are Nested Queries in SQL?

**Ans.** In nested Queries, a query is written inside a query. The result of the inner query is used in the execution of the Outer Query.

There are mainly two types of Nested Queries:

    1. Independent Nested Queries:  In independent nested Queries, query execution starts from innermost query to outermost Queries. The execution of the Inner Query is independent of the Outer Query, but the result of inner query is used in the outer query.
    
    2. Co-Related Query:            In co-related Query nested query, the output of inner query depends on the row which is currently executed in outer query.

15. Explain the types of Joins?

**Ans.** A SQL join statement is used to combine data or rows from two or more tables based on a common field between them. Different types of Joins are:

    1. INNER Join:  The INNER Join Keyword selects all rows from both the tables as long as the condition satisfies.
    2. LEFT Join:   
    3. RIGHT Join:  
    4. FULL Join:   