#include <iostream>
#include <string>
#include <unordered_map> // tabela hash pronta C++ // pode haver duplicatas de valores
using namespace std;

int main(void)
{

    //declara tabela : chave: string, valor: int
    unordered_map<string, int> tabela;
    unordered_map<string, string> tabela2; // chave e valor  pode ser QUALQUER TIPO DE DADO

    //insere pares chave/valor
    //função hash calcula posição automatico

    tabela["um"] = 1;
    tabela["dois"] = 2;
    tabela["tres"] = 3;
    tabela2["Abroba"] = "chave correta";

    //acessa o valor pela chave em O(1)

    cout << "Valor: " << tabela["um"] << endl;
    cout << "Valor: " << tabela["dois"] << endl;
    cout << "Valor: " << tabela["tres"] << endl;
    cout << "Valor: " << tabela2["Abroba"] << endl;

    return 0;
}
