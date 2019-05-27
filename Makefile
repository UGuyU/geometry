err.o: err.c	
	gcc -Wall -c err.c	
main.o: main.c
	gcc -Wall -c main.c
geom: main.o err.o
	mkdir bin	
	mkdir build
	cp err.o build
	cp main.o build
	gcc -Wall -o bin/geom build/main.o build/err.o
	rm -rf *.c.save
	rm -rf *.o
all: geom
