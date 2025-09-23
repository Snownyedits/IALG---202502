#include <iostream>
#include <fstream>

using namespace std;
int main (){
    string nomeArquivo, texto;
    cin >> nomeArquivo;
    cin >> texto;
    ofstream saida (nomeArquivo);
    saida << texto << endl;
    return 0;
}