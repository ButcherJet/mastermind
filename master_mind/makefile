#makefile

main : main.o  game.o code.o
	g++ -o main main.o game.o code.o -Wall

main.o : main.cpp
	g++ -c -o main.o main.cpp

game.o : game.cpp
	g++ -c -o game.o game.cpp

code.o : code.cpp
		g++ -c -o code.o code.cpp
clean :
	rm -rf *.o
