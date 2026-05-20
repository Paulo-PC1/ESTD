#include <iostream>
using namespace std;

const int tamanhoMax = 4;
int pilha[tamanhoMax];
int topo = 0;

void empilhar(int valor){
    if (topo == tamanhoMax){
        cout << "Pilha Cheia!" << endl;
        return;
    }

    pilha[topo] = valor;
    topo++;
}

void mostrarPilha() {
    if (topo == 0)
    {
        cout << "Pilha Vazia!" << endl;
        return;
    }
    
    cout << "-''-" << endl;
    for (int i = topo - 1; i >= 0; i--)
    {
        cout << "| " << pilha[i] << "| " << endl;
        cout << "----" << endl;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    mostrarPilha();
    empilhar(5);
    empilhar(3);
    empilhar(2);
    empilhar(9);
    mostrarPilha();
    empilhar(8);
    return 0;
}
