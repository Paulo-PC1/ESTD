#include <iostream>
#include <stack>

using namespace std;

bool conjuntosValidos(const string& conjunto)
{
    stack<char> pilha;

    for(char c : conjunto){
        if(c == '(' || c == '[' || c == '{')
        {
            pilha.push(c);
        }else if(c == ')' || c == ']' || c == '}'){
            if(pilha.empty())
                return false;

            char topo = pilha.top();
            pilha.pop();

            if((c == ')' && topo != '(') || (c == ']' && topo != '[') || (c == '}' && topo != '{')){
                return false;
            }
        }
    }
    return pilha.empty();
}

int main(void)
{
    string conjunto;

    cout << "Entre '(' ou '[' ou '{' para verificacao:";
    getline(cin, conjunto);

    if (!conjuntosValidos(conjunto)) {
        cout << "Parenteses ou Colchetes ou Chaves invalidos!" << endl;
    }else{
        cout << "Parenteses ou Colchetes ou Chaves Validos!" << endl;
    }

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
