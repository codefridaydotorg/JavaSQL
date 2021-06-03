# BlockCHain

It is a chain of blocks that contain information, it was originally defined in 1991 by a group of researchers to timestamp documents to make it impossible for anyone to backdate or tamper a record. It was later adapted by Satoshi Nakamoto to create Bitcoin. 

## Basic Structure

Each Block contains 3 main features.
1. Data
2. Hash
3. Hash of Previous Block

The Data here can vary according to the functionality of the Block. Eg The Bitcoin Block's data holds the transaction information of about 2400 transactions.

The Hash can be compared to the fingerprint of the Block a way to identify the Block, any tampering with the data inside the block wil cause the Hash of the Block to change thus notifying the community of a fraudulent behaviour.

The previous hash forms the chain of blocks in the ledger, it also makes the Block Chain extremely secure as it would require and almost astronomical computation power to cheat a blockchain with large communities.


## Why Block Chains Are Secure

All the blocks except for the Genesis Block, contains the Hash of the previous block. Thus if someone was to tamper the data of a previous block. It's hash would change making it impossible for the block succeeding it find it. On the otherhand if a fraudulent block was added to the ledger, all it would take is a little time before the rest of the BlockChain community to catch upto it. In every case, the fraudulent block will be identified and eventually discarded by the community as it is near impossible to gain more than 50% computational power of the entire blockchain(the only way to continuously cheat the entire community).

Further to ensure that creating of Block takes a huge amount of resources, there is the concept of Proof Of Work which is simply a critereon to regulate the value of the hash of the block without changing the rest of the data. It is simply a variable that can change the value of the hash so that it meets a certain critereon, which will take several millions if not billions of trial and error.

Also the BlockChains are distributed, that is each person in community mantains there own copy of the ledger. Each node checks that the Block has not been tampered with and though it might be possible to fool a few members, a larger crowd will be much harder to fool. Thus to successfully tamper with a BlockChain you will have to tamper with the copy of each and every member.

## Applications

1. Creating Medical Records
2. E-Records
3. Collecting Taxes