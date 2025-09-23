#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
	double altura, largura, profundidade, cm3, peso;
	ifstream arquivo ("entrada.txt");
	arquivo >> profundidade;
	arquivo >> altura;
	arquivo >> largura;
	arquivo >> cm3;
	
	peso = (float)((altura * largura) * profundidade) * cm3;
	
	cout << fixed << setprecision(1);
	cout << peso << endl;
	return 0;
}
	
