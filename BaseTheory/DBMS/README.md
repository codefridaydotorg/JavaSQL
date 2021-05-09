# DBMS- Data Base Management System

Data Base   =   Data    +   DBMS
(For Storage)   (Collection Of Related Data)    (Supporting Software)

Data
1. Structured
    1. RDBMS(Tables)
2. Un-Structured
    1. Web Pages

File System vs RDBMS

1. High Efficiency for search for RDBMS.
2. RDBMS requires no metadata.
3. Concurrency: RDBMS allows simultaneous access to multiple user(Read-Read etc).
4. Security: Role Based(Hierarichal).
5. Data Redundancy.

## Architectures

1. 2 Tier Architecture(Client-Server Architecture): Several Clients simultaneously connect to a single Database from where they can perform the required functionalities.

2 Layers are Client Layer and Data Layer.

Advantage: Extremely simple architecture. Easy to implement, mantain and use. 

Disadvantage: Whenever the number of users is large or changing, this architecture would fail. The risk of security is also there.

Eg. The Window/Physical functionalites provided by the organizations where a person is sitting on the other side of the window uses a computer software to produce the required results.

2. 3 Tier Architecture: There are several client interfaces interacting with an Application/Buisness Layer.

3 Layers are Client Layer, Buisness/Application Layer and Data Layer.

Advantage: Highly Scalable, Higher Security, Simpler for User.

Disadvantage: High Mantainance, Higher Complexity.

Eg. Any online service available to us rightnow.

## Schema

*It is the Logical representation of data, used while the development process of the software. It is used to describe the structure of the Schema.*

Schema = Structure

**3 Schema Architecture**

The concept was introduced to make sure that the user and the data don't interact directly.

Used to implement Abstraction.

**3 Levels of Three Schema Architecture** are

1. **View Level**:      Also called **External Schema**, it represents how the user will be able to view the data. It can be different according to the different users who might be using the Database(Students, Teachers, Dean of a College). Front-End Application Designer.

2. **Logical Level**:   Also called **Conceptual Schema**, to represent the actual representation of Schema, it represents how the Data is actually stored in the physical space, it is represented through the ER-Model. Work of Database Designer.

3. **Physical Level**:  It represents the actual physical location where the Data is stored. It deals with the actual location of Data that is stored on the Hard-Disk. Worked on by the Database Admins.

**Data Independence**

*To make the user independent of the user. It is a way to implement data abstraction.*