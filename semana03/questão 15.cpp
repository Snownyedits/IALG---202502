#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main(){
    int valorTodo, valorDado, troco, nota20, nota10, nota5, nota2, nota1;
    ifstream entrada ("entrada.txt");
    entrada >> valorTodo;
    entrada >> valorDado;
    entrada.close();
    troco = valorTodo - valorDado;
    nota20 = floor(troco / 20);
    troco = (troco - 20 * nota20);
    nota10 = floor(troco / 10);
    troco = (troco - 10 * nota10);
    nota5 = floor(troco / 5);
    troco = (troco - 5 * nota5);
    nota2 = floor(troco / 2);
    troco = (troco - 2 * nota2);
    nota1 = floor(troco / 1);
    ofstream saida ("saida.txt");
    saida << nota20 << endl;
    saida << nota10 << endl;
    saida << nota5 << endl;
    saida << nota2 << endl;
    saida << nota1 << endl;
    saida.close();
    return 0;



}
