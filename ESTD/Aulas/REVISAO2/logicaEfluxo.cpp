#include <iostream>

using namespace std;

int main(void)
{
    int notas[]{};


    for(int i = 0; i < 5; ++i){
        cin >> notas[i];
    }

    for(int i = 0; i < 5; ++i){
        if(notas[i] > 7)
            cout << notas[i] << "-";
    }
    cout << endl;

    return 0;
}
