#include <iostream>
#include <fstream>

using namespace std; 

int main(){
    int maior, menor, segundoMaior, segundoMenor, n;
    ifstream entrada ("entrada.txt");

    entrada >> n;
    maior = n;
    menor = n;
    segundoMaior = n;
    segundoMenor = n;

    while (entrada >> n){
        if (n > maior){
            segundoMaior = maior;
            maior = n;
        }
        else if(n < segundoMaior && maior == segundoMenor){
            segundoMaior = n;
        }
        if (n < menor){
            segundoMenor = maior;
            menor = n;
        }
        else if(n > segundoMenor){
            segundoMenor = n;
        }
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     

    cout << menor << endl;
    cout << segundoMenor << endl;
    cout << maior << endl;
    cout << segundoMaior << endl;

    entrada.close();
    return 0;
    
}
