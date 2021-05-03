# Quantum Computers And Encryption

The security of the internet works with Encryption on it's foundation, we are able to communicate only because of Encryption. But is threatened by a "well" functioning Quantum Computer. Since the emergence of a Quantum Computing power is almost eminent in the future there is much debate about the security in the future.

The Quantum Computer in today's world are not the one's the world of Encryption fears. They use Quantum Annealing to solve certain optimization problems and not the "well" functioning Quantum Computers of the Future.

## How Data Exchange Works Right Now

In any basic data transfer system, our machine sends information to a server and the server sends some other information back. But there is a chance that someone in the middle will simply intercept these messages, copy their contents and then send the original recipient the message. This is avoided by scrambling our messages in a way that only the desired users are able to understand it. 

For the interceptor to cheat and decode the scrambled message, he will have to guess the right way in which we have scrambled our messages which gives us a mathematical edge as an average person switches the way they scramble the message before the interceptor is able to crack it. 

The Quantum computers however threaten this as they will provide everyone(including the interceptor) with a computing power astronomically greater than what we are used to. This will make the guessing game much easier, thus compromising privacy.

## Post Quantum Cryptography

Research Initiatives are already on their way to develop new standards for encryption which will provide us privacy even after the concept of Quantum COmputers are realized. 

Public Private Keys Must Work as a One way function. Given a private key, it is easy to create it's corresponding public key. But given a public key, it is hard to create it's private key. 

*By Easy It Means That It's Algo Runs In Polynomial Time*
*By Hard It Means That There's No Polynomial Time Algo*

By design atleast one of these processes should be easy to make this process work. The most we can do right now is make one of these processes as hard as possible. However the particular way we use rightnow can be cracked using a Quantum Computer.

*Shor's Algorithm*

The best course of action will be to make new function that will be hard to break even on a Quantum Computer. 

1. Ring Learning with Errors Key Exchange
2. McEliece Cryptosystem

## Fighting Fire With Fire-Use Quantum Crytography

Conventional Computers uses Bit(1s or 0s), while Quantum Computer Uses QuBits which can be either |1> or |0> or some combination of the two.

[Video](https://www.youtube.com/watch?v=6H_9l9N3IXU&t=448s)

If a Qubit is in 1 or 0 position we simply measure them as such, if it was in any other state the measurement will force us to choose between one of them. In any in between state, there is a 50% chance that it is measured as 0 or 1. The reason why we do this is that we cannot know what a QuBit is unless we make it ourselves or measure it and as soon as we measure it, it changes. This can be used to generate keys and know when someone is trying to eavesdrop.

### BB84

Steps By Server

1. The server generates a stream of bits.
2. Use the stream to create a key.
3. Use the bits to form a sequence of QuBits.
4. Send these QuBits to the reciever.

Steps By Reciever

1. Reciever gets the QuBits.
2. Reciever guesses the QuBits since he doesn't know which are which.
3. You have 50% chance of being right.
4. Now you compare your results with the Server to dispose of wrong guesses.

How this throws off the Eaves Dropper

1. The person will only know if the measurements were correct and not what the messaruements actually were.
2. The person cannot know the message encoded in the message because as soon as he measures the QuBits, thier values will changes and the person won't be able to send them to the original recipient.
3. The person cannot clone the QuBits and then measure the alignments as the Laws Of Physics(No-Cloning Theoram) tells that one cannot clone QuBits unless they already know what they are.
4. Further the Server and Reciever will be able to detect any tampering in the QuBits by comparing the QuBits and thus knowing that someone tried to Tamper with the QuBits(Bell's Inequality).

## Shortcomings

1. This technology cannot work with the current Internet Infrastructure.
2. Man in the Middle Attack still possible.
3. Denial Of Service attack is still possible by simply eaves dropping on purpose.
