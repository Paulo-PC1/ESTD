#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(void)
{
    unordered_map<string, string> paises = {{"Brasil", "Brasilia"},{"Japao", "Tokyo"}, {"Australia", "Camberra"}, {"Portugal", "Lisboa"},{"Russia", "Moscovo"}};
    string busca;
    string apaga;
    string paisExiste;
    string capitalExiste;

    for(auto& p : paises)
    {
        cout << "Pais: "<< p.first << " Capital: " << p.second << " " << endl;
    }

    cout << endl;

    cout << "Busca: ";
    getline(cin, busca);

    auto it = paises.find(busca);

    if(it != paises.end())
    {
        cout << "Achou!" << endl;
        cout << it->second;
    }
    else
        cout << "Nao encontrado!" << endl;

    cout << endl;

    cout << "Remova:";
    getline(cin, apaga);

    paises.erase(apaga);
    cout << apaga << " Foi apagado!!" << endl;
    cout << "No momento tem "<< paises.count(apaga) << " " << apaga << " [0(apagou) 1(existe)]" << endl;

    cout << endl;

    for(auto& p : paises)
    {
        cout << "Pais: "<< p.first << " Capital: " << p.second << " ";
    }

    cout << endl;

    // nesse trecho apaga o pais e a capital que existia e coloca o novo( pais mantem(chave) mas capital(valor) muda.
    cout << "Insira um pais existente: ";
    getline(cin, paisExiste);
    cout << endl;
    cout << "Insira uma capital: ";
    getline(cin, capitalExiste);

    paises[paisExiste] = capitalExiste;

    cout << endl;

    for(auto& p : paises)
    {
        cout << "Pais: "<< p.first << " Capital: " << p.second << " ";
    }

    cout << endl;
    cout << "Tecla algo ai...";
    cin.get();

    return 0;
}
