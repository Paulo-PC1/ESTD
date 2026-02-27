#include <iostream>

int main(void)
{
    //C++11 Inteiros:
    
    int8_t a {-1};
    uint8_t A {1};
    int16_t b {-10};
    uint16_t B {10};
    int32_t c {-20};
    uint32_t C {20};
    int64_t d {-30};
    uint64_t D {30};
    long long e {-40};
    long long int E {-40};
    unsigned long long f {50};
    unsigned long long int F {50};

    std::cout << "C++11: " << std::endl;
    std::cout << "int8_t: " << static_cast<int>(a) << std::endl;
    std::cout << "uint8_t: " << static_cast<int>(A) << std::endl;
    std::cout << "int16_t: " << b << std::endl;
    std::cout << "uint16_t: " << B << std::endl;
    std::cout << "int32_t: " << c << std::endl;
    std::cout << "uint32_t: " << C << std::endl;
    std::cout << "int64_t: " << d << std::endl;
    std::cout << "uint64_t: " << D << std::endl;
    std::cout << "long long: " << e << std::endl;
    std::cout << "long long int: " << E << std::endl;
    std::cout << "unsigned long long: " << f << std::endl;
    std::cout << "unsigned long long: " << F << std::endl;                                    
    return 0;
}