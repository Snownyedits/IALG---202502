//Questão 10 da semana 5.
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string numero_correto = "23031999"; // Senha correta no caso
    string  tentativa;
    int numero_count = 0;
    ifstream entrada ("tentativas.txt"); // Acessando arquivo de tentativas.txt

    if(!entrada){
        cout << "Erro ao abrir arquivo de tentativas" << endl;
        return 1;
    }
    while  (entrada >> tentativa) { // Lendo a disnara das tentativas uma por uma
        numero_count++;
    if (tentativa == numero_correto){ // Se o arquivo ler as tentativas e uma for a certa, ele vai falar que acessou e mais o número de tentativas até chegar a isso (ex: Acessou 2)
        cout << "acessou " << numero_count << endl;
        return 0;
    }
    }
    if (numero_count == 4) {
    }
    cout << "nao " << numero_count << endl; // Se o arquivo ler o máximo de tentativas que é 4, ele vai falar que o arquivo não foi acessado e o número de tentativas (ex : nao 4)

    entrada.close ();
    return 0;
}
    