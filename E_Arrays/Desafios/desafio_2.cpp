#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float operacoes[4];
	int primeiro_valor, segundo_valor;
	
	cout << "Digite o primeiro valor: ";
	cin >> primeiro_valor;
	
	cout << "\nDigite o segundo valor: ";
	cin >> segundo_valor;
	
	// Operação são persistidas em cada posição do vetor
	operacoes[0] = primeiro_valor + segundo_valor;
	operacoes[1] = primeiro_valor - segundo_valor;
	operacoes[2] = primeiro_valor / segundo_valor;
	operacoes[3] = primeiro_valor * segundo_valor;
	
	// Sabendo a operação de cada posição do vetor a impressão é realizada
	cout << "\nSoma: " << operacoes[0];
	cout << "\nSubtração: " << operacoes[1];
	cout << "\nDivisão: " << operacoes[2];
	cout << "\nMultiplicação: " << operacoes[3];
	
	return 0;
	
}
