# Bitcoin

Bitcoin is a fully digital currency which requires no central authorities like Banks or Governments to issue and manage them. It was developed by a mysterious figure named Satoshi Nakamoto.

Bitcoins work on a public ledger system of money. Each time a person makes a transaction they add another line into the ledger recording the exchange. This however poses an issue of trust where there is no way to verify that a person has actually made the transaction or not. To solve this problem the concept of digital signature is used to create a way to verify the transaction, this is acheived through mantaining a public-private key pair.

### Functionality

Sign(Message, private-key)=Signature
Verify(Message, Signature, public-key)=True/False

Now the length of the Signature creates all the difference in the world, as though a person can crack it using a very powerful computer, it will take him effectively 2^(length of signature) in every try. Thus a sufficiently long signature can secure the system. The transaction further uses some sort of key(usually time stamps) to ensure that no person simply pasted a transaction multiple times on the ledger.

### Protocol

1. Anyone can add lines to ledger.
2. Only signed transactions are valid.
3. No overspending(Make sure that the person paying someone does not spend any money that they already didn't have).
4. Broadcast the transactions.

Now there is the issue of trust, Who controls the ledger. To solve this we provide each benificiary a seperate copy of the ledger with each of them mantaining it simultaneously by the person making the transaction broadcasting it to the world. Now here comes multiple ways to solve this problem of ensuring that all the people actually record the broadcast that they recieved into their ledgers. Bitcoin tackles this problem by choosing to go with the solution which put in the most computational work.

### Crypographic Hash Function

The bitcoin tackles the problem as ensuring that any fraudulent behaviour would require an infeasible amount of computational work to be put into the process.

A hash function is a function which when fed an input will produce a "random looking" output of bits of fixed length eg SHA256 produces a length of 256 bits. Here "random looking" means even the slightest change in the output in a way that it is too complex to follow, while the same input will always produce the same output also inorder to guess the input from the output has to be "impossible" (Rightnow the only way to do this will be to check every possible input and then compare it to the output in question which is too complex to perform).

Eg SHA256

### How Bitcoin Integrates Hash Functions

1. Organize a given ledger into Blocks, where each block consists of a list of transactions together with the proof of work.

### Proof Of Work

To ensure that each time a ledger adds a transaction/block into its records and to further makesure that any fraudulent transaction registry takes an almost infinite and un economic amount of effort. We make sure that the cryptographic hash function's result starts with a certain sequence of characters(the length of this sequence can vary with the changing number of miners in the community), this is acheived with the help of an extra variable in the input of the Hash function which is called "proof of work". The miner will change this variable until they find a suitable one and only a block with an appropriate proof of work will be authorized to be added into the Block Chain Ledger.

The Proof of work thus becomes extremely important for the Bitcoin and it's application as a Block Chain as each block(except for the Genesis Block) keeps the hash of the previous block within them. This makes it almost impossible for any to successfully perform a fraudulent transaction and even more difficult to currrupt a previously existing record as each block will require the calculation of another proof of concept.

Bitcoin manipulates the length of the initial sequence such that there will be only 1 correct block and only one rewarded miner every 10 minutes. Every 210,000 blocks(Every 4 years) the reward for the Mining of Bitcoin will get cut in half.

### Real World Functioning Of Bitcoin

In the real world we allow anyone to become a Block creator, their job is to listen for transactions taking place throughout the world, recording them into a block and then find an appropriate Proof Of Work variable with them and then broadcast it back to be recorded in the public ledger. For all there hardwork the Block Creator will be awared with a certain amount of currency which is created out of thin air.

Block Creators are called Miners.
Block Creating is called Mining.

Since a lot of people are involved in the Job of guessing the numbers only the ones who guess/find the required proof of concept first are rewarded for their work.

While anyone else who is simply using Bitcoin for transaction, instead of listening to transactions they just start listening to blocks broadcasted by the miners and updating their personal copies of the Block Chain. Now the issue arises when we come across two conflicting copies of our blockchain. Here the protocol demands us to simply acknowledge the longest BlockChain as it is the one with the mostwork put into it while deiscarding the other. Incase the length of both the Block Chains is same, wait until the issue of length is resolved.

Miners can also earn a transaction fee. That is each time a person makes a transaction they can add a transaction fee with them to reward the miner of the block which includes the transaction. This is done to incentivise the miners. This is done because each block can only include only 2400 transactions, this is often looked upon as an un-neccessary restrictions as in comparision companies like Visa can handle several times that number of transactions every second and is certainly a great propblem to bridge before the Bitcoins can be used for complete public use.

### How to cheat someone using Block Chain and Why they fail

Suppose a person P1 is trying to trick Person p2 into thinking that he has paid him the amount that he owed, to do this he will have to first beat everyone else into creating a valid Block and then send it to P2 alone without broadcasting it to the rest. This can happen but P1 will from now have to keep guessing the correct Blocks for P2 for all eternity or for atleast as long as P2 is using Bitcoin. This is extremely difficult and borderline impossible as sooner or later the other paticipants of the Blockchain will catch upto P1 and P2 will be able to identify the fraudulent block sent to him by P1 as he discards the shorter blockchain of P1 to the longer and more reliable chain of the public.

The reason why P1 fails is that to succeed he would have to be in control of more than 50% of the computational power of the entire network which gets more and more difficult each time someone joins the community. This however can actually happen and is called the 51% attack.

### How To Avoid Being Cheated

The simplest way to achieve this will be to not trust every new block that you recieve but keep it marked as "Not safe" until the length of the blockchain from that "Not Safe" point grows to a certain length. If for anyreason you receive a longer conflicting chain, simply discard the existing chain in favor of the longer one.