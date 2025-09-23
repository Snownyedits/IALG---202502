#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    float cm, m, minimo;
    int minimoInt;
    ifstream arquivo ("entrada.txt");
    arquivo >> cm;
    arquivo >> m;
    
    minimo = ceil(m * 100 / cm);
    minimoInt = minimo;
    arquivo.close();
    ofstream saida ("degraus.txt");
    saida << minimoInt << endl;
    saida.close();
    return 0;

}
