#include <iostream>
#include <string> // uso de std::string
#include <cwchar> // para wchar_t e uso de wcout

int main(void)
{
    //C++ Char e String
    
    char palavraChar {'C'}; 
    char fraseChar[50] {"Char Grandao Pae"};
    unsigned char palavraUchar{'A'}; 
    unsigned char fraseUchar[50] {"Unsigned Char Grandao"}; 
    wchar_t palavraWchar{L'P'};
    wchar_t fraseWchar[50]{L"Wchar_t Grandao Pae"};
    std::string fraseString{"Uma String Muuuito Grande"};
    
    
    std::cout << "char: " << palavraChar << std::endl;
    std::cout << "char[50]: " << fraseChar << std::endl;
    std::cout << "unsigned char: " << palavraUchar << std::endl;
    std::cout << "unsigned char[50]: " << fraseUchar << std::endl;
    std::wcout << L"wchar_t: " << palavraWchar << std::endl;
    std::wcout << L"wchar_t[50]: " << fraseWchar << std::endl;
    std::cout << "string: " << fraseString << std::endl;

    return 0;
}