#include <iostream>

using namespace std;

int main(void)
{
    int arr[10]{1,2,3,4,5,6,7,8,9,10};
    int num;
    int contador = 0;
    bool acha = false;

    cout << "qual num vc quer buscar?: ";
    cin >> num;

    for(int i = 0; i < 10; ++i){
        contador++;
        if(num == arr[i]){
            cout << "Numero: " << arr[i] << " encontrado na posicao: " << i << " Ciclos: " << contador;
            acha = true;
            }
        }
        if(!acha)
        {
        cout << "nao encontrado";
        }

        cout << endl;
        cout <<  "Tecla Enter pra acabar";
        cin.get();

    return 0;
}
