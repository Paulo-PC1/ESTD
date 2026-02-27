#include <iostream>

using namespace std;

int call; 

uint64_t fib(int n){
    if(n == 0){
        ++call; 
        return 0;
    }else if(n == 1){
        ++call;
        return 1;
    }else{
        ++call;
       return fib(n - 1) + fib(n - 2); 
    }
    
}

int main(void) {
    
    int n, x;
    
    cin >> n;
    for (int i = 0; i < n; ++i){
        call = 0;
        cin >> x;
        fib(x);
        cout << "fib(" << x << ") = " << call - 1 << " calls = " << fib(x) << endl;
        
    }

    return 0;
}