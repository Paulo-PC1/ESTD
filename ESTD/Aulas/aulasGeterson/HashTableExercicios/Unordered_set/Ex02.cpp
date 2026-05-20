#include <iostream>
#include <unordered_set>
#include <cctype>

using namespace std;

int main(void)
{
    unordered_set<int> ingressos = {1, 2, 3, 4, 5};
    unordered_set<int> ingressosUsados;
    int ingresso;

    cout << "Ingressos Disponiveis: " << endl;

    for(auto& i : ingressos){
        cout << i << " ";
    }

    cout << endl;

    cout << "Insira seu ingresso: ";
    cin >> ingresso;
    if(!ingressosUsados.count(ingresso)){
        ingressosUsados.insert(ingresso);
        ingressos.erase(ingresso);
    }

    cout << endl;

    cout << "Ingresso restantes: " << endl;

    for(auto& i : ingressos){
        cout << i << " ";
    }

    cout << endl;

    cout << "Ingressos usados: " << endl;

    for(auto& iU : ingressosUsados){
        cout << iU << " ";
    }

    cin.ignore(80, '\n');

    cout << endl << endl;
    cout << "Tecla algo ai...";
    cin.get();

    return 0;
}
