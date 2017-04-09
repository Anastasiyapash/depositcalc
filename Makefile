CCFLAG = -Wall -Werror
deposit-calc: main.o deposit.o
	gcc $(CCFLAG)-I -o bin/deposit-calc build/main.o build/deposit.o

main.o:
	gcc $(CCFLAG)-I -o build/main.o -c src/main.c
deposit.o:
	gcc $(CCFLAG)-I -o build/deposit.o -c src/deposit.c

.PHONY: clean
clean:
	rm -f build/*