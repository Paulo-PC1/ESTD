#include <iostream>

using namespace std;

int main(void)
{
    int *Dado = new int{100};

    cout << *Dado << endl;

    delete Dado;
    Dado = nullptr;

    return 0;
}


