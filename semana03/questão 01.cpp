#include <iostream>
#include <fstream>
using namespace std;

int main (){
    string texto, nomeArquivo;
    
    cin >> nomeArquivo;
    ifstream entrada (nomeArquivo);
    
    
    entrada >> texto;
    cout << texto << endl;
    entrada.close();
    return 0;
}
