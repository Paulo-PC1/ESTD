#include <iostream>

using namespace std;

bool ehPar(int n)
{
    if(n - 2 *(n / 2 ) == 0){
        cout << "Par";
        return true;
    }
    cout << "Impar";
    return false;
}

int main(void)
{
    int num;

    cin >> num;

    ehPar(num);

    cout << &ehPar << endl;

    return 0;

}
