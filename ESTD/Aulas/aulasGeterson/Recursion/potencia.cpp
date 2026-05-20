#include <iostream>

using namespace std;

int potencia(int base, int exp){
    if(exp == 0){ //caso base expoente é 0
        return 1;
    }
    return base * potencia(base, exp - 1) ; //passo recursivo calculo potencia
}

int main(void)
{
    int base, exp;

    cout << "Calculo potencia:" << endl;

    base = 2;
    exp = 10;

    cout << base << " Elevado a " << exp << " = " << potencia(base, exp);

    cout << endl;
    cout <<"Entra pra acabar";
    cin.get();
    return 0;
}


