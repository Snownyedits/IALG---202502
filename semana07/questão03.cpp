#include <iostream>
using namespace std;

int* Multiplo(int* numeros, int &tamanho, int divisor){
    int multiplos = 0;
    int posicao = 0;
    for(int i = 0; i < 10; i++){
        if(numeros[i] % divisor == 0)
            multiplos++;
    }
    int* novo_vetor = new int[multiplos];
    for(int i = 0; i < 10; i++){
        if(numeros[i] % divisor == 0){
            novo_vetor[posicao] = numeros[i]; 
            posicao++;
        }
    }
    tamanho = posicao;
    return novo_vetor;
}

int main(){
    int tamanho_original = 10;
    int tamanho = tamanho_original;
    int* numeros = new int[tamanho];
    int maior = 0;

    // Recebe os valores
    for (int i = 0; i < 10; i++){
        cin >> numeros[i];
    }

    // Cria vetor de multiplos de 2
    int* numeros_2 = new int;
    numeros_2 = Multiplo(numeros, tamanho, 2);

    // Imprime vetor de multiplos de 2
    for(int i = 0; i< tamanho; i++)
        cout << numeros_2[i] << " ";
    cout << endl;
    // Checa o maior numero multiplo de 2 e imprime ele
    maior = numeros_2[0];
    for(int i = 1; i < tamanho; i++){
        if(numeros_2[i] > maior){
            maior = numeros_2[i];
        }
    }
    cout << maior << endl;
    tamanho = tamanho_original; // reinicia o tamanho

    // Cria vetor de multiplos de 3
    int* numeros_3 = new int;
    numeros_3 = Multiplo(numeros, tamanho, 3);

    // Imprime vetor de multiplos de 3
    for(int i = 0; i< tamanho; i++)
        cout << numeros_3[i] << " ";
    cout << endl;
    // Checa o maior numero multiplo de 3 e imprime ele
    maior = numeros_3[0];
    for(int i = 1; i < tamanho; i++){
        if(numeros_3[i] > maior){
            maior = numeros_3[i];
        }
    }
    cout << maior << endl;
    
}