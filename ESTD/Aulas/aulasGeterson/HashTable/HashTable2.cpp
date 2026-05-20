#include <iostream>
#include <unordered_set> // conjunto hash - sem valores acossiados

using namespace std;

int main(void)
{
    //o valor 1 aparece 2x
    unordered_set<int> meuSet = {3, 1, 4, 1, 5, 9};
    unordered_set<int> meuSet2 = {3, 1, 4, 1, 5, 9, 6, 7, 10, 70, 45, 91, 100, 1000, 1000};

    // insert() ignora silenciosamente se valor ja existe
    meuSet.insert(2);
    meuSet.insert(1); // ja existe = nao sera inserido novamente
    meuSet2.insert(5000);
    meuSet2.insert(7);

    //exibe todos os elementos
    // sem duplicatas imdependente de quentas vezes

    for(int x : meuSet){
        cout << x << " "; // saida: 2 5 9 4 1 3 no meuSet: 3 1 4 1 5 9
    }
    cout << endl;

    for(int x : meuSet2){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

