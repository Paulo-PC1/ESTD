#include <iostream>

using namespace std;

void inverte(int lista[], int tamanho)
{
    int comeco = 0;
    int fim = tamanho - 1;

    while(comeco < fim)
    {
        int temporario = lista[comeco];
        lista[comeco] = lista[fim];
        lista[fim] = temporario;

        ++comeco;
        --fim;
    }
}

int main(void)
{
    int listaNum[] = {1, 2, 3, 4};
    int tamanho = 4;

    cout << "Lista Normal: ";
    for(int i = 0; i < tamanho; ++i){
        cout << listaNum[i] << ", ";
    }
    cout << endl;
    inverte(listaNum, tamanho);
    cout << "Lista Invertida: ";
    for(int i = 0; i < tamanho; ++i){
        cout << listaNum[i] << ", ";
    }
    return 0;
}
