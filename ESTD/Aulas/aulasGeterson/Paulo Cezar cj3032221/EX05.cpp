#include <iostream>

using namespace std;

uint64_t fibonacci(uint64_t n){
    if(n <= 1){
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void){

    uint64_t n;

    n = 0;
    fibonacci(n);
    cout << n << ": " << fibonacci(n) << endl;
    n = 1;
    fibonacci(n);
    cout << n << ": " << fibonacci(n) << endl;
    n = 2;
    fibonacci(n);
    cout << n << ": " << fibonacci(n) << endl;
    n = 3;
    fibonacci(n);
    cout << n << ": " << fibonacci(n) << endl;
    n = 4;
    fibonacci(n);
    cout << n << ": " << fibonacci(n) << endl;
    n = 5;
    fibonacci(n);
    cout << n << ": " << fibonacci(n) << endl;
    n = 6;
    fibonacci(n);
    cout << n << ": " << fibonacci(n) << endl;
    n = 7;
    fibonacci(n);
    cout << n << ": " << fibonacci(n) << endl;
    return 0;
}
