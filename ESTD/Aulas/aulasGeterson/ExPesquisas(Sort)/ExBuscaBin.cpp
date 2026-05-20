#include <iostream>

using namespace std;
/*
Algoritimo de busca binária para listas(array) ja ordenados 
*/
int pesqBin(int lista[], int busca, int &ciclos) 
// recebe como parametro o array o valor a buscado e os ciclos(sendo ele como referencia para poder fazer a contagem e manter valor após sair da função)
{
    // insttruções para atrivuir valor as variaveis ja existentes e novar variaveis criadas 
    ciclos = 0; // atribui o contador a 0
    int inicio = 0; // atribiu var inicio a 0
    int fim = 10 - 1; // atribui var fim a n - 1

    while(inicio <= fim){// enquanto o inicio for menor ou igual a var fim
        ciclos++;// incrementa o contador(ciclos)
        int meio = (inicio + fim) / 2; // cria var meio e atribui seu valor a soma de inicio e fim div 2
        if(busca == lista[meio]){// se a busca for igual ao valor da array com o indice do meio
            return meio; // retorna o meio(posicao)
        } 
        else if (busca < lista[meio]){ // caso o valor buscado seja maior que o array indice meio
            fim = meio - 1; // atribui o fim a meio - 1
        } 
        else{ // se nao o inicio é atribuido ao meio + 1
            inicio = meio + 1;
        }
    }
    return -1; // se valor não esta no array retorna -1 
}
/*
Algoritimo de Ordenação para lista não ordenada (Pesquisa Binaria só funciona se Lista estiver Ordenada)
*/
void ordenacao(int lista[], int tamanho) // recebe como parametro o array e seu tamanho
{
    for(int i = 0; i < tamanho - 1; ++i){ //primeiro laço para pegar o tamalho da lista{array} passado
        for(int j = 0; j < tamanho - 1; ++j){ // segundo laço do array para fazer a troca
            if(lista[j] > lista[j + 1]){ // compara se array[i] é maior que array[j +1]-> tem q ser +1 pq pega a pos da frente
                int temp = lista[j]; // cria var temporaria para fazer a troca nas linhas 38 - 40
                lista[j] = lista[j + 1]; 
                lista[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int lista[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};// lista ja ordenada
    int listaSemOrdem[10]{10,15,55,88,100,1,0,4,81,200}; // lista sem ordenação
    int busca, ciclos; // variaveis de busca e contator de ciclos de busca


    for(int i = 0; i < 10; ++i){ // laço para mostrar os valores do array
        cout << lista[i] << "-";
    }
    
    // instruções abaixo pedem pra usuario o valor a ser buscado
    cout << endl;
    cout << "Qual num quer achar?: ";
    cin >> busca;
    
    pesqBin(lista, busca, ciclos);// chama a função de pesquisa binária passando o array(ordenado) o valor buscado e os ciclos
    
    // instruções mostram o valor buscado a posição do array (0 a 9) que o valor se encontra e quantos ciclos levaram para achar
    cout << "Num Buscado: " << busca << endl;
    cout << "Posicao: " << pesqBin(lista, busca, ciclos) << endl;// ao inves de atribuir o resultado da função a uma variavel o mostramos diretamente no cout
    cout << "Ciclos: " << ciclos << endl;
    
    for(int i = 0; i < 10; ++i){ // laço para mostrar os valores do array
        cout << listaSemOrdem[i] << "-";
    }
    
    // instruções abaixo pedem pra usuario o valor a ser buscado
    cout << endl;
    cout << "Qual num quer achar?: ";
    cin >> busca;
    
    ordenacao(listaSemOrdem, 10); // chama a função de ordenaçao passando a lista não ordenada e seu tamanho 
    pesqBin(listaSemOrdem, busca, ciclos); // chama a função de pesquisa binária passando o array(agora ordenado) o valor buscado e os ciclos
    
    // instruções mostram o valor buscado a posição do array (0 a 9) que o valor se encontra e quantos ciclos levaram para achar
    cout << "Num Buscado: " << busca << endl;
    cout << "Posicao: " << pesqBin(listaSemOrdem, busca, ciclos) << endl;// ao inves de atribuir o resultado da função a uma variavel o mostramos diretamente no cout
    cout << "Ciclos: " << ciclos << endl;

    //instruções para encerrar o executavel do programa
    cout << endl;
    cout <<  "Tecla Enter pra acabar";
    cin.get();

    return 0;
}

