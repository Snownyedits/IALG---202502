#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;
int main (){
    float valor, aVista, parcelado4, parcelado10;
    ifstream entrada ("valor.txt");
    entrada >> valor;
    aVista = (valor) - (valor * 0.08);
    parcelado4 = (valor) / 4.0;
    parcelado10 = (valor / 10.0) + (valor * 0.01);
    ofstream saida ("opcoes.txt");
    saida << fixed << setprecision(2);
    saida << aVista << endl;
    saida << parcelado4 << endl;
    saida << parcelado10 << endl;
    saida.close();
    return 0;

}
