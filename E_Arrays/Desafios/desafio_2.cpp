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
	
	// Opera��o s�o persistidas em cada posi��o do vetor
	operacoes[0] = primeiro_valor + segundo_valor;
	operacoes[1] = primeiro_valor - segundo_valor;
	operacoes[2] = primeiro_valor / segundo_valor;
	operacoes[3] = primeiro_valor * segundo_valor;
	
	// Sabendo a opera��o de cada posi��o do vetor a impress�o � realizada
	cout << "\nSoma: " << operacoes[0];
	cout << "\nSubtra��o: " << operacoes[1];
	cout << "\nDivis�o: " << operacoes[2];
	cout << "\nMultiplica��o: " << operacoes[3];
	
	return 0;
	
}
