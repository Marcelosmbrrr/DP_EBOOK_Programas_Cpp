#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int primeiro_numero, segundo_numero, soma, subtr, multi;
	float div;
	
	cout << "Informe o primeiro n�mero inteiro: ";
	cin >> primeiro_numero;
	
	cout << "Informe o segundo n�mero inteiro: ";
	cin >> segundo_numero;
	
	soma = primeiro_numero + segundo_numero;
	subtr = primeiro_numero - segundo_numero;
	multi = primeiro_numero * segundo_numero;
	div = primeiro_numero / segundo_numero;
	
	cout << "\nResultado da soma: " << soma;
	cout << "\nResultado da subtra��o: " << subtr;
	cout << "\nResultado da multiplica�ao: " << multi;
	cout << "\nResultado da divis�o: " << div;
	
	return 0;
	
}
