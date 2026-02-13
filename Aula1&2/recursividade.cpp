#include <iostream>

using namespace std;

int fatorial(int n){
    if(n == 0){
        return 1;
    }
    return fatorial(n - 1) * n; 
}

int main(void)
{
    int n = 5;
    fatorial(n);
    return 0;
}