#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

// Fun��o para retornar o menor n�mero
int menor(int primeiro_numero, int segundo_numero){
	
	// Tern�ria para retornar o menor n�mero
	return primeiro_numero > segundo_numero ? segundo_numero : primeiro_numero;
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2;
	
	cout << "Informe o primeiro n�mero: ";
	cin >> numero1;
	
	cout << "\nInforme o segundo n�mero: ";
	cin >> numero2;
	
	while(numero2 == numero1){
		cout << "\nOs n�meros devem ser diferentes: ";
		cin >> numero2;
	}
	
	int menor_numero = menor(numero1, numero2);
	
	cout << "\nO menor n�mero �: " << menor_numero;
	
	return 0;
	
}
	
