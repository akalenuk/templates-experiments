#include <iostream>

template <typename T>
T doubled_1(const T& i_one){
	return i_one * 2;
}

template <typename T>
T doubled_2(const T& i_one){
	return i_one + i_one;
}

#ifdef WE_WANT_A_COMPILER_ERROR
template <typename T>
T doubled_3(const T& i_one){
	blah_blah i_one + i_one;
}
#endif

template <typename T>
T doubled_4(const T& i_one){
	return i_one.blah_blah;
}

int main(){
	std::cout << doubled_1(1) << std::endl;
	std::cout << doubled_1(1u) << std::endl;
	std::cout << doubled_1<float>(1.) << std::endl;

	std::cout << doubled_2(std::string("1")) << std::endl;
}

