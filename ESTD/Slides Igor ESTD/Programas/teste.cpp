#include <iostream>

void funcaoTeste(int idade){
    if (idade < 25)
        return;
    std::cout << "Velho! ";
}

int main (){
    int idades[] = {10, 20, 30};

    for(int idade : idades){
        std::cout << idade << " ";
        funcaoTeste(idade);
    }

    return 0;
}