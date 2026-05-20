#include <iostream>

using namespace std;

int maximo(int a, int b){
    if(a > b){
        return a;
    }else
    {
        return b;
    }
}

int main(void)
{
    int num1;
    int num2;

    cin >> num1;
    cin >> num2;



    cout << maximo(num1, num2) << endl;

    return 0;

}
