#include <iostream>

using namespace std;

struct Aluno
{
    string nome;
    float nota;
};

int main(void)
{
    Aluno *aluno = new Aluno[3];
    float notaMaior =  0;
    string alunoNota;

    cout << "Entre nome e nota: " << endl;
    for(int i = 0; i < 3; ++i){
        cout << "Nome: ";
        cin >> aluno[i].nome;
        cout << "Nota: ";
        cin >> aluno[i].nota;
    }

    for(int i = 0; i < 3; ++i){
        if(aluno[i].nota > notaMaior){
            notaMaior = aluno[i].nota;
            alunoNota = aluno[i].nome;
            cout << alunoNota;

        }
    }
    return 0;
}


