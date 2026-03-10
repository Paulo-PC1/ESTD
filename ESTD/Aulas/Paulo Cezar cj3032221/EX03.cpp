#include <iostream>

using namespace std;

void exibirMatriz(int matriz[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << ", ";
        }
        cout << endl;
    } 
}


int main(void)
{
    int matriz1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int matriz2[3][3] = {
        {2, 4, 6},
        {8, 10, 12},
        {14, 16, 18}
    };
    int matriz3[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    
    exibirMatriz(matriz1);
    cout << endl;
    exibirMatriz(matriz2);
    cout << endl;
    exibirMatriz(matriz3);
    
    return 0;
}
