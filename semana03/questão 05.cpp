#include <iostream>
#include <fstream>
#include <iomanip> // Essa biblioteca vai servir para definir a precisão das casas decimais

using namespace std;
int main(){
    int nota1, nota2, nota3, peso1, peso2, peso3;
    float media;
    ifstream entrada ("notas.txt");
    entrada >> nota1 >> peso1;
    entrada >> nota2 >> peso2;
    entrada >> nota3 >> peso3;
    entrada.close();
    media = (float(nota1 * peso1) + float(nota2 * peso2) + float(nota3 * peso3)) / (peso1 + peso2 + peso3);
    ofstream saida ("final.txt");
    saida << fixed << setprecision(2) << media << endl;
    saida.close();
    return 0;

}
