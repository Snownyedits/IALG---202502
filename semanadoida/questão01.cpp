#include <iostream>
#include <fstream>
using namespace std;

struct funcionario{
    int code;
    double wage;
    int work;
};

void Linguisa(funcionario* &goku, int &tamanho){
    funcionario* goku2 = new funcionario[tamanho+2];
    for(int i = 0; i < tamanho; i++){
        goku2[i] = goku[i];
    }
    delete[] goku;
    goku = goku2;
} 

void Sarsicha(funcionario* goku, int tamanho){
    int menor, aux_code, aux_work;
    double aux_wage;
    for(int i = 0; i < tamanho - 1; i++){
        menor= i;
        for (int j=i + 1; j<tamanho; j++){
            if (goku[j].work < goku[menor].work){
                menor=j;
            }
            else if (goku[j].work == goku[menor].work and goku[j].wage < goku[menor].wage){
                menor=j;
            }
            aux_code = goku[i].code;
            aux_wage = goku[i].wage;
            aux_work = goku[i].work;

            goku[i].code = goku[menor].code;
            goku[i].wage = goku[menor].wage;
            goku[i].work = goku[menor].work;

            goku[menor].code = aux_code;
            goku[menor].wage = aux_wage;
            goku[menor].work = aux_work;
        }
        
    }
}


int main(){
    int tamanho = 3;
    int i = 0;
    funcionario* goku = new funcionario[tamanho];
    ifstream entrada("entrada.txt");

    /*
    goku [0] || tamanho == 3
    goku [1] || tamanho == 3
    goku [2] || tamanho == 3 => realocação
    goku [3] || tamanho == 5
    goku [4] || tamanho == 5 => realocação
    goku [5] || ...
    */
    
    while(entrada >> goku[i].code >> goku[i].wage >> goku[i].work){
        if(i == tamanho - 1){
            Linguisa(goku, tamanho);
        }
        i++;
    }
    Sarsicha(goku, tamanho);
    tamanho = i;
    ofstream saida("saida.txt");
    for(int i = 0; i < tamanho; i++){
        saida << goku[i].code << " " << goku[i].wage << " " << goku[i].work << endl;
    }
    saida.close();

delete[]goku;
    return 0;
}
