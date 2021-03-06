# vars
CC = g++
CFLAGS = -Wall 

default: TicTacToe

# linke object files into a binary
TicTacToe: TicTacToe.o Game.o Board.o AbstractPlayer.o Human.o Computer.o
	$(CC) $(FLAGS) -o TicTacToe TicTacToe.o Game.o Board.o AbstractPlayer.o Human.o Computer.o

# compile source files into object files
Game.o: Game.cpp Game.h Human.h Computer.h
	$(CC) $(FLAGS) -c Game.cpp

Board.o: Board.cpp Board.h
	$(CC) $(FLAGS) -c Board.cpp

AbstractPlayer.o: AbstractPlayer.cpp AbstractPlayer.h
	$(CC) $(FLAGS) -c AbstractPlayer.cpp

Human.o: Human.cpp Human.h
	$(CC) $(FLAGS) -c Human.cpp

Computer.o: Computer.cpp Computer.h
	$(CC) $(FLAGS) -c Computer.cpp

# remove old binary, and object *.o files, and *~ backup files
clean:
	rm -rf TicTacToe *.o *.~