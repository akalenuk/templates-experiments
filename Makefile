all:
	g++ -O3 -std=c++11 static-sort.cpp -o static-sort
	./static-sort
clean:
	rm ./tests/static-sort
