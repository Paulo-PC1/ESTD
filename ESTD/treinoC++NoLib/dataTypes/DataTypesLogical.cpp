#include <iostream>

int main(void)
{
    //C++ Logicos
    
    bool x = true;
    bool y = false;
    
    bool X = true;
    bool Y = false;
    
    //logical operators
    /**
     *  and == &&
     * or == ||
     * xor == ^
     * not == !
     */
    
    std::cout << "True: " << x << std::endl;
    std::cout << "False: "<< y << std::endl;
    
    std::cout << std::boolalpha; // mostar true or false ao inves de 1 e 0
    
    std::cout << "True: " << X << std::endl;
    std::cout << "False: "<< Y << std::endl;
    
    return 0;
}