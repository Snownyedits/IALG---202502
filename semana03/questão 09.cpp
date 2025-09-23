#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
	string m2, W;
    float dim1, dim2, area, pot;
    cin >> dim1;
    cin >> dim2;
    
    area = dim1 * dim2;
    pot = area * 18;
    
    ofstream saida ("potencia.txt");
    saida << fixed << setprecision(1);
    saida << area << "m2" << endl;
    saida << pot << "W" << endl;
    
    return 0 ;
}
