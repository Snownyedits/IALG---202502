#include <iostream>
using namespace std;

void Divisão(int* numeros){
    int divisor = numeros[0];
    for(int i =0; i < 15; i++){
        if(numeros[i] > divisor){
            divisor = numeros[i];
        }
    }
    for(int i = 0; i < 15; i++){
        numeros[i] = numeros[i] / divisor;
        cout << numeros[i] << " ";
    }
}

int main (){
    int* numeros = new int[15];
    for(int i = 0; i < 15; i++){
        cin >> numeros[i];
    }
    Divisão(numeros);
    delete[]numeros;

    return 0;
}