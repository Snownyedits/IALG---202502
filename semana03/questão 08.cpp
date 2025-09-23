#include <math.h>
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	double custo, convite, minimo;
	int minimoInt;
	ifstream arquivo ("teatro.txt");
	arquivo >> custo;
	arquivo >> convite;
	arquivo.close();
	
	minimo = custo / convite;
	minimoInt = ceil(minimo);
	cout << minimoInt <<endl;	
	ofstream saida ("convite.txt");
	saida << minimoInt << endl;
	return 0;	
}
	
	
