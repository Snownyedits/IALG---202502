#include <iostream>
using namespace std;

void Confere_soma(float* reais){
    int positivos = 0;
    int negativos = 0;
    float soma_neg = 0;
    for (int i =0; i < 10; i++){
        if (reais[i] > 0 or reais[i] == 0){
            positivos++;
        }
        else{
            negativos++;
        }
    }
    for (int i = 0; i < 10; i++)
        if(reais[i] < 0){
            soma_neg += reais[i];
        }
    cout << positivos << endl;
    cout << soma_neg << endl;
}

int main(){
    float* reais = new float[10];
    for(int i = 0; i < 10; i++){
        cin >> reais[i];
    }
    Confere_soma(reais);
delete[]reais;
    return 0;
}
