prog_ex11: string_to_int.o ascii_code.o main.o
	gcc ascii_code.o string_to_int.o main.o -o prog_ex11

ascii_code.o: ascii_code.c ascii_code.h
	gcc -g -Wall -Wextra -fanalyzer -c ascii_code.c -o ascii_code.o

string_to_int.o: string_to_int.c ascii_code.h string_to_int.h
	gcc -g -Wall -Wextra -fanalyzer -c string_to_int.c -o string_to_int.o

main.o: main.c ascii_code.h string_to_int.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

clean:
	rm -f *.o prog_ex11

run: prog_ex11
	./prog_ex11