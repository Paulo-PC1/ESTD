#include <iostream>

using namespace std;
//Crie uma struct Ponto com x e y. Aloque um Ponto com new, atribua valores usando ->, imprima e delete.
struct Ponto
{
    int x;
    int y;
};

int main(void)
{
    Ponto *novoPonto = new Ponto;

    novoPonto->x = 10;
    cout << novoPonto->x << endl;
    novoPonto->y = 20;
    cout << novoPonto->y << endl;

    delete novoPonto;
    novoPonto = nullptr;

    return 0;
}


