#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main(){

    string nomeArq;
    cin >> nomeArq;

    ifstream entrada(nomeArq);
    ofstream saida ("cifrado.txt");

    string linha;
    while (getline(entrada, linha)){
        for (int i = 0; i < (int)linha.size(); i++){
            char c = linha[i];
            if (c >= 'A' and c <= 'Z'){
                linha[i] ='Z' -(c - 'A');
            }
        }
        saida << linha << endl;
    }

    entrada.close();
    saida.close();
    
    return 0;

}






