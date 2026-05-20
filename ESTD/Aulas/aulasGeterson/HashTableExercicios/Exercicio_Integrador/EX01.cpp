#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>

using namespace std;

int main() {

    unordered_map<string, double> notas;
    unordered_set<string> entregaram;
    unordered_multimap<string, string> disciplinas;
    map<string, double> alunosOrdenados;
    set<string> entregasOrdenadas;
    
    notas["Ana"] = 8.5;
    notas["Carlos"] = 7.0;
    notas["Marina"] = 9.2;
    notas["Joao"] = 6.8;
    notas["Beatriz"] = 10.0;

    cout << "=== NOTAS DOS ALUNOS ===" << endl;

    for (auto aluno : notas) {
        cout << aluno.first << " -> " << aluno.second << endl;
    }

    cout << endl;

    entregaram.insert("Ana");
    entregaram.insert("Carlos");
    entregaram.insert("Beatriz");

    cout << "QUEM ENTREGOU O TRABALHO" << endl;

    for (auto aluno : entregaram) {
        cout << aluno << endl;
    }

    cout << endl;

    disciplinas.insert({"Ana", "Matematica"});
    disciplinas.insert({"Ana", "Fisica"});

    disciplinas.insert({"Carlos", "Historia"});
    disciplinas.insert({"Carlos", "Geografia"});

    disciplinas.insert({"Marina", "Biologia"});
    disciplinas.insert({"Marina", "Quimica"});

    disciplinas.insert({"Joao", "Portugues"});
    disciplinas.insert({"Joao", "Ingles"});

    disciplinas.insert({"Beatriz", "Programacao"});
    disciplinas.insert({"Beatriz", "Banco de Dados"});

    cout << "DISCIPLINAS DOS ALUNOS" << endl;

    for (auto aluno : disciplinas) {
        cout << aluno.first << " -> " << aluno.second << endl;
    }

    cout << endl;

    alunosOrdenados["Ana"] = 8.5;
    alunosOrdenados["Carlos"] = 7.0;
    alunosOrdenados["Marina"] = 9.2;
    alunosOrdenados["Joao"] = 6.8;
    alunosOrdenados["Beatriz"] = 10.0;

    cout << "ALUNOS EM ORDEM ALFABETICA" << endl;

    for (auto aluno : alunosOrdenados) {
        cout << aluno.first << " -> " << aluno.second << endl;
    }

    cout << endl;

    entregasOrdenadas.insert("Ana");
    entregasOrdenadas.insert("Carlos");
    entregasOrdenadas.insert("Beatriz");

    cout << "ENTREGA EM ORDEM ALFABETICA" << endl;

    for (auto aluno : entregasOrdenadas) {
        cout << aluno << endl;
    }

    return 0;
}