deposit-calc: main.o deposit.o
	gcc -o bin/deposit-calc build/main.o build/deposit.o

main.o:
	gcc -o build/main.o -c src/main.c
deposit.o:
	gcc -o build/deposit.o -c src/deposit.c

.PHONY: clean
clean:
	rm -f build/*