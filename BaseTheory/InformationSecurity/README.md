# Information Security

*CIA Triads: Confidentiality    Integrity      Availability*

**Elements:**

1. Physical: Gaurds, Cameras, Access Rights and Fence.
2. System:   Anti-Virus, Malicious Software Detection, Disable USB.
3. Process:  Authorized Users, Access Control Keys, Log Entries.

**Security Policy**

1. Regulatory
2. Advisory  
3. User Policy

Needs: Control Security Risk, Identity Theft, System Fraud, System Misuse, Theft etc.

**Security Attacks**

1. Passive
    1. No Change or Revelation About the Attack.
    2. Only Eaves Drop.
    3. Types: 
        1. Release of Private Message Content.
        2. Traffic Analysis.

2. Active
    1. Change Data or Reveal about the Attack.
    2. Types:
        1. Masquerade
        2. Relay: Corrupt Messages
        3. Denial Of Service


|Active Attacks|Passive Attacks|
|:---|:---|
|Modifies the Data|Monitors the data|
|Affects System|Doesn't affect the system|
|Can be easily detected.|Difficult to detect.|
|Threat to integrity and availability.|Threat to confidentiality.|

## Security Mechanism

1. Encryption
2. Digital Key
3. Access Control
4. Traffic Padding
5. Routing Control

## Security Services Categories

1. Authentication:  Emails, Passwords, 2FA
2. Authorization:   Diff resources allocated to different users to make sure no person has too much power.
3. Non Repudiation: Sender can deny sending the message.
4. Auditing:        Analyzing the problem after there is a problem.

**Basic Definition Of Network Security**

1. Plain Text:      No Encryption, Simple Text and Information.
2. Cipher Text:     After Encrytpion.
3. Encryption:      Process to convert plain text to an encrypted format.
4. Decryption:      Reverse of Encryption.
5. Cryptography:    Science of Hiding data.
6. CryptoAnalyst:   Person who studies Cryptography.
7. Key:             Used to encrypt message.

**Network Security Model**

![Network-Security-Model](Images\NetworkSecurityModel.jpeg)


|Symetric Key Cryptographhy|ASymetric Key Cryptographhy|
|:---|:---|
|Single Key is Used|2 Keys are Used|
|Faster|Slower|
|Utilizes Large Resource|Utilizes Less Resources|
|DES and AES Algo are used|RSA and Deffie Hellman Algo are used|
|Bulk data transmission|Secure exchange of keys|
|Easy to implement|Difficult to implement|
|Key has to be exchanged by a 3rd party or in person|Public Key can be broadcasted easily|

**Cipher Types**

1. Stream Cipher:       Encryption on every Bit.
2. Block Cipher:        Encryption on every block of plain-text.

*Subsitution Cipher=>   Subsituting data with something else, subsitute with a digit at a constant distance.*

*Playfair Cipher=>      5x5 matrix.*

*Vernam Cipher=>        Variable Key Length.*

3. Transposition Cipher:Rearrange and Not Subsitute.

    1. Columnar Transposition Technique: Push each letter into table