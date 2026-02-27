#include <iostream>

int main(void)
{
    //C++98 Inteiros:
    
    int a {-10};
    unsigned int b {10};
    short c {-20};
    short int C {-20};
    unsigned short d {30};
    unsigned short int D {30};
    long e {-40};
    long int E {-40};
    unsigned long f {50}; 
    unsigned long int F {50};

    std::cout << "C++98: " << std::endl;
    std::cout << "int: " << a << std::endl;
    std::cout << "unsigned int: " << b << std::endl;
    std::cout << "short: " << c << std::endl;
    std::cout << "short int: " << C << std::endl;
    std::cout << "unsigned short: " << d << std::endl;
    std::cout << "unsigned short int: " << D << std::endl;
    std::cout << "long: " << e << std::endl;
    std::cout << "long int: " << E << std::endl;
    std::cout << "unsigned long: " << f << std::endl;
    std::cout << "unsigned long int: " << F << std::endl;
                                        
    return 0;
}