#include <iostream>

using namespace std;

uint64_t fibonacci(uint64_t n){
    if(n <= 1){
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void){

    uint64_t n {5};

    fibonacci(n);
    cout << n << endl;
    cout << fibonacci(n);
    return 0;
}