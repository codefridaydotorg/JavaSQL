# Normalization

It is an optimized way of storing data in a Databse. It is used to minimize redundancy from a relation or set of relations.

1. Row Level Duplicacy: No record should be repeated.
2. Column Level Duplicacy: Some columns of the Database are the same.

**1st Normal Form**

1. Contains only atomic values.
2. Only single valued attributes are allowed.

![Before](.\Images\Before1NF.png)
<center>Before</center>

![After](.\Images\After1NF.png)
<center>After</center>

**2nd Normal Form**

1. 1 Normal Form.
2. All the Non-Key Attributes are fully functional dependent on the Primary Key.

*An attribute is fully-functional dependent on another attribute if it's fully dependent on that attribute and not it's proper subset.*

![Before](.\Images\Before2NF.png)
<center>Before</center>

![After](.\Images\After2NF.png)
<center>After</center>

**3rd Normal Form**

1. 2NF
2. No Transitive Dependency.

**BCNF**

1. 3NF.
2. For every Functional Dependency, the LHS is a superkey.

**4th Normal Form**

1. BCNF.
2. Only 1 multivalued dependency is allowed.

**5th Normal Form**

1. 4NF.
2. R should not contain any Join Dependency.
3. Joining should be Loss-Less.

## Important Information

*Closure Method*

*Used to find the Candidate key.*

R(A,B,C,D) ===> All attributes.

FD  {A->B, B->C, C->D}

A->A

A->ABCD

Since A can be used to determine all other attributes, it is a candidate key.

*Candidate Key is a subset of superkey, a candidate key is minimal.*

Prime Attribute: Attribute used for making a candidate key.

*Trival Functional Dependency: A database dependency that occurs when you describe an FD of an attribute or their collection that includes the original attributes.*

*Non-Trival Functional Dependency: When A===>B holds true where B is not a subset of A.*