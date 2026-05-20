#include <iostream>

using namespace std;

int main(void)
{
    int notas[] = {7, 9, 5, 8, 6, 10, 4};
    int soma = 0;
    int media = 0;
    int numeroMaior = notas[0];
    int numeroMenor = notas[0];

    for(int i = 0; i < 7; ++i){
        soma += notas[i];

        if(notas[i] > numeroMaior){
            numeroMaior = notas[i];
        }
        if(notas[i] < numeroMenor){
            numeroMenor = notas[i];
        }
    }

    media = soma / 7;

    cout << "Media: " << media << endl;
    cout << "Maior: " << numeroMaior << endl;
    cout << "Menor: " << numeroMenor << endl;

    return 0;
}