#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    int horas, minutos, horasConv1, horasConv2, horasConv3;
    cin >> horas;
    cin >> minutos;
    
    horasConv1 = horas * 60;
    horasConv2 = horasConv1 + minutos;
    horasConv3 = horasConv2 * 60;
    
    ofstream saida ("saida.txt");
    saida << horasConv1 << endl;
    saida << horasConv2 << endl;
    saida << horasConv3 << endl;
    saida.close();
    return 0;
}
    
