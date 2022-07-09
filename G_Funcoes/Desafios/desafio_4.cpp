#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

// Função para retornar o menor número
int potencia(int base, int expoente){
	
	// Função da biblioteca math.h
	return pow(base, expoente);
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int base, expoente;
	
	cout << "Informe o valor da base: ";
	cin >> base;
	
	cout << "\nInforme o valor do expoente: ";
	cin >> expoente;
	
	while(expoente < 1){
		cout << "\nO expoente deve ser igual ou maior que 1: ";
		cin >> expoente;
	}
	
	cout << "\n" << base << " elevado a " << expoente << " é igual a " << potencia(base, expoente);
	
	return 0;
	
}
	
