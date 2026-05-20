#include <iostream>
#include <unordered_set>
#include <string>
#include <limits>

using namespace std;

int main(void)
{
    unordered_multiset<int> notas = {7, 8, 7, 9, 6, 8, 7, 10, 6, 9};
    int nota, remova;

    cout << notas.count(7)<< " alunos tiraram a nota 7." << endl;

    for(size_t i = 0; i < 2; ++i){
        cout << "Insira uma nota: ";
        cin >> nota;
        notas.insert(nota);
        cin.ignore(numeric_limits<int>:: max(), '\n');
    }

    cout << "Existe um total de " << notas.size() << " notas no sistema." << endl;

    cout << "Notas 6 cadastradas no sistema " << notas.count(6) << endl;

    cout << "Remova todas as notas (Exemplo todas as notas 6): ";
    cin >> remova;
    notas.erase(remova);
    cin.ignore(numeric_limits<int>:: max(), '\n');

    cout << "Existem agora " << notas.count(remova) << " notas " << remova << " no sistema." << endl;

    cout << "Todas as notas restantes do sistema: " << endl;
    for(auto& n :notas){
        cout << n << " ";
    }



    cout << endl;
    cout << "Tecla algo ai...";
    cin.get();

    return 0;
}
