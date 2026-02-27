#include <iostream>
#include <iomanip>

int main(void)
{
    //C++11 Inteiros:
    
    float a {1.5};
    double A {2.55};
    long double b {3.14159L};

    std::cout << "C++98/11: " << std::endl;
    std::cout << "float: " << a << std::endl;
    std::cout << "double: " << A << std::endl;
    std::cout << "long double: " << std::fixed << std::setprecision(5) << double(b) << std::endl;
                                   
    return 0;
}