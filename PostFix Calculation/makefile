all: q1.o q2.o q1 q2


q1.o: q1.c q1.h
	gcc -Wall -std=c99 -c -pedantic q1.c -o q1.o

q2.o: q2.c q2.h
	gcc -Wall -std=c99 -c -pedantic q2.c -o q2.o 

q1: q1.o
	gcc -Wall -pedantic q1.o -o q1

q2: q2.o 
	gcc -Wall -pedantic q2.o -o q2

clean: 
	rm -i *.o q1 q2