#include <iostream>

#define CONSTANTE 10 // pre-compilacao

int main(void)
{
    const int a {100};
    constexpr float b {2.5};
    auto x {25};
    auto y {3.5};
    
    std::cout << "#define: " << CONSTANTE << std::endl;
    std::cout << "const: " << a << std::endl;
    std::cout << "constexpr: " << b << std::endl;
    std::cout << "auto identificado como int: " << x << std::endl;
    std::cout << "auto identificado como double: " << y << std::endl;
    
    return 0;
}