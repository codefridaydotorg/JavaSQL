# Normalization

It is an optimized way of storing data in a Databse. It is used to minimize redundancy from a relation or set of relations.

1. Row Level Duplicacy: No record should be repeated.
2. Column Level Duplicacy: Some columns of the Database are the same.

**1 Normal Form**

*Tables should not contain any multivalue attribute.*

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

**2 Normal Form**

1 Normal Form + All non-prime attributes should be fully functional dependent 