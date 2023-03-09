#this is make file
CA-DRS+BRG:test.o blake2b.o argon2.o encoding.o core.o thread.o opt.o
	gcc -o CA-DRS+BRG test.o blake2b.o argon2.o encoding.o core.o thread.o opt.o -lpthread
test.o:test.c
	gcc -c test.c
blake2b.o:blake2b.c
	gcc -c blake2b.c
CA-DRS+BRG.o:argon2.c 
	gcc -c argon2.c
encoding.o:encoding.c
	gcc -c encoding.c
core.o:core.c
	gcc -c core.c
thread.o:thread.c
	gcc -c thread.c
opt.o:opt.c
	gcc -c opt.c
clean:
	em -rf *.o CA-DRS+BRG
