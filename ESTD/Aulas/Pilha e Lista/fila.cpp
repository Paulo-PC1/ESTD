#include <iostream>
using namespace std;

const int tamanhoMax = 4;
int fila[tamanhoMax];
int inicio = 0, fim = 0;
bool filaVazia = true;

void enfileirar(int valor) {
    if (fim == inicio && !filaVazia) {
        cout << "Fila Cheia!" << endl;
        return;
    }

    fila[fim] = valor;
    filaVazia = false;
    fim++;

    if (fim == tamanhoMax)
        fim = 0;
}

void mostrarFila() {
    if (filaVazia){
        cout << "Fila Vazia!" << endl;
        return;
    }

    if (inicio < fim)
    {
        for (int i = inicio; i < fim; i++)
            cout << fila[i] << " - ";
    }
    else
    {
        for (int i = inicio; i < tamanhoMax; i++)
            cout << fila[i] << " - ";
        for (int i = 0; i < fim; i++)
            cout << fila[i] << " - ";
    }

    cout << endl;
}

void desenfileirar() {
    if (filaVazia){
        cout << "Fila Vazia!" << endl;
        return;
    }

    inicio++;
    if (inicio == tamanhoMax) 
        inicio = 0;
    if (inicio == fim && !filaVazia)
        filaVazia = true;
}

int main()
{
    mostrarFila();
    enfileirar(5);
    enfileirar(3);
    enfileirar(13);
    enfileirar(2);
    desenfileirar();
    mostrarFila();
    enfileirar(55);
    mostrarFila();
    desenfileirar();
    desenfileirar();
    desenfileirar();
    desenfileirar();
    mostrarFila();
    return 0;
}
