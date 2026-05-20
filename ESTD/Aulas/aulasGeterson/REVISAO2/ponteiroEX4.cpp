#include <iostream>

using namespace std;
struct No {
    int dado;
    No * proximo;
};
int main(void)
{
    No *n1 = new No;
    No *n2 = new No;

    n1->dado = 10;
    //(*n1).dado = 5; // funciona porem não usual
    cout << n1->dado << endl;

    n1->proximo = n2;

    n2->dado = 20;
    cout << n2->dado << endl;

    n2->proximo = nullptr;

    delete n1;
    delete n2;

    return 0;
}




