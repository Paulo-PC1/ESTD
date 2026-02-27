#include <iostream>
using namespace std;

int main(void)
{
    char genero;
    char cor;
    
    cout << "Entre seu genero [M] ou [F] ou [O]:";
    cin >> genero;
    cout << "Entre sua cor [B] ou [P] ou [O]: ";
    cin >> cor;

    if (genero == 'M' && cor == 'B'){
        cout << "sua cor e Azul" << endl;
    } else if( genero == 'M' && cor == 'P'){
        cout << "sua cor e Vermelho" << endl;
    } else if (genero == 'F' && cor == 'B'){
        cout << "sua cor e Roxo" << endl;
    } else if (genero == 'F' && cor == 'P'){
        cout << "sua cor e Rosa" << endl;
    } else if( cor == 'P'){
        cout << "sua cor e Verde" << endl;
    } else if( cor == 'B'){
        cout << "sua cor e Cinza" << endl;
    } else if (genero == 'M'){
        cout << "sua cor e Ciano" << endl;
    } else if (genero == 'F'){
        cout << "sua cor e Magenta" << endl;
    } else{
        cout << "sua cor e Amarelo" << endl;
    }

    return 0;
}