//Desenvolva um programa que desenhe um triângulo utilizando os caracteres * e =. O programa deverá solicitar que o usuário digite um número n que deverá ser utilizado para definir a altura e a largura do triângulo. Os caracteres deverão ser alternados de maneira que todas as linhas do desenho sejam iniciadas pelo caractere *.

//O programa deve ter um procedimento que recebe o valor de n e imprime a pirâmide. 

//Entradas:
//1. Número inteiro que indica a altura e a largura do triângulo.
//Saídas:
//2. Um conjunto de caracteres * e = no formato de um triângulo.
//Exemplo de Entrada:
//5
//Exemplo de saída:
//*
//*=
//*=*
//*=*=
//*=*=*
#include <iostream>
#include <cmath>
using namespace std;
void triangulo(int alturaLargura){
    int cont;
    for (int i = 1; i <=alturaLargura; i++ ){
        cont = 0;
        while(cont < i){
            if( cont % 2 == 0)
                cout << "*";
            else
                cout << "=";
            cont++;
    }
    cout << endl;
}

}


int main (){
    int alturaLargura;
    cin >> alturaLargura;
    triangulo(alturaLargura);
    return 0;
}