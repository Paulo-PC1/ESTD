#include <iostream>

using namespace std;

const int tamanhoMax = 4;
int pilha[tamanhoMax];
int topo = 0;

void empilhar(int valor)
{
    if(topo == tamanhoMax)
    {
        cout << "Pilha cheia!!" << endl;
        return;
    }

    pilha[topo] = valor;
    topo++;
}

void mostrarPilha()
{
    if(topo == 0)
    {
        cout << "Pilha vazia!!" << endl;
        return;
    }

    cout << "-''-" << endl;
    for (int i = topo - 1; i >= 0; i--)
    {
        cout << "|" << pilha[i] << "|" << endl;
        cout << "----" << endl;
    }
    
}


int main(void)
{
    mostrarPilha();
    empilhar(1);
    empilhar(2);
    empilhar(3);
    empilhar(4);
    mostrarPilha();
    empilhar(5);
    return 0;
}
