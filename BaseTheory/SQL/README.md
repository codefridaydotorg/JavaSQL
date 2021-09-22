# SQL-Structured Query Language

The queries may or maynot be case sensitive. Configurations can be changed.

Comment is introduced by '--' or '#'
Multi line comment are introduced by /* */

1. What is a Database?

**Ans.** An organized collection of Data which can be strored or retrieved digitally.

2. What is DBMS?

**Ans.** Stands for Data Base Management System, responsible for Creation, Retrieval, Updation and Management of Database. It ensures that our data is organized and accessible.

3. What is RDBMS?

**Ans.** Stands for Relational DBMS. It stores data in the form of Tables, relationship between whom can be established using comman fields. Example SQL.
Not An Example NoSQL : Not Only SQL

4. What is SQL?

**Ans.** Stands for structured query language. It is the standard language for RDBMS.

5. What is the Diff between SQL and MySQL?

**Ans.** SQL is a standard language for the retrieving and manipulating Structured Database while MySQL is an RDBMS.

6. What are Tables and Fields?

**Ans.** Table is an organized collection of data, Field or Collumn is a Vertical entries inside the tables which may or may not be different but are of similar type or rather define a similar property.

7. What is a Constraint?

**Ans.** Rules concerning data in the table. eg NOT NULL, UNIQUE

8. What is the PRIMARY KEY Constraint?

**Ans.** The PRIMARY KEY Constraint uniquely identifies a row in a table. The value can never be NULL.

9. What is a UNIQUE Constraint?

**Ans.** It ensures that value of this field in every entry is different and 'unique'. The diff between PRIMARY KEY and UNIQUE is that the there can be only one PRIMARY KEY and it's value cannot be NULL.

10. What is a Foreign Key?

**Ans.** Comprises of a single or a collection of fields in a table that essentially refers to the PRIMARY KEY in another table. Table with a foreign key is called Child Table.

11. What is a Join?

**Ans.** The SQL Join clause is used to combine records from two or more tables in a SQL database.

**Types**

    1. Inner Join : Matching Values in Both Tables.
    2. Left Outer Join : All records form Left and Matched Records.
    3. Right Outer Join : All records from Right and Matched Records.
    4. Full Outer Join : Retrieves all the records where there is a match in either left or right table.

12. What is a Self Join?

**Ans.** When we join a table with itself.

13. What is a Cross Join?

**Ans.** Defined as the cartessian porduct of two tables included in the Join. We create a table which is comprosed of every possible combination of the entries of the initial two tables.

14. What is an Index?

**Ans.** Provides a quick lookup of data in a column or columns of a table. It enhances the speed of the operations accessing data from a databases table at the cost of an additional writes and memory to mantain the index data structure.

```
CREATE INDEX index_name   /* Create Index */
ON table_name (column_1, column_2);

DROP INDEX index_name;   /* Drop Index */
```

Types of Indexes : 

    1. Unique : Helps mantain data integrity by ensuring that no two rows of data in a table have identical key values.

```
CREATE UNIQUE INDEX myIndex ON students(enroll_no);
```
    2. Non - Unique : Not used to force constraints on the the table but to simple improve the process of Query performance by mantaining data in a sorted order.

    3. Clustered Index and Non - Clustered Index : They mantain key and value pairs too except that the value will consist of a cluster of records containing other values, in Clustered Index the key is in an order same as the clusters whereas in the case of Non - Clustered index the key is in sorted order but the values are not.

15. What is the difference between Clustered and Non-Clustered Index?

**Ans.** Clustered Index has both the Keys and Values in sorted order while Non - Clustered Index has only the keys in sorted order.

16. What is data integrity?

**Ans.** It is the assurance of accuracy and consistency of data over it's entire life cycle.

17. What is a Query?

**Ans.** A request for the data access, manipulation, deletion etc from a database table or combination of tables.

18. What is a Sub - Query?

**Ans.** A query inside another query otherwise known as a nested or inner query. It is used to either enhance or restrict the output of the main query.

There are two types of Sub-Query

    1. Correlated : Subquery not Independent
    2. Non-Correlated : Subquery is Independent

19. What is the SELECT statement?

**Ans.** SELECT statement is SQL is used to retrieve data from a database. The data retrieved is stored in a result table called result-set.

20. What are some common clauses used with SELECT statement?

**Ans.** WHERE, ORDER BY, GROUP BY, HAVING

21. What are UNIONS, MINUS and INTERSECT commands?

**Ans.** 

UNION : No duplicates
UNION ALL : Duplicates

22. What is a CURSOR?

**Ans.** A database CURSOR is a control structure that allows the traversal of records in a database.

23. What are Entities and Relationships?

**Ans.** 

Entity : A row of a table inside a database, it represents a real worl object which may or maynot be tangible.

Relationships : Links between entities that have something to do with another.

24. List the different types of Relationships?

**Ans.** 

    1. One To One   : 
    2. One To Many  :
    3. Many To One  :
    4. Many To Many :
    5. Self Referencing Relationship : 

25. What is an Alias?

**Ans.** It is a temporary name given to a table or table column for the purpose of an SQL query. It may also be used to obfuscate the any detail about the Database.

26. What is an View?

**Ans.** A view is a Virtual Table based on the result-set of an SQL statement.

27. What is Normalization?

**Ans.** A way to organize data in the database efficiently.

28. What is Denormalization?

**Ans.** The inverse of Normalization. Schema turned back to the redundant version.

29. What are the various forms of Normalization?

**Ans.** 

    1. First Normal Form    : Every attribute is a single values attribute.
    2. Second Normal Form   : Has no partial dependency, has no non-prime attribute that depends on any proper subset of any candidate key.
    3. Third Normal Form    : Has no transitive dependency between the non-prime attributes, all non-prime attributes are determined by only the candidate keys.
    4. BoyceCodd Normal Form: For every Functional Dependency the left side is a super key.

30. What are Truncate, Delete and Drop Statements?

**Ans.**

Truncate    : Delete all the Rows.
DELETE      : Delete specific Rows from a Table.
DROP        : Used to remove an item from the Database.

31. What is the Difference Between DROP and TRUNCATE?

**Ans.** 

DROP statement deletes the rows along with the Relations, Checks, Constraints, Access Priveledges etc, however the TRUNCATE would only delete the records inside the table.

32. What is the Difference Between DROP and TRUNCATE?

**Ans.** TRUNCATE removes all the Rows inside a table while the DELETE statement removes only specific ROWS.

33. What are aggregate and scalar functions?

**Ans.** 
Aggregate Functions : performs operations on a collection of values to return a scalar value, they are often used with GROUP BY and HAVING clause.

    1. AVG()
    2. COUNT()  : Does not count NULL but may or may not count duplicates, will by default count duplicates.
    To avoid duplicates use select count(DISTINCT col1).
    3. MIN()
    4. MAX()
    5. SUM()
    6. FIRST()
    7. LAST()

A scalar function return a single value based on a single input.

    1. LEN()
    2. UCASE()
    3. LCASE()
    4. MID()
    5. CONCAT()
    6. RAND()
    7. NOW()
    8. FORMAT()

34. What is a User Defined Function?

**Ans.** 

35. What is OLTP?

**Ans.** OLTP stands for Online Transaction Processing : Software capable of supporting transaction oriented programs. It can mantain concurrency. To avoid single point of failure these are often decentralized.

36. What is the difference between OLAP and OLTP?

**Ans.** 

|OLAP|OLTP|
|:---|:---|
|Online Analytical Processing|Online Transaction Processing|
|Consists of Historical data|Consists of Current data|
|Used for Data Mining, Analytics etc|Used for Buisnesses|
|Used for Problem solving|Used for day to day fundamental procedures|

37. What is Collation? What are the different types of collation sensitivities?

**Ans.** Set of rules about how data is stored and compared.

    1. Case Sensitivity(a & A)
    2. Accent Sensitivity(a and á)
    3. Kana Sensitivity(Japanese Hiragana and Katakana)
    4. Width Sensitivity
    
38. 
39. 

40. How to create and empty table with the same structure as another table?

**Ans.** SELECT * INTO Student_Copy From Student WHERE 1 = 2;

41. What is Pattern Matching in SQL?

**Ans.** Provides pattern search in data.

    1. % : Matches zero or more characters, SELECT * FROM Student WHERE first_name LIKE 'K%';
    2. _ : Matches exactly one character, SELECT * FROM Student WHERE first_name LIKE '_K';

42. What is PostgreSQL?

**Ans.** An enterprise level, opensource object relational DBMS.

43. What are indexes?

**Ans.** An index contains keys built from one or more columns in the table or view.

44. What are views?

**Ans.** Views can be defined as virtual tables.

