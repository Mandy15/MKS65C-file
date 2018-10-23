all: file.o
	gcc -o file file.o

file.o: file.c
	gcc -c file.c

clean:
	rm file file.o

run:
	./file
