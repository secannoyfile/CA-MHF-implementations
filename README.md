The implementations of cost asymmetric memory hard functions (CA-MHFs). Here are the examples of CA-Argon2 and CA-DRS+BRG.

# CA-Argon2_REDME

`CA-Argon2` is a command-line utility to test specific Argon2 instances on your system. You can run on Windows and Linux system. The commands are similar under different operating systems.

## Windows

To show usage instructions, run `CA-Argon2.exe` by using CMD as

```
Usage:      CA-Argon2.exe password salt [-t iteration] [-m memory] [-p parallelism] [-l hash length]
Parameters:
        password	       The input password, for instance, a user’s password
        salt               The salt to use, at least 8 characters
        -t N	           Sets the maximum number of the iterations to N, the iteration number is a random number 1<=tx<=t
        -m N	           Sets of the memory capacity of 2^N KB
        -p N	           Sets of parallelism to N threads 
        -l N 	           Sets of hash output length to N bytes
```

**Note** : This program can only run in **64-bit** operating system.

## Linux

Open a terminal in the CA-Argon2-Linux folder and type make to compile the executable file. To show usage instructions run `./argon2` as

```
Usage:      ./argon2 password salt [-t iteration] [-m memory] [-p parallelism] [-l hash length]
Parameters:
        password	       The input password, for instance, a user’s password
        salt               The salt to use, at least 8 characters
        -t N	           Sets the maximum number of the iterations to N, the iteration number is a random number 1<=tx<=t
        -m N	           Sets of the memory capacity of 2^N KB
        -p N	           Sets of parallelism to N threads 
        -l N 	           Sets of hash output length to N bytes
```

# CA-DRS-Argon2_README

`CA-DRS-Argon2` is a command-line utility to test CA-DRS-Argon2 instances on your system. You can run on Windows and Linux system. The commands are similar under different operating systems.

## Windows

To show usage instructions, run `Argon2.exe` by using CMD as

```
Usage:      Argon2.exe password salt [-t iteration] [-m memory] [-p parallelism] [-l hash length]
Parameters:
        password	       The input password, for instance, a user’s password
        salt               The salt to use, at least 8 characters
        -t N	           Sets the maximum number of the iterations to N, the iteration number is a random number 1<=tx<=t
        -m N	           Sets of the memory capacity of 2^N KB
        -p N	           Sets of parallelism to N threads 
        -l N 	           Sets of hash output length to N bytes
```

**Note** : This program can only run in **64-bit** operating system.

## Linux

Open a terminal in the CA-DRS-Argon2-Linux folder and type make to compile the executable file. To show usage instructions run `./argon2` as

```
Usage:      ./argon2 password salt [-t iteration] [-m memory] [-p parallelism] [-l hash length]
Parameters:
        password	       The input password, for instance, a user’s password
        salt               The salt to use, at least 8 characters
        -t N	           Sets the maximum number of the iterations to N, the iteration number is a random number 1<=tx<=t
        -m N	           Sets of the memory capacity of 2^N KB
        -p N	           Sets of parallelism to N threads 
        -l N 	           Sets of hash output length to N bytes
```




