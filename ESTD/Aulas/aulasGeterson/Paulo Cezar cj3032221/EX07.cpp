#include <iostream>

using namespace std;

int nos;

struct Node
{
    int data;
    Node* next;
};

void insertEnd(Node *&head, int data)
{
    Node *newNode = new Node{data, nullptr};

    if (head == nullptr)
    {
        head = newNode;
        ++nos;
    }else
    {
        Node *curr = head;
        while (curr->next != nullptr)
        {
            curr = curr->next;
        }
        curr->next = newNode;
        ++nos;
    }
}

void showList(const Node *head)
{
    const Node *curr = head;
        while (curr != nullptr)
        {
            cout << curr->data << " - ";
            curr = curr->next;
        }
        cout << endl;
        cout << "Nos: " << nos;
        cout << endl;

}

int main(void)
{
    Node *head = nullptr;
    int newValue;
    int op;

    do
    {

        cout << "Seja bem-vindo ao Sistema de Teste para Lista Encadeada Simples!" << endl;
        cout << "Escolha uma das opcoes a seguir:" << endl;
        cout << "1 - Inserir Numero no FIM" << endl;
        cout << "2 - Mostrar Lista Atual" << endl;
        cout << "0 - Sair do Sistema" << endl;

        cin >> op;

        switch (op)
        {
        case 0:
            cout << "Fim do Programa..." << endl;
            break;
        case 1:
            cout << "Inserir Numero no FIM" << endl;
            cout << "Entre um valor numerico inteiro: ";
            cin >> newValue;
            insertEnd(head, newValue);
            cout << "Lista Atual: ";
            showList(head);
            break;

        case 2:
            cout << "Mostrar Lista Atual: ";
            showList(head);
            break;
        default:
            cout << "Digite uma opção valida!" << endl;
            break;
        }

    } while (op != 0);

    return 0;
}
