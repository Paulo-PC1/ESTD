#include <iostream>

using namespace std;

int compara = 0;

int listSum(int lista[], int tamanho){
    compara++;
    if(tamanho == 1){ //caso base lista 1 elemento
        return lista[0];
    }

    return lista[0] + listSum(lista + 1, tamanho - 1) ; //passo recursivo soma valores da lista
}

int main(void)
{
    int lista[1]{2};
    int lista2[10]{2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    cout << "Lista1: " << lista[0] << endl;

    cout << "Soma lista com 1 elemento: " <<listSum(lista, 1) << ", comparacoes: "<< compara;

    compara = 0;

    cout << endl;

    cout << "Lista2: ";

    for(int i = 0; i < 10; ++i){
        cout << lista2[i] << ",";
    }
    cout << endl;

    cout << "Soma lista com 10 elementos: " <<listSum(lista2, 10) << ", comparacoes: "<< compara;

    cout << endl;
    cout <<"Entra pra acabar";
    cin.get();
    return 0;
}

