all: hw16.o
	gcc -o hw16 hw16.o

hw16.o: hw16.c
	gcc -c hw16.c
