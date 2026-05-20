#include <iostream>

using namespace std;
//nao consegui
string invertePalavra(string &palavra)
{

    //caso base (palavra é igual a ela mesma EX:radar)
    if(palavra == palavra)
        return palavra;
}

int main(void)
{
    string palavra {"radar"};
    cout << palavra << endl;
    invertePalavra(palavra);
    cout << invertePalavra(palavra);
    return 0;
}
