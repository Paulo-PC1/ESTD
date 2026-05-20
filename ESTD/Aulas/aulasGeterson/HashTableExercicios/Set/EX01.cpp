#include <iostream>
#include <limits>
#include <string>
#include <set>
#include <unordered_set>

using namespace std;

int main(void)
{
    set<string> cidades;
    unordered_set<string> cidades2;
    string cidadeNome, cidadeExiste;
    
    cout << "Insira o nome de 5 cidades diferentes" << endl;
    for (size_t i = 0; i < 5; ++i)
    {
        cout << "Nome: ";
        getline(cin, cidadeNome);
        cidades.insert(cidadeNome);
        cidades2.insert(cidadeNome);
    }
    
    cout << endl;
    
    cout << "Cidades inseridas Set: " << endl;
    
    for(auto& c : cidades){
        cout << "Cidade: " << c << endl;
    }
    
    cout << "Insira uma cidade ja existente:";
    getline(cin, cidadeNome);
    
    cout << "Cidades inseridas Set: " << endl;
    
    for(auto& c : cidades){
        cout << "Cidade: " << c << endl;
    }
    
    cout << endl;
    
    //
    cout << "Cidades inseridas unordered_set: " << endl;
    
    for(auto& c : cidades2){
        cout << "Cidade: " << c << endl;
    }
    
    cout << "Insira uma cidade ja existente:";
    getline(cin, cidadeNome);
    
    cout << "Cidades inseridas unordered_set: " << endl;
    
    for(auto& c : cidades2){
        cout << "Cidade: " << c << endl;
    }
    
    cout << endl;
    
    cout << "Insira uma cidade para ver se ela esta inserida: ";
    getline(cin, cidadeExiste); 

    if (cidades.find(cidadeExiste) != cidades.end()) {
    cout << "Cidade encontrada!" << endl;
    }else {
    cout << "Cidade nao encontrada!" << endl;
    }
    
    cout << endl;
    cout << "Tecla algo ai...";
    cin.get();
    
    return 0;
}