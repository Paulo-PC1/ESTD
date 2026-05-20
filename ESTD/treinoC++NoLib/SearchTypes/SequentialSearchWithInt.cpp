#include <iostream>

using namespace std;

int main(void)
{
   int vetor[] {1, 11, 2, 22, 3, 33, 4, 44};
   bool acha;
   int pesq;
   
   cin >> pesq;
   
   acha = false;
   int i = 0;
   while(i < 8 and acha == false)
        if(pesq == vetor[i])
        {
            acha = true;
        }
        else{
            ++i;
        }
    if (acha == true)
    {
        cout << vetor[i] << endl;
    }else{
        cout << "Nao encontrado...";
    }
    
   
   
    return 0;
}
