#include <iostream>

using namespace std;

int main(void)
{
    int x = 42;
    int *px = &x;

    cout << x << endl;

    cout << px << endl;
    cout << *px << endl;

    return 0;
}
