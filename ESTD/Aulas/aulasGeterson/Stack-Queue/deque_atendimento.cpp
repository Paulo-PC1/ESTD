#include <iostream>
#include <deque>

using namespace std;

bool vaziaBilhete(deque<int> bilhete)
{

    if(!bilhete.empty()){
        return true;
    }
    return false;
}

void exibir_fila(deque<int> bilhete)
{
    deque<int> filaBilhete = bilhete;

    while(!filaBilhete.empty()){
        cout << "Numero do Bilhete: " << filaBilhete.front() << endl;
        filaBilhete.pop_front();
    }
}

int retirar_bilhete(int& numero)
{
    ++numero;
    cout << "Seu numero e: " << numero << endl;
    return numero;
}

void proximo(deque<int>& bilhete)
{
    cout << "Chamando numero: "<< bilhete.front() << endl;
    cout << bilhete.front() << " Atendido!" << endl;
    bilhete.pop_front();
}

int main(void)
{
    deque<int> bilhete;
    int bilhetes, numero = 0;
    int op;
    char resp;

    do{
        cout << "Retirar Bilhete 1" << endl;
        cout << "Atender Fila 2" << endl;
        cout << "Exibir Fila 3" << endl;
        cout << "Fila Vazia 4" << endl;
        cout << "Sair 5" << endl;
        cout << endl;

        cin >> op;
        cin.ignore();
        cout << endl;


        switch(op)
        {
        case 1:
        {
            cout << "E prioritário? [s]sim [n]nao: ";
            cin.get(resp);
            cin.ignore(80, '\n');
            cout << "Retirando seu bilhete..." << endl;
            bilhetes = retirar_bilhete(numero);
            if(resp == 's')
                bilhete.push_front(bilhetes);
            else
                bilhete.push_back(bilhetes);
            break;
        }
        case 2:
            proximo(bilhete);
            break;
        case 3:
             exibir_fila(bilhete);
             break;
        case 4:
        {
            if(!vaziaBilhete(bilhete)){
                cout << "pilha de Bilhetes esta vazia, Fim" << endl;
            }else{
                cout << "pilha de Bilhetes nao esta vazia, Proximo" << endl;
            }
        }
        }
    }while(op != 5);

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
