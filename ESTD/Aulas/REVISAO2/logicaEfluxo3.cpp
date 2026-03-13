#include <iostream>

using namespace std;
//tabuada 1 a 10
int main(void)
{
    int valor;
    int multiplica = 0;

    cin >> valor;
    
    for(int i = 1; i <= 10; ++i){
        multiplica = valor * i;
        cout << i << "x" << valor << "=" << multiplica << "-";
    }
    return 0;
}
