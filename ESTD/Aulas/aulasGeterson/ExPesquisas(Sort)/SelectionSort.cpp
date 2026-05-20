#include <iostream>

using namespace std;

void selectionSort(int lista[], int tamanho, int &comparacao)
{
    int menorValor = -1;

    for(int i = 0; i < tamanho - 1; ++i){
        menorValor = i;
        for(int j = i + 1; j < tamanho ; ++j)
        {
            if(lista[j] > lista[menorValor]){
                menorValor = j;
            }
        }
        int temp = lista[i];
        lista[i] = lista[menorValor];
        lista[menorValor] = temp;
        ++comparacao;
    }
}

int main(void)
{
    int lista[10]{64, 25, 12, 22, 11, 90, 33, 47, 5, 78};
    int comparacao = 0;

    cout << "Lista Desordenada: ";
    for(int i = 0; i < 10; ++i){
        cout << lista[i] << ",";
    }

    cout << endl;

    selectionSort(lista, 10, comparacao);

    cout << "Lista Ordenada: ";
    for(int i = 0; i < 10; ++i){
        cout << lista[i] << ", ";
    }
    cout << "Comparacoes: " << comparacao;

    cout << endl;
    cout <<  "Tecla Enter pra acabar";
    cin.get();

    return 0;
}

