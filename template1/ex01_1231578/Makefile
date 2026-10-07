
#1231578: Rodrigo Marques Rodrigues: 2DF : version A
CFLAGS := -g -Wall -Wextra -fanalyzer

ex_1231578: func1.o func2.o main.o
	gcc func1.o func2.o main.o -o ex_1231578

func1.o: func1.c 
	gcc $(CFLAGS) -c func1.c -o func1.o

func2.o: func2.c func1.h
	gcc $(CFLAGS) -c func2.c -o func2.o

main.o: main.c func2.h
	gcc $(CFLAGS) -c main.c -o main.o

clean:
	rm -f *.o prog_ex1231578

