#include <iostream>

using namespace std;

// Funcao auxiliar que calcula o fatorial usando recursao de cauda
int64_t fatorialBase(int16_t n, int64_t p) {
    if (n == 0) {
        return p;
    } else {
        return fatorialBase(n - 1, n * p); // Chamada recursiva: cauda = n * p
    }
}

// Funcao principal que chama a funcao auxiliar com o parametro inicial p = 1
int64_t fatorial(int16_t n) {
    return fatorialBase(n, 1);
}

int main(void)
{
    int32_t n {5};
    
    fatorial(n);
    cout << n << " " << fatorial(n);
    
    return 0;
}
