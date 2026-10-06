prog_ex10: size_string.o main.o
	gcc size_string.o main.o -o prog_ex10

size_string.o: size_string.c size_string.h
	gcc -g -Wall -Wextra -fanalyzer -c size_string.c -o size_string.o

main.o: main.c size_string.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

clean:
	rm -f *.o prog_ex10

run: prog_ex10
	./prog_ex10