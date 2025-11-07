#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double sec (double vet[], int tamanho){
	double media = 0;
	double total = 0;
	for (int i = 0; i < tamanho; i++){
		total += vet[i];
	}
	media = total / tamanho;
	
	return media;
}

double maiorT (double vet[], int tamanho){
	double maiorTemp = vet[0];
	for (int i = 0; i < tamanho; i++){
		if (vet[i] > maiorTemp){
			maiorTemp = vet[i];
			}
		}
	return maiorTemp;
}
	

		

int main(){
	const int tamanhoVet = 7;
	double vet[tamanhoVet];	
	for (int i = 0; i < tamanhoVet; i++){
		cin >> vet[i];
	}
	double media = sec(vet, tamanhoVet);
	double maiorTemp = maiorT(vet, tamanhoVet);
	cout << fixed << setprecision(1) << media << endl; // média
	
	int dias = 0;
	for (int i = 0; i < tamanhoVet; i++){
		if (vet[i] > media){
			dias++; // dias acima da média
		}
	}
	cout << dias << endl;
	cout << maiorTemp << endl;
	 
		
	
	return 0;
}
