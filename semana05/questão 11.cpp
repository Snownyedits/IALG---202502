//Questão 11 da semana 5.
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;
int main(){
    int limiteInf, limiteSup; // Limites das notas (inferior, superior)
    int notas, notas_count; // Notas dos Participantes
    ifstream entrada ("dados.txt"); // Acessando o arquivo dados.txt
    entrada >> limiteInf >> limiteSup;
    notas_count = 0; // O contador de tentativas deve ser 0 neste exercício, pois começa a partir da primeira tentativa

    while (entrada >> notas){
		if (notas >= limiteInf and notas <= limiteSup){ // A condição que é proposta na questão
        notas_count++; // Aqui é o número de notas sendo lido
       
        }
	}
    cout << notas_count << endl;
    
    return 0;
}


    
