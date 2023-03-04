charani: main.o linear.o
	g++ -o charani main.o linear.o
main.o: main.cpp
	g++ -c main.cpp
linear.o: linear.cpp
	g++ -c linear.cpp
