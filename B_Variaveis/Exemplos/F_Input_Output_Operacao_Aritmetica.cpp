#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int primeiro_numero, segundo_numero, soma;
	
	cout << "Digite o primeiro n�mero inteiro: ";
	cin >> primeiro_numero;
	
	cout << "Digite o segundo n�mero inteiro: ";
	cin >> segundo_numero;
	
	soma = primeiro_numero + segundo_numero;
	
	cout << "A soma dos n�meros digitados � igual a: " << soma;
	
	return 0;
	
}
