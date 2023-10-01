#Makefile para a segunda parte do trabalho
all: *.o
	gcc *.o -o entrega -lm
%.o: %.c
	gcc $*.c -c
clean: *.o
	rm *.o

