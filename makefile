all: work07.o
	gcc -o work07.out work07.o

work07.o: work07.c
	gcc -c work07.c

run:
	./work07.out

comprun: all
	./work07.out
	