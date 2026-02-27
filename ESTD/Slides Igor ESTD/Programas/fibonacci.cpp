#include <iostream>
using namespace std;

int fibonacci(int n){
    if (n <= 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char const *argv[])
{
    int fib;
    cin >> fib;
    cout << fibonacci(fib);
    return 0;
}
