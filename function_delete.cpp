#include <iostream>


template <typename T>
T doubled(const T& i_one){
	return i_one + i_one;
}

std::string doubled(const std::string& i_one) = delete;

int main(){
	std::cout << doubled(1) << std::endl;
	std::cout << doubled(1u) << std::endl;
	std::cout << doubled<float>(1.) << std::endl;

#ifdef WE_WANT_A_COMPILER_ERROR
	std::cout << doubled(std::string("1")) << std::endl;
#endif
}

