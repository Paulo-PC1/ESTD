#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
    Node *prev;
};

void InsertEnd(Node *&head, int data)
{
    Node *newNode = new Node{data, nullptr, nullptr};
    
    if (head == nullptr)
    {
        head = newNode;  
    }else
    {
        Node *aux = head;
        while (aux-> next != nullptr)
        {
            aux = aux->next;
        }
        aux->next = newNode;
        newNode->prev = aux;
    }   
}

void ShowList(const Node *head)
{
    const Node *aux = head;
        while (aux != nullptr)
        {
            cout << aux->data << " - ";
            aux = aux->next;
        }
        cout << endl;
       
}

int main(void)
{
    Node *head = nullptr;
    int newValue;

    do
    {
        cin >> newValue;

        InsertEnd(head, newValue);
        ShowList(head);
    } while (newValue != -1);
    

    return 0;
}
