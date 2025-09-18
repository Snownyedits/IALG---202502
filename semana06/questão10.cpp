// Faça uma sub-rotina que receba como parâmetro um valor inteiro e positivo N indicando a quantidade de parcelas de uma soma S, e que calcula o valor de S pela fórmula:
//S = 2/4 + 6/5 + 12/6 + ... + n*(n+1)/(n+3)

//A sub-rotina deve ser parte de um programa cujo módulo principal deve ler o N e escrever o S. O planejamento da passagem de parâmetros faz parte da avaliação.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float soma( int numeroParcelas){
    float soma;
    while (numeroParcelas != 0){
       soma += (float)numeroParcelas*(numeroParcelas+1)/(numeroParcelas+3);
       numeroParcelas--;

    }
    return soma;
}




int main (){
    int numeroParcelas;

    cin >> numeroParcelas;
    cout << fixed << setprecision(2) << soma(numeroParcelas) << endl;
}