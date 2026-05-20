#include <iostream>
using namespace std;

void cadastrarNotas(int notas[10]){
    for (int i; i < 10; i++)
    {
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        cout << endl;
    }
}

void excluirNotas(int notas[10]){
    cout << "Qual nota você quer zerar:";
    int idx;
    cin >> idx;
    notas[idx] = 0;
}

void editarNotas(int notas[10]){
    cout << "Qual nota você quer editar:";
    int idx;
    cin >> idx;
    cout << "Qual a nova nota:";
    int nota;
    cin >> nota;
    notas[idx] = nota;
}

void vizualizarNotas(int notas[10]){
    for (int i; i < 10; i++)
    {
        cout << "A nota do aluno " << i + 1 << " é " << notas[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    int opcao = 0;
    int notas[10];
    do
    {
        cout << "Seja bem-vindo ao Sistema de Gerenciamento de Notas!" << endl;
        cout << "Escolha uma das opções a seguir:" << endl;
        cout << "1 - Adicionar Notas" << endl;
        cout << "2 - Editar Nota" << endl;
        cout << "3 - Excluir Nota (zerar)" << endl;
        cout << "4 - Vizualiar Notas" << endl;
        cout << "0 - Sair do Sistema" << endl;

        cin >> opcao;

        switch (opcao)
        {
        case 0:
            cout << "Até a próxima!" << endl;
            break;
        case 1:
            cout << "Cadastro de Notas:" << endl;
            cadastrarNotas(notas);
            break;
        case 2:
            cout << "Editar Nota:" << endl;
            break;
        case 3:
            cout << "Excluir Nota:" << endl;
            break;
        case 4:
            cout << "Vizualiação de Notas:" << endl;
            vizualizarNotas(notas);
            break;
        default:
            cout << "Digite uma opção valida!" << endl;
            break;
        }
    } while (opcao != 0);
    
    return 0;
}
