#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

void InsertEnd(Node *&head, int data)
{
    Node *newNode = new Node{data, nullptr};
    
    if (head == nullptr)
    {
        head = newNode;
        newNode->next = head;
    }else
    {
        Node *aux = newNode;
        while (aux->next != head)
        {
            aux = aux->next;
        } 
        aux->next = newNode;
    }  
    newNode->next = head;
}

/*void InsertBegin(Node *&head, int data){

    Node *newNode = new Node{data, head};

    if (head == nullptr)
    {
        head = newNode;
        newNode->next = head;
    }else
    {
        head = NewNode;
    }  
    newNode->next = head;
}*/

void ShowList(const Node *head)
{
    const Node *aux = head; 
        do
        {
            cout << aux->data << " - ";
            aux = aux->next;
        }while (aux != head);
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
        //InsertBegin(head, newValue);
        ShowList(head);
    } while (newValue != -1);
    

    return 0;
}
