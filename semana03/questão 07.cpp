#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string nome1, nome2, nome3, texto1, texto2;
	cin >> nome1;
	cin >> nome2;
	cin >> nome3;
    ifstream arquivo1 (nome1);
    ifstream arquivo2 (nome2);
    arquivo1 >> texto1;
    arquivo2 >> texto2;
    arquivo1.close();
    arquivo2.close();
    
    ofstream saida (nome3);
    saida << texto1 <<" "<< texto2 << endl;
    saida.close();
    return 0;
}
