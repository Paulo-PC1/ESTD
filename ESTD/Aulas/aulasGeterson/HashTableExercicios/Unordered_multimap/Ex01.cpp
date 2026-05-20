#include <iostream>
#include <unordered_map>
#include <string>
#include <limits>

using namespace std;

int main(void)
{
    unordered_multimap<string, double> alunoNota;
    string nomeAluno;
    double notaAluno;

    for(size_t i = 0; i < 3; ++i){
        cout << "Entre O nome do aluno e suas 3 notas: "<< endl;
        cout << "Nome:";
        getline(cin, nomeAluno);
        cout << "Nota:";
        cin >> notaAluno;
        cin.ignore(numeric_limits<int>:: max(), '\n');
        alunoNota.insert({nomeAluno, notaAluno});
    }

    cout << "Quantidade de notas do " << nomeAluno << ": " << endl;

    cout << "O aluno " << nomeAluno << " tem " << alunoNota.count(nomeAluno) << " notas." << endl;

    cout << "Listagem de notas do aluno " << nomeAluno << endl;

    auto range = alunoNota.equal_range(nomeAluno);

    for(auto i = range.first; i!=range.second; ++i)
        cout << nomeAluno << " nota: " << i->second << endl;

    cout << endl;

    cout << "Qual aluno deseja remover todas as notas: ";
    cin >> nomeAluno;
    alunoNota.erase(nomeAluno);

    cout << "O aluno " << nomeAluno << " tem atualmente " <<  alunoNota.size() << " notas" << endl << endl;
    cin.ignore(80, '\n');

    cout << "Tecla algo ai...";
    cin.get();

    return 0;
}
