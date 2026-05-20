#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <limits>

using namespace std;

int main(void)
{
    map<string, double> alunoNota;
    unordered_map<string, double> alunoNota2;
    string nomeAluno, buscaAluno;
    double notaAluno;

    cout << "Insira 5 alunos e suas notas finais" << endl;

    for(size_t i = 0; i < 5; ++i){
        cout << "Insira o nome: ";
        getline(cin, nomeAluno);
        cout << "Insira a nota: ";
        cin >> notaAluno;
        cin.ignore(std::numeric_limits<int>::max(), '\n');
        alunoNota[nomeAluno] = notaAluno;
        alunoNota2[nomeAluno] = notaAluno;
    }
    
    cout << endl;
    
    cout << "Notas e nomes usando MAP:" << endl;
    for(auto& n: alunoNota){
        cout << n.first << ": " << n.second << " ";
    }
          
    cout << endl;
    
    cout << "Notas e nomes usando UNORDERED_MAP:" << endl;
    for(auto& n: alunoNota2){
        cout << n.first << ": " << n.second << " ";
    }

    cout << endl;
    
    cout << "Insira um aluno para buscar: ";
    getline(cin, buscaAluno);
    
    auto it = alunoNota.find(buscaAluno);
    if(it != alunoNota.end()){
        cout << "Achou!, nota do aluno e: " << it->second;
    }else{
        cout << "aluno nao encontrado.";
    }
    
    cout << endl;
    
    cout << "Adicione outro aluno" << endl;
    cout << "Insira o nome: ";
    getline(cin, nomeAluno);
    cout << "Insira a nota: ";
    cin >> notaAluno;
    cin.ignore(std::numeric_limits<int>::max(), '\n');
    alunoNota[nomeAluno] = notaAluno;   
    
    cout << endl;    
    
    cout << "Notas e nomes usando MAP:" << endl;
    for(auto& n: alunoNota){
        cout << n.first << ": " << n.second << " ";
    }
    
    cout << endl;
    
    cout << endl;
    cout << "Tecla algo ai...";
    cin.get();

    return 0;
}

