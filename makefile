all: work07.o work07_funcs.o
	gcc -o work07.out work07.o work07_funcs.o

work07.o: work07.c work07_funcs.h
	gcc -c work07.c

work07_funcs.o: work07_funcs.c work07_funcs.h
	gcc -c work07_funcs.c

run:
	./work07.out

comprun: all
	./work07.out
	