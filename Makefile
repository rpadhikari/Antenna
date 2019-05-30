CC=gcc -c
LD=gcc
SRC=fx.c main.c
OBJ=fx.o main.o
antenna:
	$(CC) $(SRC)
	$(LD) $(OBJ) -o antenna.x -lm
clean:
	rm *.o *.x

