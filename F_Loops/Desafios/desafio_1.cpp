#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numeros[10], numero;
	int soma_par = 0, soma_impar = 0;
	
	for(int cont = 0; cont < 10; cont++){
		// Para que a mesagem tenha uma contagem de 1 a 10, faça (cont+1)
		cout << "\nInforme o " << cont << "º valor: ";
		cin >> numero; 
		
		numeros[cont] = numero;
		
		if(numero % 2 == 0){
			soma_par = soma_par + numero; 
		}else{
			soma_impar = soma_impar + numero;
		}
	}
	
	cout << "\nSoma dos pares: " << soma_par;
	cout << "\nSoma dos ímpares: " << soma_impar;
	
	return 0;
	
}
