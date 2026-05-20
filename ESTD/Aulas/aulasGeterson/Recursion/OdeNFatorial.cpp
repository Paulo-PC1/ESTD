#include <iostream>

using namespace std;

int main(void)
{
    int resultado = 1;
    int fatorialDe;
    int conta = 0;

    cout << "Entra fatorial de: ";
    cin >> fatorialDe;

    for(int i = 1; i <= fatorialDe; ++i)
    {
        resultado *= i;
        ++conta;
    }

    cout << "Fatorial de: " << fatorialDe << " = " << resultado << " operacoes: " << conta;

    cout << endl;
    cout <<"Entra pra acabar";
    cin.get();

    return 0;
}
