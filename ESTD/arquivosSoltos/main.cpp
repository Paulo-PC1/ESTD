#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string entrada;
    std::cout << "Digite uma operacao (ex: 3 + 5): ";
    std::getline(std::cin, entrada);

    std::stringstream ss(entrada);
    double num1, num2;
    char op;

    if (ss >> num1 >> op >> num2) {
        double resultado;
        switch (op) {
            case '+': resultado = num1 + num2; break;
            case '-': resultado = num1 - num2; break;
            case '*': resultado = num1 * num2; break;
            case '/':
                if (num2 != 0) resultado = num1 / num2;
                else {
                    std::cerr << "Erro: divisao por zero.\n";
                    return 1;
                }
                break;
            default:
                std::cerr << "Operador invalido.\n";
                return 1;
        }

        std::cout << entrada << " = " << resultado << std::endl;
    } else {
        std::cerr << "Formato invalido.\n";
    }

    return 0;
}
