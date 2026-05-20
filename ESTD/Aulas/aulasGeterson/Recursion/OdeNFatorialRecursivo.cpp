#include <iostream>

using namespace std;

int compara = 0;

int fatorial(int n){
    if(n == 0 || n == 1){ //caso base
        return 1;
        compara++;
    }
    compara++;
    return fatorial(n - 1) * n; // passo recursivo
}

int main(void)
{
    int n = 5;

    fatorial(n);
    cout << "Fatorial de " << n << " = " <<  fatorial(n) << " comparacoes: "<< compara;

    cout << endl;
    cout <<"Entra pra acabar";
    cin.get();

    return 0;
}
