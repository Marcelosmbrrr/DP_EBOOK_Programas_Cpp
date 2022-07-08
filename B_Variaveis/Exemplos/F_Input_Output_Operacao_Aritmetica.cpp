#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int primeiro_numero, segundo_numero, soma;
	
	cout << "Digite o primeiro número inteiro: ";
	cin >> primeiro_numero;
	
	cout << "Digite o segundo número inteiro: ";
	cin >> segundo_numero;
	
	soma = primeiro_numero + segundo_numero;
	
	cout << "A soma dos números digitados é igual a: " << soma;
	
	return 0;
	
}
