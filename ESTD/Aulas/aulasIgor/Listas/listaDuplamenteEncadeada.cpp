#include <iostream>

using namespace std;
/*
Para fazer uma lista duplamente encadeada a Struct Node deve conter: data(tipo qualquer)
Node *next(ponteiro do tipo do nó que aponta para o próximo nó)
e um Node *prev(ponteiro do tipo nó que aponta para o nó anterior)
*/
struct Node
{
    int data;
    Node *next;
    Node *prev;
};
/*
Para inserir no começo assim como na lista encadeada simples criamos
um novoNó(Node *newNode[que é um ponteiro e o inicializamos com data, nullptr, nullptr])
caso a lista esteja vazia a cabeça da lista(head [que tambem é um ponteiro inicializado no Main do código{Node *head = nullptr;}])
o novo nó apontara para a cabeça(cabeça sera atribuida ao novoNó)
caso a lista ja tenha uma cabeça o novoNó->proximo(newNode->next[o ponteiro *next do novo nó]) aponta para a cabeça(é atribuido a cabeça/ se torna ela)
e o ponteiro anterior da cabeça(head->prev) aponta para o novoNó(newNode)
e novamente apontamos a cabeça(head) para o novoNó(newNode) 
*/
void insertBegin(Node *&head, int data)
{
    Node *newNode = new Node{data, nullptr, nullptr};

    if (head == nullptr)
    {
        head = newNode;
    }else
    {
        newNode->next = head;
        head->prev = newNode;
    }
    head = newNode;
    

}
/*
para a inserção no meio a lógica se mantem basicamente a mesma da lista Encadeada Simples porem para evitar erros
adicionamos um return no bloco if(head == nullptr) pois assim não causa erros caso a lista esteja vazia
e adicionamos após a linha newNode->next = curr->next; a linha para apontar o anterior (newNode->prev) para o ponteiro auxiliar (curr)
e tambem adicionamos um if no final para manter a estrutura de duplo encadeamento da lista e evitando erros posteriores para novas inserções e
exibição da lista como de tras para frente(sem o if o o ponteiro anterior não aponta para o novoNó e sim para o nó antes dele)
*/
void insertMiddle(Node *&head, int data)
{
    Node *newNode = new Node{data, nullptr, nullptr};

    if (head == nullptr) 
    {
        head = newNode;
        return;
    }

    Node *curr = head;
    int len {0}; 
    
    while(curr != nullptr)
    {
        ++len;
        curr = curr->next;
    }

    int mid;
    
    if(len - 2 * (len / 2) == 0)  
    {
        mid = len / 2; 
    }else{
        mid = (len + 1) / 2; 
    }
    curr = head;

    while (mid > 1) {
        curr = curr->next;
      	--mid;
    }
    newNode->next = curr->next;
    newNode->prev = curr;
    if (curr->next != nullptr)
    {
        curr->next->prev = newNode;
    }
    curr->next = newNode;
}
/*
Para inserir no final assim como na lista encadeada simples criamos
um novoNó(Node *newNode[que é um ponteiro e o inicializamos com data, nullptr, nullptr])
caso a lista esteja vazia a cabeça da lista(head [que tambem é um ponteiro inicializado no Main do código{Node *head = nullptr;}])
caso a lista ja tenha uma cabeça criamos um ponteiro auxiliar(Node *curr) e o apontamos(atribui-mos) ele a cabeça(head)
fazemos um loop while para que enquanto o nó auxiliar->próximo nao for nulo(curr->next != nullptr) 
ele vai passando pelos nós ate achar a cauda(nó nulo) da lista(curr = curr->next)
quando chegar no nulo o ponteiro auxiliar->proximo apontará para o novoNó(curr->next = newNode) e
o novoNó->anterior apontará para o ponteiro auxiliar(que estava apontando para a cauda da lista[newNode->prev = curr])
*/
void insertEnd(Node *&head, int data)
{
    Node *newNode = new Node{data, nullptr, nullptr};
    
    if (head == nullptr)
    {
        head = newNode;  
    }else
    {
        Node *curr = head;
        while (curr-> next != nullptr)
        {
            curr = curr->next;
        }
        curr->next = newNode;
        newNode->prev = curr;
    }   
}

/*a exibição nao muda pois sempre mostraremos o próximo valor da lista a não ser que desejamos ver a lista de tras para frente
(nao sei como fazer isso ainda kk)
*/
void showListBegin(const Node *head)
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
    int removeValue;
    int op;
    
    do
    {
    
        cout << "Seja bem-vindo ao Sistema de Teste para Lista Duplamente Encadeada Simples!" << endl;
        cout << "Escolha uma das opcoes a seguir:" << endl;
        cout << "1 - Inserir Numero no INICIO" << endl;
        cout << "2 - Inserir Numero no MEIO" << endl;
        cout << "3 - Inserir Numero no FIM" << endl;
        cout << "4 - Remover Numero no INICIO" << endl;
        cout << "5 - Remover Numero no MEIO" << endl;
        cout << "6 - Remover Numero no FIM" << endl;
        cout << "7 - Mostrar Lista Atual do INICIO AO FIM" << endl;
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
            showListBegin(head);
            break;
        case 2:
            cout << "Inserir Numero no MEIO" << endl;
            cout << "Entre um valor numerico inteiro: ";
            cin >> newValue;
            insertMiddle(head, newValue);
            cout << "Lista Atual: ";
            showListBegin(head);
            break;
        case 3:
            cout << "Inserir Numero no FIM" << endl;
            cout << "Entre um valor numerico inteiro: ";
            cin >> newValue;
            insertEnd(head, newValue);
            cout << "Lista Atual: ";
            showListBegin(head);
            break;
        case 4:
            cout << "Remover Numero no INICIO" << endl;
            cout << "Entre um valor a ser removido: ";
            cin >> removeValue;
            //removeBegin(head, removeValue);
            cout << "Lista Atual: ";
            showListBegin(head);
            break;       
        case 5:
            cout << "Remover Numero no MEIO" << endl;
            cout << "Entre um valor a ser removido: ";
            //cin >> removeValue;
            //removeMiddle(head, removeValue);
            cout << "Lista Atual: ";
            showListBegin(head);
            break;
        case 6:
            cout << "Remover Numero no FIM" << endl;
            cout << "Entre um valor a ser removido: ";
            //cin >> removeValue;
            //removeEnd(head, removeValue);
            cout << "Lista Atual: ";
            showListBegin(head);
            break;
        case 7:
            cout << "Mostrar Lista Atual do INICIO AO FIM: ";
            showListBegin(head);
            break;
        default:
            cout << "Digite uma opção valida!" << endl;
            break;
        }
        
    } while (op != 0);
    
    return 0;
}
