CA-MHF is a cost asymmetric memory hard password hashing function based on the state-of-the-art Argon2 (see https://github.com/P-H-C/phc-winner-argon2). This CA-MHF uses a secret randomized memory iteration number (denoted as t) to make the guessing cost of correct and incorrect guesses asymmetric. When a user registers an account, the memory iteration is randomly assigned with a number 1<=tx<=t. In other words, the atomic hash Hash_0 (the memory hard function when t=1) is iterated for t times. When an attacker guesses, the guessed PW'≠PW, she has to hash Hash_0 for all t times (instead of tx times) to find that the chosen password is incorrect, making the guessing cost of correct and incorrect passwords asymmetric. Since an attacker spends most of her guesses on incorrect passwords, this CA-MHF can increase the guessing costs and thus reduce the cracked proportion. 

Parameters
CA-MHF is parameterized by:
1)	A time cost t, which defines the maximum amount of computation needed, given in the number of iterations.
2)	A memory cost m, which defines the memory capacity, given in KB.
3)	A parallelism degree, which defines the number of parallel threads.

Command-line utility

Run CA-Argon2.exe in the command processor.

CA-Argon2.exe password salt [-t iteration] [-m memory] [- parallelism] [-l hash length]
password	       The input password, for instance, a user’s password
salt               The salt to use, at least 8 characters
-t N	           Sets the maximum number of the iterations to N, the iteration number is a random number 1<=tx<=t
-m N	           Sets of the memory capacity of 2^N KB
-p N	           Sets of parallelism to N threads 
-l N 	           Sets of hash output length to N bytes
