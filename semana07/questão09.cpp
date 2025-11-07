#include <iostream>
using namespace std;

void Exibe(int* numeros){
    for (int i = 0; i < 5; ++i){
        cout << numeros[i] << " ";
    }
    cout << endl;
}

int Menor(int* numeros){
    int menor = numeros[0];
    int indice = -1;
    bool inicializado = false;
    for(int i = 0; i < 5; i++){     
        if(numeros[i] != -1){
            if(!inicializado or numeros[i] < menor){
            menor = numeros[i];
            indice = i;
            inicializado = true;
            }
        }
    }
    return indice;
}

bool Negativo(int* numeros){
    for(int i = 0; i < 5; i++){
        if(numeros[i] != -1){
            return false;
        }
    }
    return true;
}

void Resolve(int* numeros){
    while(!Negativo(numeros)){
        int i_menor = Menor(numeros);
            if(i_menor != -1){
                numeros[i_menor] = -1;
            }
        Exibe(numeros);
    }
    
}

int main (){
    int* numeros = new int[5];
    for(int i = 0; i < 5; i++){
        cin >> numeros[i];
    }
    Resolve(numeros);
    delete[]numeros;

    return 0;
}
