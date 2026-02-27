#include <iostream>
#include <string>

using namespace std;

struct Things
{
    int num;
    string name;
};


int main(void)
{
   Things vetor[] {1, "paulo"};
   bool acha;
   string pesq1;
   int pesq2;
   
   getline(cin, pesq1);
   
   acha = false;
   int i = 0;
   while(i < 2 and acha == false)
        if(pesq1 == vetor[i].name)
        {
            acha = true;
        }
        else{
            ++i;
        }
    if (acha == true)
    {
        cout << vetor[i].name << endl;
    }else{
        cout << "Nao encontrado...";
    }
    
    cin >> pesq2;
    
    acha = false;
   while(i < 2 and acha == false)
        if(pesq2 == vetor[i].num)
        {
            acha = true;
        }
        else{
            ++i;
        }
    if (acha == true)
    {
        cout << vetor[i].num << endl;
    }else{
        cout << "Nao encontrado...";
    }
   
   
    return 0;
}
