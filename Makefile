all:
	g++ -O3 -std=c++11 static-sort.cpp -o static-sort
	g++ -O3 -std=c++11 function_templates.cpp -o function_templates
	g++ -O3 -std=c++11 function_delete.cpp -o function_delete
	g++ -O3 -std=c++11 function_type_traits.cpp -o function_type_traits
	./static-sort
	./function_templates
	./function_delete
	./function_type_traits
clean:
	rm ./static-sort
	rm ./function_templates
	rm ./function_delete
	rm ./function_type_traits
