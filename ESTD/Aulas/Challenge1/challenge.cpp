#include <iostream>

using namespace std;

void cadastro(int notas[])
{
    for(int i = 0; i <= 9; ++i){
    cout << "Insira a " << i + 1 << "o. Nota: " << endl;
    cin >> notas[i];
    }

}

void apresentar(int notas[])
{
    for(int i = 0; i <= 9; ++i){
    cout << "Nota do " << i + 1 << "o. Aluno e : ";
        if (notas[i] == -1){
            cout << "Nota nao cadastrada" << endl;
        }else{
            cout << notas[i] << endl;
        }
    }
}
void remover(int notas[])
{
    int numeroAluno;
    
    cout << "Qual aluno deseja remover a nota?: ";
    cin >> numeroAluno;
    
    if(numeroAluno >= 1 && numeroAluno <= 10){
        notas[numeroAluno - 1] = -1;
        cout << "Nota do aluno" << numeroAluno << "removida!" << endl;
    }
}


void editar(int notas[])
{
    int numeroAluno;
    
    cout << "Qual aluno deseja editar a nota?: ";
    cin >> numeroAluno;
    
    if(numeroAluno >= 1 && numeroAluno <= 10){
        cout << "Nota do aluno " << numeroAluno << "e : " << notas[numeroAluno -1] << endl;
        cout << "Insira a nova nota: ";
        cin >> notas[numeroAluno - 1];
        cout << "Nota Atualizada";
    }
}

int main(void)
{
    int op = 5;
    int notas[10];
    
    do{
        cout << "Menu" << endl;
        cout << "1 - Cadastro" << endl;
        cout << "2 - Editar" << endl;
        cout << "3 - Remover" << endl;
        cout << "4 - Apresentar" << endl;
        cout << "5 - Sair" << endl;

        cin >> op;

        switch (op)
        {
        case 1:
            cout << "Cadastro Notas" << endl;
            cadastro(notas); 
            break;
        case 2:
            cout << "Editar Notas" << endl;
            editar(notas); 
            break;
        case 3:
            cout << "Remover Notas" << endl;
            remover(notas); 
            break;
        case 4:
            cout << "Apresentar Notas" << endl;
            apresentar(notas); 
            break;
        case 5:
            cout << "Encerrando...." << endl; 
            break;
        default:
            cout << "Opcao invalida"; 
            break;
        }  

    }while (op != 5);
    
    return 0;
}