all: test
wregex.o: wregex.cpp
	g++ --std=c++0x wregex.cpp -c

main.o: main.cpp
	g++ --std=c++0x main.cpp -c

main: main.o wregex.o
	g++ -o main main.o wregex.o

clean:
	rm *.o main

test: main
	./main
