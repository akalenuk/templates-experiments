#include <iostream>
#include <vector>

template <class T, unsigned int RADIX_BITS> struct Trie{
    constexpr static unsigned int mask(unsigned int radix_bits){
        return (radix_bits == 1) ? 1 : (1 + (mask(radix_bits - 1) << 1));
    }
    constexpr static unsigned int pow_of_2(unsigned int exp){
        return (exp == 1) ? 2 : (2*pow_of_2(exp - 1));
    }
    constexpr static unsigned int steps_in_byte = 8 / RADIX_BITS;

    std::vector<Trie*> subtries;
    T value;

    Trie(){
        subtries.resize( pow_of_2(RADIX_BITS), nullptr );
    }

    ~Trie(){
        for(auto* trie : subtries)
            delete trie;
    }

    void set(const char* key, T value){
        Trie* trie = this;
        while(key[0] != '\0'){
            char c = key[0];
            for(unsigned int i = 0; i < steps_in_byte; i++){
                int radix0 = c & mask(RADIX_BITS);
                c = c >> RADIX_BITS;
                if(trie->subtries[radix0] == nullptr)
                    trie->subtries[radix0] = new Trie();
                trie = trie->subtries[radix0];
            }
            key++;
        }
        trie->value = value;
    }

    T get(const char* key){
        Trie* trie = this;
        while(key[0] != '\0'){
            char c = key[0];
            for(unsigned int i = 0; i < steps_in_byte; i++){
                int radix0 = c & mask(RADIX_BITS);
                c = c >> RADIX_BITS;
                trie = trie->subtries[radix0];
            }
            key++;
        }
        return trie->value;
    }
};

int main(){
	auto test_trie = Trie<double, 4>();
	test_trie.set("1", 2.);
	test_trie.set("2", 1.);
	std::cout << test_trie.get("1") << test_trie.get("2") << std::endl;
}
