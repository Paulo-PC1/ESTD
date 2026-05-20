#include <iostream>

using namespace std;
/*
raiz 8
esquerda 4, 2, 6
direita 12, 10, 14
*/
struct No{
    int valor;
    No* esq;
    No* dir;

    //constructor e inicialização
    No(int v){
        valor = v;

        esq = nullptr;
        dir = nullptr;
    }
};

No* inserir(No* raiz, int valor)
{
    if(raiz == nullptr){
       return new No(valor);
    }
    if(valor < raiz->valor){
        raiz->esq = inserir(raiz->esq, valor);
    }
    else if(valor > raiz->valor){
        raiz->dir = inserir(raiz->dir, valor);
    }
    return raiz;
}


int main(void)
{
    //raiz Nó pai
    //valor menor da raiz a esquerda Nó folha
    //valor maior que a raiz a direita Nó folha
    //criação da raiz da arvore
    No* raiz = new No(8);
    int valor;

    //apresentação do valor da raiz
    cout << "Valor da raiz da arvore: " << raiz->valor << endl;
    inserir(raiz, 4);
    inserir(raiz, 2);
    inserir(raiz, 6);
    inserir(raiz, 12);
    inserir(raiz, 10);
    inserir(raiz, 14);
    //apresentação dos valores da direita e esquerda;
    cout << "Valor da esquerda da arvore: " << raiz->esq->valor << endl;
    cout << "Valor da direita da arvore: " << raiz->dir->valor << endl;

    return 0;
}
