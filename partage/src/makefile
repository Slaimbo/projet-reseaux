OBJ=iftun.o main.o extremite.o

tunnel.exe: $(OBJ)
	gcc -Wall $(OBJ) -o tunnel.exe

main.o: main.c iftun.h extremite.h
	gcc -Wall -c main.c -o main.o

iftun.o: iftun.h iftun.c
	gcc -Wall -c iftun.c -o iftun.o

extremite.o : extremite.c extremite.h
	gcc -Wall -c extremite.c -o extremite.o

clean:
	rm -f *.o *.exe
