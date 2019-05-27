err.o: err.c
	gcc -Wall -c err.c
main.o: main.c
	gcc -Wall -c main.c
geom: main.o err.o
	gcc -Wall -o geom main.o err.o
	rm -rf *.o
	rm -rf *.c.save
all: geom
