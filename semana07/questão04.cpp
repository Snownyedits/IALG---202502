#include <iostream>
#include <string>
using namespace std;

void Confere(char* gabarito,char* aluno){
    int acertos = 0;
    string situacao;
    for(int i = 0; i < 10; i++){
        if(aluno[i] == gabarito[i]){
            acertos++;
        }
    }
    if (acertos > 5){
        situacao = "APROVADO";
    
    }
    else{
        situacao = "REPROVADO";
    }
    cout << acertos << endl;
    cout << situacao << endl;
}


int main (){
    char* gabarito = new char[10];
    for(int i = 0; i < 10; i++){
        cin >> gabarito[i];
    }
    char aluno1[10];
    for(int i = 0; i < 10; i++){
        cin >> aluno1[i];
    }              
    char aluno2[10];
    for(int i = 0; i < 10; i++){
        cin >> aluno2[i];
    }               
    Confere(gabarito,aluno1);
    Confere(gabarito,aluno2);
    
delete[]gabarito;
    return 0;
}
