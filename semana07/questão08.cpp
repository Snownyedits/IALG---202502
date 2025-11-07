#include <iostream>
#include <string>
using namespace std;

void Desconto(string* pessoas, int* refeicoes){
    for(int i = 0; i < 10; i++){
        if(refeicoes[i] > 10){
            refeicoes[i] = refeicoes[i] - (refeicoes[i] / 11);
        }
    }
    for(int i = 0; i < 10; i++){
        cout << pessoas[i] << " " << refeicoes[i] << endl;
    }
}

int main (){
    string* pessoas = new string[10];
    for(int i = 0; i < 10; i++){
        cin >> pessoas[i];
    }
    int* refeicoes = new int[10];
    for(int i = 0; i < 10; i++){
        cin >> refeicoes[i];
    }
    Desconto(pessoas, refeicoes);
    delete[]pessoas;
    delete[]refeicoes;

    return 0;
}