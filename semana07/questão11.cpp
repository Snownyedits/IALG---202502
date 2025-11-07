#include <iostream>
using namespace std;

void Media(float* numeros1, float* numeros2){
    float numeros3[10];
    for(int i = 0; i < 10; i++){
        int i_inverso = (10 - 1) - i;
        numeros3[i] = (numeros1[i] + numeros2[i_inverso]) / 2;
        }
    for(int i = 0; i < 10; i++){
        cout << numeros3[i] << endl;
    }
}

void Maior_Segundo(float* numeros1, float* numeros2){
    float maior1 = numeros1[0];
    float maior2 = numeros2[0];
    float segundoMaior1 = 0;
    float segundoMaior2 = 0;
    for(int i = 0; i < 10; i++){
        if(numeros1[i] > maior1){
            segundoMaior1 = maior1;
            maior1 = numeros1[i];
        }
        else if(numeros1[i] < maior1 and numeros1[i] > segundoMaior1){
            segundoMaior1 = numeros1[i];
        }
        if(numeros2[i] > maior2){
            segundoMaior2 = maior2;
            maior2 = numeros2[i];
        }
        else if(numeros2[i] < maior2 and numeros2[i] > segundoMaior2){
            segundoMaior2 = numeros2[i];
        }


    }
    cout << maior1 << endl;
    cout << segundoMaior1 << endl;
    cout << maior2 << endl;
    cout << segundoMaior2 << endl;

}

int main(){
    float* numeros1 = new float[10];
    for(int i = 0; i < 10; i++){
        cin >> numeros1[i];
    }
    float* numeros2 = new float[10];
    for(int i = 0; i < 10; i++){
        cin >> numeros2[i];
    }
    Media(numeros1,numeros2);
    Maior_Segundo(numeros1,numeros2);
    delete[]numeros1;
    delete[]numeros2;
}