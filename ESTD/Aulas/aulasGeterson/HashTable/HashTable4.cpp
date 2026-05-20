#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<char, int> primo = {
    {'a', 2},  {'b', 3},  {'c', 5},  {'d', 7},  {'e', 11},
    {'f', 13}, {'g', 17}, {'h', 19}, {'i', 23}, {'j', 29},
    {'k', 31}, {'l', 37}, {'m', 41}, {'n', 43}, {'o', 47},
    {'p', 53}, {'r', 61}, {'s', 67}, {'t', 71}, {'u', 73},
    {'v', 79}, {'w', 83}, {'x', 89}, {'y', 97}, {'z', 101}
};

int hashD(string s){

    int sum = 0;
    for(char c : s){
        primo[c] = primo[c] * s[c];
        sum += primo[c];
    }
    return sum % 10;

}

int main(void)
{
    string lista[10] {"bag", "apple", "cat", "dog", "ant", "bat", "egg", "fig", "ham", "jam"};

    int hashGerado = hashD(lista);
    cout << hashGerado;

    return 0;
}
