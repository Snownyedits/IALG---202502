#include <iostream>
using namespace std;

int main (){
    int x, y, resultado;
    cin >> x >> y;
    cout << "Endereço de x: " << &x << endl; // endereço de memoria de x
    cout << "Valor de x: " << x << endl;

    cout << "Endereço de y: " << &y << endl; // endereço de memoria de y
    cout << "Valor de y: " << y << endl;
    
    resultado = x * y; // calculando o produto de x e y
    cout << "Endereço de resultado: " << &resultado << endl; // endereço de memoria do resultado
    cout << "Valor de resultado: " << resultado << endl;
    
    return 0;
}