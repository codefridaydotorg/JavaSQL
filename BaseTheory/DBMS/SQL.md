# SQL-Structured Query Language

*RDBMS-Stands for Relational Database Management System. It is used to mantain the data records and indices in tables.*

1. Theory by EF-Codd, practical application by IBM.
2. Initially called SEQUEL(simple english query language).
3. Domain Specific(Can only be used in RDBMS).
4. Declarative in nature: Tells only what to do and not how to do.

*Difference Between PL/SQL and SQL: PL/SQL is Procedural.*

**Types Of SQL Queries**

1. DDL: Data Definition Language. Eg. create, alter, truncate, delete etc.
2. DML: Data Manipulation Language. Eg. select, insert, update.
3. DCL: Data Control Language. Eg. Grant, Revoke.
4. TCL: Transaction Control Language. Eg. Commit, Rollback, Savepoint.

**Drop vs Truncate vs Delete**

|Drop|Truncate|Delete|
|:---:|:---:|:---:|
|Deletes entries and schema|Deletes Entries|Delete Entries one by one|
|Slow|NA|Fast|
|Roll Back Possible(Log is created)|NA|No Rollback(No Log is created)|

*Nested Query/Subquery: A query that is nested inisde another query usually select, insert, update or delete.*

In normal Nested Query, the inner query is used first and then the outer is used(Output from Outer Query). ie Bottom Up.

```
select * from Emp where DeptId in (select Id from Dept where EmployeeCount>500);
```

*Correlated Query: A subquery using the values from outer queries.*

In Correlated Query, the outer query is used first to produce rows and then its output is used by the inner query(Output from Inner Query). ie Top Down.

```
select * from Emp where exists (select * from Dept where Dept.id=Emp.id);
```

*Distinct does not count Null.*

**Joins**

A Join clause is used to combine rows from two or more tables, based on a related column between them.

```
Join    =   Cross_Product   +   Condition
```

**Types**

![Inner_Outer_Join](.\Images\InnerOuterJoin.png)

1. Cross: Every combination.
2. Natural: Equate Common Attributes
3. Conditional: Join to the table itself.
*All bellow are extensions of Natural Joins*
4. Equi: Equate an attribute that is not common.
5. Self: Join with the table itself.
6. Outer: Used to compare and combine.