#include <iostream>
#include <string>

using namespace std;
//ver quantas letras a tem na string
int main(void)
{
    string a;
    int contador = 0;

    getline(cin, a);

    for(char c : a){
        if(c == 'a'){
            ++contador;
        }
    }

    cout << a << " Tem " << contador << " letras A";

    cout << endl;

    return 0;
}


