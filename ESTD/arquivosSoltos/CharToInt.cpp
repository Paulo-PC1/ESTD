#include <iostream>
#include <string>

using namespace std;
//ver quantas letras a tem na string
int main(void)
{
    string a;
    int contador = 0, num;

    getline(cin, a);

    for(char c : a){
        if(c == '1'){
            //num = c - '0';
            //num = toi(&c);
            num += num;
            ++contador;
        }
    }
    /*
    String to Int
    int n = std::stoi(s);
    */

    cout << a << " Tem " << contador << " numeros 1" << endl;
    cout << num + 1;
    cout << endl;

    return 0;
}
