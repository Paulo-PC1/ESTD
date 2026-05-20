#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for(int i = 0; i < n; ++i){
        arr[i] = i * 2;
        cout << arr[i] << "-";
    }

    delete[] arr;
    arr = nullptr;

    return 0;
}



