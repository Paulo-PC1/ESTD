#include <iostream>
#include <unordered_set>
#include <cctype>
#include <limits>

using namespace std;

int main(void)
{
    unordered_set<int> ingressos = {1, 2, 3, 4, 5};
    unordered_set<int> ingressosUsados;
    int ingresso;
    char resposta;

    cout << "Ingressos Disponiveis: " << endl;

    for(auto& i : ingressos){
        cout << i << " ";
    }

    cout << endl;

    cout << "Ja tem ingresso? S/N ";
    cin >> resposta;
    cin.ignore(numeric_limits<int>:: max(), '\n');
    if(toupper(resposta) == 'S'){
        cout << "Insira o seu ingresso:";
        cin >> ingresso;
        if(!ingressosUsados.count(ingresso)){
            ingressosUsados.insert(ingresso);
            ingressos.erase(ingresso);
            cout << "ingresso usado!" << endl;
        }
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


    cin.ignore(numeric_limits<int>:: max(), '\n');

    cout << endl << endl;
    cout << "Tecla algo ai...";
    cin.get();

    return 0;
}
