#include <iostream>

using namespace std;

int main(void)
{
    int lista[] {1, 2, 3, 4, 5};
    int pesq;
    bool acho = false;

    cin >> pesq;

    for(int i = 0; i < 5; ++i){
        if(pesq == lista[i]){
            cout << "Numero: " << lista[i] << " encontrado na posicao: " << i;
            acho = true;
        }
    }
    if(!acho){
        cout << "nao encontrado";
    }
    return 0;
}
