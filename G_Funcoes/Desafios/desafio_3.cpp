#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

// Função para retornar o menor número
int menor(int primeiro_numero, int segundo_numero){
	
	// Ternária para retornar o menor número
	return primeiro_numero > segundo_numero ? segundo_numero : primeiro_numero;
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2;
	
	cout << "Informe o primeiro número: ";
	cin >> numero1;
	
	cout << "\nInforme o segundo número: ";
	cin >> numero2;
	
	while(numero2 == numero1){
		cout << "\nOs números devem ser diferentes: ";
		cin >> numero2;
	}
	
	int menor_numero = menor(numero1, numero2);
	
	cout << "\nO menor número é: " << menor_numero;
	
	return 0;
	
}
	
