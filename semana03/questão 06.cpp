#include <math.h>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
	float vl1, vl2, vl3, vl4, vl5, vl6, vl7, vl8, media; //valores e médias declaradas
	ifstream arquivo ("dados.txt");
	arquivo >> vl1 >> vl2 >> vl3 >> vl4 >> vl5 >> vl6;
	arquivo >> vl7 >> vl8;
	arquivo.close();
	
	media = ((vl1 + vl2 + vl3 + vl4 + vl5 + vl6 + vl7 + vl8) / 8.0);
	
	ofstream saida ("media.txt");
	saida << media << endl;
	return 0;
	
}
	
     
