OBJ=iftun.o main.o

tunnel.exe: $(OBJ)
	gcc -Wall $(OBJ) -o tunnel.exe

main.o: main.c iftun.h
	gcc -Wall -c main.c -o main.o

iftun.o: iftun.h iftun.c
	gcc -Wall -c iftun.c -o iftun.o

clean:
	rm -f *.o *.exe
