#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

void insertBegin(Node *&head, int data)
{
    Node *newNode = new Node{data, nullptr};

    if (head == nullptr)
    {
        head = newNode;
    }else
    {
        newNode->next = head;
    }
    head = newNode;
    

}

void insertMiddle(Node *&head, int data)
{
    Node *newNode = new Node{data, nullptr};

    if (head == nullptr) 
    {
        head = newNode;
        return;
    }

    Node *curr = head;
    int len {0}; 
    
    while (curr != nullptr)
    {
        ++len;
        curr = curr->next;
    }

    int mid;
    
    if(len - 2 * (len / 2) == 0)  
    {
        mid = len / 2; 
    }else
    {
        mid = (len + 1) / 2; 
    }
    curr = head;

    while (mid > 1) 
    {
        curr = curr->next;
      	--mid;
    }
    newNode->next = curr->next;
    curr->next = newNode;
}

void insertEnd(Node *&head, int data)
{
    Node *newNode = new Node{data, nullptr};
    
    if (head == nullptr)
    {
        head = newNode;  
    }else
    {
        Node *curr = head;
        while (curr->next != nullptr)
        {
            curr = curr->next;
        }
        curr->next = newNode;
    }   
}

void removeBegin(Node *&head)
{
  
    if (head == nullptr)
    {
        cout << "Lista Vazia!!" << endl;
        return;
    }else
    {
        Node *curr = head;
        head = curr->next;
        delete curr;     
    }
}

void removeMiddle(Node *&head)
{

    if (head == nullptr) 
    {
        cout << "Lista Vazia!!" << endl;
        return;
    }

    Node *curr = head;
    int len {0}; 
    
    while (curr != nullptr)
    {
        ++len;
        curr = curr->next;
    }

    int mid;
    
    if(len - 2 * (len / 2) == 0)  
    {
        mid = len / 2; 
    }else
    {
        mid = (len + 1) / 2; 
    }
    curr = head;
    Node *prev = nullptr;
    
    while (mid > 1) 
    {
        prev = curr;
        curr = curr->next;
      	--mid;
    }
    
    if (prev == nullptr)
    {
        head = curr->next;
    }else
    {
        prev->next = curr->next;
    }
    delete curr;
}

void removeEnd(Node *&head)
{
    if (head == nullptr)
    {
        cout << "Lista Vazia!!" << endl;
        return; 
    }else
    {
        Node *curr = head;
        Node *prev = nullptr;
        while (curr->next != nullptr)
        {
            prev = curr;
            curr = curr->next;
        }
        if (prev == nullptr)
        {   
            head = curr->next;
        }else
        {
            prev->next = curr->next;
        }
        delete curr;
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
        cout << "1 - Inserir Numero no INICIO" << endl;
        cout << "2 - Inserir Numero no MEIO" << endl;
        cout << "3 - Inserir Numero no FIM" << endl;
        cout << "4 - Remover Numero no INICIO" << endl;
        cout << "5 - Remover Numero no MEIO" << endl;
        cout << "6 - Remover Numero no FIM" << endl;
        cout << "7 - Mostrar Lista Atual" << endl;
        cout << "0 - Sair do Sistema" << endl;

        cin >> op;
        
        switch (op)
        {
        case 0:
            cout << "Fim do Programa..." << endl;
            break;
        case 1:
            cout << "Inserir Numero no INICIO" << endl;
            cout << "Entre um valor numerico inteiro: ";
            cin >> newValue;
            insertBegin(head, newValue);
            cout << "Lista Atual: ";
            showList(head);
            break;
        case 2:
            cout << "Inserir Numero no MEIO" << endl;
            cout << "Entre um valor numerico inteiro: ";
            cin >> newValue;
            insertMiddle(head, newValue);
            cout << "Lista Atual: ";
            showList(head);
            break;
        case 3:
            cout << "Inserir Numero no FIM" << endl;
            cout << "Entre um valor numerico inteiro: ";
            cin >> newValue;
            insertEnd(head, newValue);
            cout << "Lista Atual: ";
            showList(head);
            break;
        case 4:
            cout << "Remover Numero no INICIO" << endl;
            removeBegin(head);
            cout << "Primeiro valor removido!" << endl;
            cout << "Lista Atual: ";
            showList(head);
            break;       
        case 5:
            cout << "Remover Numero no MEIO" << endl;
            removeMiddle(head);
            cout << "Valor do Meio removido!" << endl;         
            cout << "Lista Atual: "; 
            showList(head);
            break;
        case 6:
            cout << "Remover Numero no FIM" << endl;
            removeEnd(head);
            cout << "Valor do FIM removido!" << endl;
            cout << "Lista Atual: ";
            showList(head);
            break;
        case 7:
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