CFLAGS := -g -Wall -Wextra -fanalyzer

prog_ex12: ascii_code.o string_to_int.o integer_part.o fractional_part.o main.o
	gcc ascii_code.o string_to_int.o integer_part.o fractional_part.o main.o -o prog_ex12

ascii_code.o: ascii_code.c ascii_code.h
	gcc $(CFLAGS) -c ascii_code.c -o ascii_code.o

string_to_int.o: string_to_int.c ascii_code.h string_to_int.h
	gcc $(CFLAGS) -c string_to_int.c -o string_to_int.o

integer_part.o: integer_part.c string_to_int.h
	gcc $(CFLAGS) -c integer_part.c -o integer_part.o

fractional_part.o: fractional_part.c string_to_int.h
	gcc $(CFLAGS) -c fractional_part.c -o fractional_part.o

main.o: main.c integer_part.h fractional_part.h
	gcc $(CFLAGS) -c main.c -o main.o

clean:
	rm -f *.o prog_ex12

run: prog_ex12
	./prog_ex12