#include <iostream>
#include <cmath>
using namespace std;
int sec(int real,int fiftyCent,int twentyCent) {
    int moedas (int real, int fiftyCent, int twentyCent);
    int soma = (real * 100) + (fiftyCent *50) + (twentyCent * 25);
    return soma;
    
}






int main(){
   int real, fiftyCent, twentyCent;
   cin >> real >> fiftyCent >> twentyCent;
   cout << (real * 100) + (fiftyCent *50) + (twentyCent * 25) << endl;

} 
