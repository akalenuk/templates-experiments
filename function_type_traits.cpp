#include <iostream>
#include <type_traits>

template <typename T>
T doubled(const T& i_one, typename std::enable_if<std::is_floating_point<T>::value >::type* = 0){
	return i_one + i_one;
}

template <typename T>
T doubled(const T& i_one, typename std::enable_if<std::is_integral<T>::value >::type* = 0){
	return i_one + i_one;
}

int main(){
	std::cout << doubled(1) << std::endl;
	std::cout << doubled(1u) << std::endl;
	std::cout << doubled<float>(1.) << std::endl;

#ifdef WE_WANT_A_COMPILER_ERROR
	std::cout << doubled(std::string("1")) << std::endl;
#endif
}

