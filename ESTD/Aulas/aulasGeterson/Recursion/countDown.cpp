#include <iostream>

using namespace std;

int compara = 0;

int countDown(int n){
    if(n == 0){ //caso base
        return 0;
        compara++;
    }
    compara++;
    cout << n << ",";
    return countDown(n - 1); // passo recursivo
}

int main(void)
{
    int n = 5;

    cout << "Contagem Regressiva de "<< n << " a 0" << " = " << countDown(n) << " comparacoes: "<< compara;

    cout << endl;
    cout <<"Entra pra acabar";
    cin.get();

    return 0;
}

