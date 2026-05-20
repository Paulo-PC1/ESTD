#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

/*
struct Aluno { string nome; int matricula;};

struct HashAluno{
    size_t operator()(const Aluno& a) const {
        return hash<string>()(a.nome) ^ hash<int>()(a.matricula);
    }
};
*/

int main(void)
{
    //unordered_map<Aluno, double, HashAluno> notas;
    unordered_map<string, int> elementos;
    string chave, busca;
    int valor;
    elementos.reserve(50);

    cout << "Insira 10 elementos [Chave] e [Valor]:" << endl;

    for(size_t i = 0; i < 10; ++i){
        cout << "Chave: ";
        getline(cin, chave);
        cout << "Elemento: ";
        cin >> valor;
        cin.ignore(numeric_limits<int>:: max(), '\n');
        elementos[chave] = valor;
    }

    cout << endl;

    cout << "load_factor e bucket_factor" << endl;

    cout << elementos.load_factor();
    cout << elementos.bucket_count();



    cout << "Chave e Valor com iterador [it]" << endl;

    cout << "Insira um valor para busca: "
    getline(cin, busca);
    auto it = elementos.find(busca);

    if(it != elementos.end()){
        cout << it->first;
        cout << it->second;
    }

    auto it = elementos.begin();
    while(it != elementos.end()){
        if(it->second < 5)
            it = elementos.erase(it);
        else
            ++it;
    }

    cout << "load_factor antes" << endl;

    cout << elementos.load_factor();

    cout << "load_factor depois" << endl;


    elementos.max_load_factor(0.5);
    cout << elementos.load_factor();


    cout << endl;
    cout << "Tecla algo ai...";
    cin.get();

    return 0;
}
