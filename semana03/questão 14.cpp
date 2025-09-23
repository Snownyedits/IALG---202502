#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
	float salario, cheque2, cheque3, total, desc2, desc3 , totalDesc;
	ifstream arquivo ("entrada.txt");
	arquivo >> salario;
	arquivo >> cheque2;
	arquivo >> cheque3;
	arquivo.close();
	
	total = salario;
	desc2 = (cheque2 * 0.0038 ); 
	desc3 = (cheque3 * 0.0038 );
	totalDesc = total - cheque2 - cheque3 - desc2 - desc3;
	
	cout << totalDesc << endl;
	return 0;
}
	
