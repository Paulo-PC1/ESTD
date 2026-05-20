#include <iostream>

using namespace std;

int main(void)
{
   float vetor[] {1.5, 11.1, 2.5, 22.1, 3.5, 33.1, 4.5, 44.1};
   bool acha;
   float pesq;
   
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
