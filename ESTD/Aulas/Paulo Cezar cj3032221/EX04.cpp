#include <iostream>

using namespace std;

int calculo(int valor)
{
    if(valor <= 1)
        return valor;
    return valor + calculo(valor - 1);
}

int main(void)
{
    int n;

    n = 5;
    cout << calculo(n) << endl;

    n = 10;

    cout << calculo(n);

    return 0;

}
