#include <iostream>

int main(void)
{
    int array[] {1, 2, 3, 4, 5};
int array2[5][5] = {
    {1,  2,  3,  4,  5},   // Linha 0
    {6,  7,  8,  9,  10},  // Linha 1
    {11, 12, 13, 14, 15},  // Linha 2
    {16, 17, 18, 19, 20},  // Linha 3
    {21, 22, 23, 24, 25}   // Linha 4
};
    //for(int i = 0; i <= 4; ++i)
    for (int i = 0; i < 5; ++i){
        std::cout << array[i] << std::endl;
    }
    
    std::cout << "---------------------" << std::endl;
    
    //for(int i = 0; i <= 4; ++i)
    for (int i = 0; i < 5; ++i){
        //for(int j = 0 <= 4; ++j)
        for (int j = 0; j < 5; ++j)
        {
            std::cout << array2[i][j] << std::endl;
        }
        
    }
    
    return 0;
}