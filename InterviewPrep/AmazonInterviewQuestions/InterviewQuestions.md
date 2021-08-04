# Amazon Interview Questions

1. How is a Map stored internally in C++ ?

**Ans.** A map in C++ is stored using a self ballancing Binary Search tree(typically a Red-Black Tree), this make the Search, Delete and Insert Queries a time complexity of O(log(N)).

2. N students in a class play a game against each other, where each student plays against all other students in the class. Also, the class leader has to arrange the students in a line, where each student lost the match with the student immediately in front of him ?

**Ans.** The first student will play against N-1 student, in the next round there will be N-2 Students left and so on. Finally there will 0 Matchs. Thus making the total number equal to N*(N-1)/2.

To store this, we will use a Binary tree where the students who have lost against a student will be on his left, while those who won against him will be on his right.

3. 