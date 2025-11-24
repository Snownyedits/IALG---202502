#include <iostream>
using namespace std;

struct Pessoas{
    string nome;
    int dia;
    int mes;
    int ano;
    int indice;
};

bool mais_Velho(struct Pessoas a, struct Pessoas b){
    if(a.ano < b.ano){
        return true;
    }
    else if(a.ano > b.ano){
        return false;
    }
    
    if(a.mes < b.ano){
        return true;
    }
    else if(a.mes > b.mes){
        return false;
    }

    if(a.dia < b.dia){
        return true;
    }

    return false;   
}

int main(){
    int total;
    cin >> total;
    Pessoas maisVelha;
    Pessoas* p = new Pessoas[total];
    for(int i = 0; i < total; i++){
        cin >> p[i].nome >> p[i].dia >> p[i].mes >> p[i].ano;
    }
    for(int i = 0; i < total; i++){
        p[i].indice = i;
        if(i == 0){
            maisVelha.nome = p[i].nome;
        }
        else if(mais_Velho(p[i], maisVelha)){
        maisVelha.nome = p[i].nome;
        }
    }
    cout << maisVelha.nome << endl;
delete[]p;
    
    return 0;
}