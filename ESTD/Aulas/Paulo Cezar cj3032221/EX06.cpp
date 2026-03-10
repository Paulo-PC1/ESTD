#include <iostream>

using namespace std;

string invertePalavra(string &palavra, int inicio, int fim)
{
    if(inicio >= fim)
        return palavra;
    
    char temporario = palavra[inicio];
    palavra[inicio] = palavra[fim];
    palavra[fim] = temporario;
    
    return invertePalavra(palavra, inicio + 1, fim -1);
}

int main(void)
{
    string palavra {"radar"};
    string palavra2 {"hello"};
    string palavra3 {"estrutura"};
    
    int tamanhoP1 {5};
    int tamanhoP2 {5}; 
    int tamanhoP3 {9};
    
    cout << palavra << endl;
    cout << invertePalavra(palavra, 0, tamanhoP1 - 1);

    cout << endl;
    
    cout << palavra2 << endl;
    cout << invertePalavra(palavra2, 0, tamanhoP2 - 1);
    
    cout << endl;
   
    cout << palavra3 << endl;
    cout << invertePalavra(palavra3, 0, tamanhoP3 - 1);
    
    return 0;
}
