#include <iostream>
using namespace std;

/*
Atacar todos os inimigos
checar a morte de inimigo
    se sim
        repete
    se não
        interrompe
*/

bool Mata(int inimigos[], int tamanho, int &derrotados){
	int anterior = derrotados;
    for(int i = 0; i < tamanho; i++){
        inimigos[i]-= 1;
    }
    for(int i = 0; i < tamanho; i++){
        if(inimigos[i] == 0){
            derrotados++;
        }
    }
    if(derrotados > anterior)
		return true;
	else
		return false;
}

int main (){
    int tamanho = 10;
    int inimigos[tamanho];
    int derrotados = 0;
    bool ataque = true;
    // preenchendo o vetor ( vida dos inimigos )
    for (int i = 0; i < tamanho; i++)
        cin >> inimigos[i];
    
    while(ataque)
        ataque = Mata(inimigos,tamanho,derrotados);
     
    cout << derrotados << endl;
    return 0;

}
