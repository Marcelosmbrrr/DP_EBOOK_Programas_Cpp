#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int primeiro_numero, segundo_numero, soma, subtr, multi;
	float div;
	
	cout << "Informe o primeiro número inteiro: ";
	cin >> primeiro_numero;
	
	cout << "Informe o segundo número inteiro: ";
	cin >> segundo_numero;
	
	soma = primeiro_numero + segundo_numero;
	subtr = primeiro_numero - segundo_numero;
	multi = primeiro_numero * segundo_numero;
	div = primeiro_numero / segundo_numero;
	
	cout << "\nResultado da soma: " << soma;
	cout << "\nResultado da subtração: " << subtr;
	cout << "\nResultado da multiplicaçao: " << multi;
	cout << "\nResultado da divisão: " << div;
	
	return 0;
	
}
