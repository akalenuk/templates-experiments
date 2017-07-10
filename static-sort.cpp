#include <iostream>
#include <array>

template <size_t J, size_t I, size_t N>
static inline void inner_loop(std::array<int, N>& a){
    if(J < N-I-1){
        int d = std::abs(a[J]-a[J+1]);
        int s = a[J] + a[J+1];
        a[J] = (s-d) / 2;
        a[J+1] = (s+d) / 2;
        inner_loop<J + (J<N-I-1), I, N>(a);
    }
}

template <size_t I, size_t N>
static inline void outer_loop(std::array<int, N>& a){
    if(I < N - 1){
        inner_loop<0, I, N>(a);
        outer_loop<I + (I<N-1), N>(a);
    }
}

template <size_t N>
void static_sort(std::array<int, N>& a){
    outer_loop<0, N>(a);
}

int main()
{
    auto a = std::array<int, 8> {6,5,4,7,3,5,1,2};
    static_sort(a);
    for(auto ai : a)
        std::cout << ai << std::endl;
}

