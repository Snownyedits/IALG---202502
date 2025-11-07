#include <iostream>
using namespace std;

void Lados(int*dado){
    double lado1 = 0.0;
    double lado2 = 0.0;
    double lado3 = 0.0;
    double lado4 = 0.0;
    double lado5 = 0.0;
    double lado6 = 0.0;

    for(int i = 0; i < 20; i++){
        if(dado[i] == 1){
            lado1 += 0.05;
        }
        if(dado[i] == 2){
            lado2 += 0.05;
        }
        if(dado[i] == 3){
            lado3 += 0.05;
        }
        if(dado[i] == 4){
            lado4 += 0.05;
        }
        if(dado[i] == 5){
            lado5 += 0.05;
        }
        if(dado[i] == 6){
            lado6 += 0.05;
        }
    }
    cout << "1:" << " " << lado1 << endl;
    cout << "2:" << " " << lado2 << endl;
    cout << "3:" << " " << lado3 << endl;
    cout << "4:" << " " << lado4 << endl;
    cout << "5:" << " " << lado5 << endl;
    cout << "6:" << " " << lado6 << endl;
}

int main (){
    int* dado = new int[20];
    for(int i = 0; i < 20; i++){
        cin >> dado[i];
    }

    Lados(dado);
    delete[]dado;
    
    return 0;
}