#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
int main (){
    float x1, x2, y1, y2, dist;
    ifstream entrada ("entrada.txt");
    entrada >> x1 >> y1 >> x2 >> y2;
    entrada.close();
    dist = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
    cout << dist << endl;
    return 0;

}