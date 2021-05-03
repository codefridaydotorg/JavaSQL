# RSA-Rivet, Shamir and Adleman

[Link](https://www.youtube.com/watch?v=wXB-V_Keiu8)

Initially people used to heavily rely on Symetric Key Encryption. The main issue there was with this was the fact that there was no secure way to share this key without the two people being in Physical contact otherwise the concept of sharing the key itself would have become obsolete. Further you would have to manage a different key to communicate with different individuals or risk of have your security compromised by anyone of them.

A break through was then made by James ALex in 1970, he realized that "Locking" and "Unlocking" are inverse operations. He realized that all he needed to do was to buy a lock, open it and then keep the key, the open lock will then be sent to the desired recipient who will then lock his message and then send the lock itself back to the sender.

This way we can publich our open lock itself to the public and then have them securely send us messages and all this can be achieved using a single key. The technical solution to this would be to keep 2 keys, one for encryption and the other for decryption. This is further achieved using one-way function or trap door functions which are easy to perform one way but difficult to perform the other, to acheive this we turn to Modulo function of mathematics. 

Lets say we have a number m, the cipher to this will be c where

```
(m^e) mod N=c
```

This operation is easy to perform but difficult to reverse. Now lets assume that there is some other number d which when used as the exponent of c and then Mod with N would return m.

```
(c^d) mod N=m
(m^(ed)) mod N=m
```

To Generate d, we turn to another 'difficult' function, we all can multiply numbers fairly easily with effectively a linear time complexity, whereas if we were to perform prime factorisation of any number, it will be significantly more difficult to perform, since this takes quadratic time to perform which leads to it's solution becomes harder to calculate as the sizeof number increases(even years).

Let's say we generate a random prime number P1 over 150 digits, then we generate another prime number P2 of similar size. We then multiply these two prime numbers to generate a composite number N(this will take less than a second). Now if we were to distribute this number N to anyone they will have to run this on their computer for years before they can find a solution. 

### PHI Function

This function measures the breakability of the number. It outpus the count of Numbers less than equal to N that donot share a common factor with N. 

Eg.
```
φ(8)=4

Only 1, 3, 5, 7
```

Calculating φ(N) is difficult unless N is a prime number and we that. In case of a Prime Number.

```
φ(N)=N-1

Eg. φ(7)=6
```

Further φ function is multiplicative, ie. φ(A*B)=φ(A) * φ(B).

So φ(N) where N is the product of two Primes P1 and P2.

```
φ(N)=φ(P1)*φ(P2)

φ(N)=(P1-1)*(P2-1)
```

Now to connect φ function with the Modular Exponentiation, we turn to Euler's Theoram.

```
m^(φ(N))=1 mod N
```

We know that 1^k=1. This would mean that.

```
m^(k*φ(N))=1 mod N
```

Multiply both sides by m.

```
m * m^(k*φ(N))=m mod N

m^(k*φ(N)+1)=m mod N

m^(e*d)=m mod N
```

This would mean

```
e * d=k * m^(k * φ(N))=k * φ(N)+1

d = (k*φ(N)+1)/e
```

We can use d as the private key as, it will be known only if the factorisation of N is known.

### RSA-Dry Run

Lets say there are two individuals P1 and P2, P2 wishes to send a message to P1. 

Step1. P1 generates 2 prime numbers, lets say p1=53 and p2=59. So N=53*59=3127. Now

```
φ(N)=φ(3127)=φ(53)*φ(59)=52*58=3016
```

Now we take a small public Exponent e(an odd number that doesn't share a factor with φ(N)), lets say e=3.

Now

```
d=(2*(3016)+1)/3=2011
```

Next P1 will use N and e as public keys, and rest of the values will be secured as Private Keys. Now P1 sends the public keys to P2 to lock his message. 

Now lets say P2's message(m) is represented by 89. He will lock the message using the formula

```
Encrypted Message=89^3 mod 3127=1394
```

We will now send the Encrypted Message(c) back to P1.

P1 will now decrypt the message using the Private Key.

```
c^d=m mod N
```

Putting the values we get.

```
1394^2011=m mod 3127

From this we get m=89 which was the original message
```

*Note that thought the value of N, c and e might be visible to anyone who has intercepted the messages still won't be able to decrypt the message since they don't know the prime factorization of N. By simply making N large enough we can ensure that the message will not be decrypted for several years*