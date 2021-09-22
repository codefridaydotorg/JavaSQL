# SQL - Structured Query Language

Sub Query : Query inside another Query

Database is a collection of data stored in a format that can easily be accessed.

DBMS : Used to interact with a Database.

There are two types of DB :  
    1. Relational   : We save data in the form of tables linked by relationships.
    2. NoSQL        : Allows storage outsie the domain of traditional relational tables, they don't understand SQL will require their own query language.

SELECT * FROM Employees;

SELECT Name, Dept FROM Employees WHERE salary > (
    SELECT AVG(Salary) FROM Employee
);

SELECT Name, Dept, Salary FROM Employee WHERE salary > (
    SELECT salary FROM Employee WHERE NAME = 'John'
);

SELECT Name, Price FROM Products WHERE Price IN (
    SELECT Price FROM Products WHERE Price < 100
);

[PRACTISE-LINK](https://www.techbeamers.com/sql-query-questions-answers-for-practice/)

1. Write an SQL query to fetch “FIRST_NAME” from Worker table using the alias name as <WORKER_NAME>.

```
SELECT FIRST_NAME AS WORKER_NAME FROM Worker;
```

2. Write an SQL query to fetch “FIRST_NAME” from Worker table in upper case.

```
SELECT upper(FIRST_NAME) FROM Worker;
```

3. Write an SQL query to fetch unique values of DEPARTMENT from Worker table.

```
SELECT DISTINCT DEPARTMENT FROM Worker;
```

4. Write an SQL query to print the first three characters of  FIRST_NAME from Worker table.

```
SELECT substring(FIRST_NAME, 1, 3) FROM Worker;
```

5. Write an SQL query to find the position of the alphabet (‘a’) in the first name column ‘Amitabh’ from Worker table.

```
SELECT INSTR(FIRST_NAME, BINARY'a') FROM Worker WHERE FIRST_NAME = 'Amitabh';
```

6. Write an SQL query to print the FIRST_NAME from Worker table after removing white spaces from the right side.

```
SELECT RTRIM(FIRST_NAME) FROM Worker;
```

7. Write an SQL query to print the DEPARTMENT from Worker table after removing white spaces from the left side.

```
SELECT LTRIM(DEPARTMENT) FROM Worker;
```

8. Write an SQL query that fetches the unique values of DEPARTMENT from Worker table and prints its length.

```
SELECT DISTINCT length(DEPARTMENT) FROM Worker;
```

9. Write an SQL query to print the FIRST_NAME from Worker table after replacing ‘a’ with ‘A’.

```
SELECT replace(FIRST_NAME, 'a', 'A') FROM Worker;
```

10. Write an SQL query to print the FIRST_NAME and LAST_NAME from Worker table into a single column COMPLETE_NAME. A space char should separate them.

```
SELECT CONCAT(FIRST_NAME, ' ', LAST_NAME) AS COMPLETE_NAME FROM Worker;
```

11. Write an SQL query to print all Worker details from the Worker table order by FIRST_NAME Ascending.

```
SELECT * FROM Worker ORDER BY FIRST_NAME ASC;
```

12. Write an SQL query to print all Worker details from the Worker table order by FIRST_NAME Ascending and DEPARTMENT Descending.

```
SELECT * FROM Worker ORDER BY FIRST_NAME ASC, DEPARTMENT DESC;
```

13. Write an SQL query to print details for Workers with the first name as “Vipul” and “Satish” from Worker table.

```
SELECT * FROM Worker WHERE FIRST_NAME IN ('Vipul', 'Satish');

SELECT * FROM Worker WHERE FIRST_NAME = 'Vipul' OR FIRST_NAME = 'Satish';
```

14. Write an SQL query to print details of workers excluding first names, “Vipul” and “Satish” from Worker table.

```
SELECT * FROM Worker WHERE FIRST_NAME NOT IN ('Vipul', 'Satish');

SELECT * FROM Worker WHERE FIRST_NAME = 'Vipul' OR FIRST_NAME = 'Satish';

SELECT * FROM Worker WHERE FIRST_NAME <> 'Vipul' AND FIRST_NAME <> 'Satish';
```

15. Write an SQL query to print details of Workers with DEPARTMENT name as “Admin”.

```
SELECT * FROM Worker WHERE DEPARTMENT = 'Admin';
```

16. Write an SQL query to print details of the Workers whose FIRST_NAME contains ‘a’.

```
SELECT * FROM Worker WHERE FIRST_NAME LIKE '%a%';
```

17. Write an SQL query to print details of the Workers whose FIRST_NAME ends with ‘a’.

```
SELECT * FROM Worker WHERE FIRST_NAME LIKE '%a%';
```

18. Write an SQL query to print details of the Workers whose FIRST_NAME ends with ‘h’ and contains six alphabets.

```
SELECT * FROM Worker WHERE FIRST_NAME LIKE '_____h';
```

19. Write an SQL query to print details of the Workers whose SALARY lies between 100000 and 500000.

```
SELECT * FROM Worker WHERE SALARY >= 100000 and SALARY <= 500000;

SELECT * FROM Worker WHERE SALARY BETWEEN 100000 and 500000;
```

20. Write an SQL query to print details of the Workers who have joined in Feb’2014.

```
SELECT * FROM Worker WHERE JOINING_DATE LIKE '2014-02%';

SELECT * FROM Worker WHERE year(JOINING_DATE) = 2014 and month(JOINING_DATE) = 2;
```

21. Write an SQL query to fetch the count of employees working in the department ‘Admin’.

```
SELECT COUNT(*) FROM Worker WHERE DEPARTMENT = 'Admin';
```

22. Write an SQL query to fetch worker names with salaries >= 50000 and <= 100000.

```
SELECT CONCAT(FIRST_NAME, ' ', LAST_NAME) As Worker_Name, Salary
FROM worker 
WHERE WORKER_ID IN 
(SELECT WORKER_ID FROM worker 
WHERE Salary BETWEEN 50000 AND 100000);
```

23. Write an SQL query to fetch the no. of workers for each department in the descending order.

```
SELECT DEPARTMENT, COUNT(WORKER_ID) AS NO_OF_WORKERS FROM Worker
GROUP BY Department ORDER BY NO_OF_WORKERS DESC;
```

24. Write an SQL query to print details of the Workers who are also Managers.

```
SELECT DISTINCT W.FIRST_NAME, T.WORKER_TITLE
FROM Worker W
INNER JOIN Title T
ON W.WORKER_ID = T.WORKER_REF_ID
AND T.WORKER_TITLE in ('Manager');
```

25. Write an SQL query to fetch duplicate records having matching data in some fields of a table.

```
SELECT WORKER_TITLE, AFFECTED_FROM, COUNT(*)
FROM Title
GROUP BY WORKER_TITLE, AFFECTED_FROM
HAVING COUNT(*) > 1;
```

26. Write an SQL query to show only odd rows from a table.

```
SELECT * FROM Worker WHERE MOD(WORKER_ID, 2) <> 0;
```

27. Write an SQL query to show only even rows from a table.

```
SELECT * FROM Worker WHERE MOD(WORKER_ID, 2) = 0;
```

28. Write an SQL query to clone a new table from another table.

```
--- Ignore Data
CREATE TABLE WorkerClone LIKE Worker;

--- Duplicate The Data
CREATE TABLE WorkerClone SELECT * FROM Worker;
```

29. Write an SQL query to fetch intersecting records of two tables.

```
SELECT * FROM Worker WHERE WORKER_ID IN (SELECT WORKER_ID FROM WorkerClone);
```

30. Write an SQL query to show records of one table that are not present in another.

```
SELECT * FROM Worker WHERE WORKER_ID NOT IN (SELECT WORKER_ID FROM WorkerClone);
```

31. Write an SQL query to show the current date and time.

```
SELECT CURDATE();
SELECT Now();
```

32. Write an SQL query to show the top n (say 10) records of a table.

```
SELECT * FROM Worker ORDER BY Salary DESC LIMIT 10;
```

33. Write an SQL query to determine the nth (say n=5) highest salary from a table.

```
SELECT SALARY FROM Worker ORDER BY SALARY DESC LIMIT <n - 1>,1;

SELECT SALARY FROM (SELECT SALARY FROM Worker ORDER BY Salary DESC LIMIT 5) sum ORDER BY Salary ASC LIMIT 1;
```

34. Write an SQL query to determine the 5th highest salary without using TOP or limit method.

```
SELECT Salary FROM Worker w1
WHERE 4 = (
    SELECT COUNT(DISTINCT w2.Salary) FROM Worker w2 WHERE w1.Salary >= w2.Salary
    );
```

35. Write an SQL query to fetch the list of employees with the same salary.

```
SELECT DISTINCT w1.FIRST_NAME, w1.Salary FROM Worker w1, Worker w2 WHERE w1.Salary = w2.Salary AND w1.Worker_Id <> w2.Worker_Id;
```

36. Write an SQL query to show the second highest salary from a table.

```
SELECT Salary FROM Worker w1 WHERE 1 = (SELECT COUNT(DISTINCT(Salary)) FROM Worker w2 WHERE w1.Salary < w2.Salary);
```

37. 