#include <iostream>

using namespace std;

const int maxSize = 4;
int queue[maxSize];
int beginQ = 0, lastQ = 0;
bool isEmpty = true;

void enqueue(int value)
{   
    if (lastQ == beginQ && !isEmpty )
    {
        cout << "Fila cheia!!" << endl;
        return;
    }    
    queue[lastQ] = value;
    isEmpty = false;
    lastQ++;
    if (lastQ == maxSize)
    {
        lastQ = 0;
    }
    
}

void dequeue()
{
    if(isEmpty)
    {
        cout << "Fila Vazia!!" << endl;
        return;
    }
    beginQ++;
    if (beginQ == maxSize)
    {
        beginQ = 0;
    }
    if (beginQ == lastQ && !isEmpty)
    {
        isEmpty = true;
    }
    
    
}

void showQueue()
{
    if(isEmpty)
    {
        cout << "Fila Vazia!!" << endl;
        return;
    }

    if ()
    {
        for (int i = beginQ; i < lastQ; ++i)
        {
            cout << queue[i] << " - ";
    
        }
    }else
    {
        for (int i = beginQ; i < maxSize; ++i)
        {
            cout << queue[i] << " - ";
        }
        for (int i = ; i < ; i++)
        {
            /* code */
        }
        
        
    }
    
    cout << endl;
    
}

int main(void)
{
    enqueue(8);
    enqueue(1);
    enqueue(3);
    enqueue(6);
    showQueue();
    enqueue(22);
    return 0;
}
