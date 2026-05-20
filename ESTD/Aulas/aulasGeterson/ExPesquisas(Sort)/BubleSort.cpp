#include <iostream>
#include <algorithm> // para uso do swap

using namespace std;

void bubbleSort(int lista[], int tamanho, int &comparacao)
{

    for(int i = 0; i < tamanho - 1; ++i){
        for(int j = 0; j < tamanho - 1 - i; ++j){ // tamanho array - 1 - i para fazer o sort da maneira correta
            comparacao++;
            if(lista[j] > lista[j + 1]){
                int temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
                //swap(lista[j], lista[j +1]);
            }
        }
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

    bubbleSort(lista, 10, comparacao);

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
