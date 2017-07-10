#include <iostream>

int added(){
	return 0;
}

template <typename Head, typename... Tail>
Head added(const Head& i_head, Tail... i_tail){
	return i_head + added(i_tail...);
}

template <typename... Tail>
std::string added(const std::string& i_head, Tail... i_tail) = delete;

int main(){
	std::cout << added(1.f, 2u, 3l) << std::endl;
#ifdef WE_WANT_A_COMPILER_ERROR
	std::cout << added(std::string("1"), 2u, 3l) << std::endl;
#endif
}

