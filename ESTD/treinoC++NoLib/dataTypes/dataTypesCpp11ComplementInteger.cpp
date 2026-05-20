#include <iostream>
#include <cstdint>

int main(void)
{
    //C++11 Inteiros:
    
    int_fast8_t a {-1};
    uint_fast8_t A {1};
    int_fast16_t b {-10};
    uint_fast16_t B {10};
    int_fast32_t c {-20};
    uint_fast32_t C {20};
    int_fast64_t d {-30};
    uint_fast64_t D {30};
    
    int_least8_t e {-1};
    uint_least8_t E {1};
    int_least16_t f {-10};
    uint_least16_t F {10};
    int_least32_t g {-20};
    uint_least32_t G {20};
    int_least64_t h {-30};
    uint_least64_t H {30};

    std::cout << "C++11: " << std::endl;
    std::cout << "int_fast8_t: " << static_cast<int>(a) << std::endl;
    std::cout << "uint_fast8_t: " << static_cast<int>(A) << std::endl;
    std::cout << "int_fast16_t: " << b << std::endl;
    std::cout << "uint_fast16_t: " << B << std::endl;
    std::cout << "int_fast32_t: " << c << std::endl;
    std::cout << "uint_fast32_t: " << C << std::endl;
    std::cout << "int_fast64_t: " << d << std::endl;
    std::cout << "uint_fast64_t: " << D << std::endl;   
    std::cout << "-------------------" << std::endl; 
    std::cout << "int_least8_t: " << static_cast<int>(e) << std::endl;
    std::cout << "uint_least8_t: " << static_cast<int>(E) << std::endl;
    std::cout << "int_least16_t: " << f << std::endl;
    std::cout << "uint_least16_t: " << F << std::endl;
    std::cout << "int_least32_t: " << g << std::endl;
    std::cout << "uint_least32_t: " << G << std::endl;
    std::cout << "int_least64_t: " << h << std::endl;
    std::cout << "uint_least64_t: " << H << std::endl;                                  
    return 0;
}