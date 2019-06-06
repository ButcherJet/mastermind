#makefile

main : main.o color.o game.o
	g++ -o main main.o color.o game.o

main.o : main.cpp
	g++ -c -o main.o main.cpp

color.o : color.cpp
	g++ -c -o color.o color.cpp

game.o : game.cpp
	g++ -c -o game.o game.cpp

clean :
	rm -rf *.o
