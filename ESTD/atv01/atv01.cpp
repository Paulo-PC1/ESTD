#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{
    char genero;
    char cor;
    int vezes;
    int i = 1;

    cout << "Quantas pessoas quer registrar?: ";
    cin >> vezes;
    do
    {
        cout << "Entre o genero Masculino[M], Feminino[F] Outro[O]: ";
        cin >> genero;
        cout << "Entre a Cor Branco[B], Preto[P], Outro[O]";
        cin >> cor;
        ++i;
        
        if (toupper(genero) == 'M' && toupper(cor) == 'B'){
            cout << "sua cor e Azul" << endl;
        } else if( toupper(genero) == 'M' && toupper(cor) == 'P'){
            cout << "sua cor e Vermelho" << endl;
        } else if (toupper(genero) == 'F' && toupper(cor) == 'B'){
            cout << "sua cor e Roxo" << endl;
        } else if (toupper(genero) == 'F' && toupper(cor) == 'P'){
            cout << "sua cor e Rosa" << endl;
        } else if( toupper(cor) == 'P'){
            cout << "sua cor e Verde" << endl;
        } else if( toupper(cor) == 'B'){
            cout << "sua cor e Cinza" << endl;
        } else if (toupper(genero) == 'M'){
            cout << "sua cor e Ciano" << endl;
        } else if (toupper(genero) == 'F'){
            cout << "sua cor e Magenta" << endl;
        } else{
            cout << "sua cor e Amarelo" << endl;
    }
    } while (i <= vezes);  
    return 0;
}