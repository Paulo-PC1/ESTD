#include <iostream>
#include <string>
#include <unordered_map> // tabela hash pronta C++ // pode haver duplicatas de valores

using namespace std;

int main(void)
{

    //declara tabela : chave: string = nome do produto, valor: int = valor do produto
    unordered_map<string, double> mercado;

    // insere produtos

    mercado["Arroz"] = 8.90;
    mercado["Feijao"] = 7.50;
    mercado["Leite"] = 4.20;
    mercado["Ovos"] = 12.90;
    mercado["Manteiga"] = 9.80;

    //percorre e exibe todos os produtos cadastrados
    cout << "--- Produtos no cadastro ---" << endl;
    for(auto& p : mercado){
        cout << p.first << ": R$ " << p.second << endl;
    }
    cout << endl;

    //find() busca sem criar entrada acidental
    //tabela["chave"] criaria a entrada se não existisse
    auto it = mercado.find("Leite");
    if(it != mercado.end()){
        cout << "Leite encontrado: R$ " << it->second << endl;
    }else{
        cout << "Leite nao encontrado." << endl;
    }

    // erase() remove da tabela
    mercado.erase("Ovos");

    //count() confirma se ainda existe
    if(mercado.count("Ovos") == 0){
        cout << "Ovos foi removido do cadastro." << endl;
    }

    //percorre e exibe todos os produtos restantes

    cout << "\n--- Produtos no cadastro ---" << endl;
    for(auto& p : mercado){
        cout << p.first << ": R$ " << p.second << endl;
    }

    return 0;
}

