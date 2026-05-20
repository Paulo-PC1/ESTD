#include <iostream>
#include <string>

using namespace std;

int main(void)
{
   string vetor[] {"paulo", "naty", "paola", "selma", "hugo", "denis", "cleiton"};
   bool acha;
   string pesq;
   
   getline(cin, pesq);
   
   acha = false;
   int i = 0;
   while(i < 7 and acha == false)
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
