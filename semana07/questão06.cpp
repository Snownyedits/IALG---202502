#include <iostream>
using namespace std;

bool Primos(int numeros){
    bool primo = true;
    for (int i = 2; i * i <=  numeros; i ++){
        if(numeros % i == 0){
            primo = false;
        }

    }
    if(numeros <= 1){
        primo = false;
    }
    return primo;
}

void Teste(int* numeros){
    for(int i = 0; i < 9; i++){
        if(Primos(numeros[i])){
            cout << numeros[i] << " " << i << endl;
        }
    }
}

int main (){
    int* numeros = new int[9];
    for (int i =0; i < 9; i++){
        cin >> numeros[i];
    }
    Teste(numeros);
delete[]numeros;

    return 0;
}
