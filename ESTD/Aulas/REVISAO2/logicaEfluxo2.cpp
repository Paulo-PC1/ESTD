#include <iostream>

using namespace std;

int main(void)
{
    int numeros;
    int soma {0};
    int i = 0;

    while(numeros != 0){
        cin >> numeros;
        ++i;
        soma += numeros;
    }

    cout << soma << endl;

    return 0;
}
