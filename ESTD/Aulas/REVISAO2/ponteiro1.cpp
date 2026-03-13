#include <iostream>

using namespace std;

int main(void)
{
    int x {7};
    int *px = &x;

    cout << *px << endl;
    *px = 21;
    cout << *px << endl;

    return 0;
}

