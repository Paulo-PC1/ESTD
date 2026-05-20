#include <iostream>
#include <unordered_set>

using namespace std;

int main(void)
{
    unordered_set<int> valores = {10, 20, 30, 20, 10, 40};
    int novoValor;
    int verificaValor;
    int removeValor;

    cout << "Lista de valores antes: ";
    for(auto& v : valores){
        cout << v << " ";
    }
    cout << endl;
    cout << "Tamanho: " << valores.size() << endl;
    cout << "Se vazio: " << valores.empty() << ", [0 = falso 1 = verdadeiro]";

    cout << endl;

    cout << "Insira valor ae:";
    cin >> novoValor;
    valores.insert(novoValor);

    cout << "Insira valor ae denovo:";
    cin >> novoValor;
    valores.insert(novoValor);

    cout << endl;

    cout << "Lista de valores antes: ";
    for(auto& v : valores){
        cout << v << " ";
    }

    cout << endl;

    cout << "Insira um valor para ser verificado: ";
    cin >> verificaValor;
    valores.count(verificaValor);
    if(!verificaValor){
        cout << "valor nao existe";
    }
    else{
        cout << "valor existe";
    }

    cout << endl;

    cout << "Remove um ae: ";
    cin >> removeValor;
    valores.erase(removeValor);

    cout << endl;

    cout << "Valores restantes" << endl;
    cout << "Lista de valores antes: ";
    for(auto& v : valores){
        cout << v << " ";
    }

    cin.ignore(80, '\n');

    cout << endl << endl;
    cout << "Tecla algo ai...";
    cin.get();

    return 0;
}
