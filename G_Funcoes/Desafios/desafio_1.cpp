#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int maior(int numeros[], int tam){
	
	int maior = 0;
	for(int cont = 0; cont < tam; cont++){
		if(numeros[cont] > maior){
			maior = numeros[cont];
		}
	}
	
	return maior;
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int tamanho;
	
	cout << "Informe a quantidade de números que quer cadastrar: ";
	cin >> tamanho;
	
	while(tamanho <= 0){
		cout << "\nA quantidade deve ser maior do que zero: ";
		cin >> tamanho;
	}
	
	int numeros[tamanho], numero;
	for(int cont = 0; cont < tamanho; cont++){
		cout << "\nInforme o " << (cont+1) << "º número: ";
		cin >> numero;
		numeros[cont] = numero;
	}
	
	int retorno = maior(numeros, tamanho);
	
	cout << "\nO maior número entre os informados é: " << retorno;
	
	return 0;
	
}
	
