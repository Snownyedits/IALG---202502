#include <iostream>
using namespace std;

struct Cartinha{
    string nome;
    string brinquedo;
    
};
struct Presente{
    string brinquedos;
    int disponiveis;
};

void Confere(Cartinha* crianca, Presente* presentes,int quantidade,int cartinhas){
    int contador = 0;
    for(int i = 0; i < cartinhas; i++){
        if(crianca[i].brinquedo == crianca[i+1].brinquedo){
            contador++;
            if(contador > quantidade){
                cout << crianca[i].brinquedo << " ";
            }
        }
    }

}
int main(){
    int cartinhas;
    int quantidade;
    cin >> cartinhas;
    Cartinha* crianca = new Cartinha[cartinhas]; 
    Presente* presentes = new Presente[quantidade]; 
    for(int i = 0; i < cartinhas; i++){
        cin >> crianca[i].nome >> crianca[i].brinquedo;
    }
    cin >> quantidade;
    for(int i = 0; i < quantidade; i++){
        cin >> presentes[i].brinquedos >> presentes[i].disponiveis;
    }
    Confere(crianca, presentes, quantidade, cartinhas);

    return 0;
}