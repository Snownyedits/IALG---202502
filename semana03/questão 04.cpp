#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
int main(){
    int numero, centena, dezena, unidade, soma, produto;
    cin >> numero;
    centena = floor(numero / 100);
    dezena = floor(numero %100) / 10;
    unidade = (numero % 100) % 10;
    soma = centena + dezena + unidade;
    produto = centena * dezena * unidade;
    cout << soma << endl;
    ofstream saida ("saida.txt");
    saida << produto << endl;
    saida.close();
    return 0;
}