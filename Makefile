all:
	g++ -O3 -std=c++11 static-sort.cpp -o static-sort
	g++ -O3 -std=c++11 function_templates.cpp -o function_templates
	g++ -O3 -std=c++11 function_delete.cpp -o function_delete
	./static-sort
	./function_templates
	./function_delete
clean:
	rm ./static-sort
	rm ./function_templates
	rm ./function_delete
