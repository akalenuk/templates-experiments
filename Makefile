all:
	g++ -O3 -std=c++11 static-sort.cpp -o static-sort
	g++ -O3 -std=c++11 function_templates.cpp -o function_templates
	./static-sort
	./function_templates
clean:
	rm ./static-sort
	rm ./function_templates
