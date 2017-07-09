#include <iostream>


template <typename T1, typename T2>
T1 added(const T1& i_one, const T2& i_two){
	return i_one + i_two;
}

template <typename T1>
T1 added(const T1& i_one, const std::string& i_two) = delete;

template <typename T2>
std::string added(const std::string& i_one, const T2& i_two) = delete;

std::string added(const std::string& i_one, const std::string i_two) = delete;

int main(){
	std::cout << added(1, 2) << std::endl;

#ifdef WE_WANT_A_COMPILER_ERROR
	std::cout << added(std::string("1"), std::string("2")) << std::endl;
	std::cout << added(1, std::string("2")) << std::endl;
	std::cout << added(std::string("1"), 2) << std::endl;
#endif
}

