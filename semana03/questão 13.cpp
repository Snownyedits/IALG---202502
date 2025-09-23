#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
	int centena, cinquenta, dez, valor;
	cin >> valor;
	
    centena = (floor)(valor / 100);
    cinquenta = (floor)(valor - (centena * 100)) / 50 ;
    dez = (floor)(valor - (centena * 100) - cinquenta * 50) / 10;
    
    ofstream saida ("saque.txt");
    saida << centena << endl;
    saida << cinquenta << endl;
    saida << dez << endl;
    saida.close();
    return 0;
    
}
