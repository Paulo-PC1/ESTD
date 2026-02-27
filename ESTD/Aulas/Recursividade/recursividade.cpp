#include <iostream>

using namespace std;

int fatorial(int n){
    if(n == 0 || n == 1){ //caso base
        return 1;
    }
    return fatorial(n - 1) * n;  // passo recursivo
    
}

int main(void)
{
    int n = 5;
    fatorial(n);
    cout << fatorial(n);
    return 0;
}