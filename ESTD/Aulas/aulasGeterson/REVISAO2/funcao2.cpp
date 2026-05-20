#include <iostream>

using namespace std;

void trocar(int &a, int &b)
{
    int x;
    x = a;
    a = b;
    b = x;
}

int main(void)
{
    int num1, num2;

    cin >> num1;
    cin >> num2;

    trocar(num1, num2);

    cout << num1 << "-" << num2 << endl;

    return 0;

}
