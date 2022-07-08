#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int primeiro_numero, segundo_numero;
	bool maior_que, menor_que, igual, diferente;
	
	cout << "Informe o primeiro número inteiro: ";
	cin >> primeiro_numero;
	
	cout << "Informe o segundo número inteiro: ";
	cin >> segundo_numero;
	
	maior_que = primeiro_numero > segundo_numero;
	menor_que = primeiro_numero < segundo_numero;
	igual = primeiro_numero == segundo_numero;
	diferente = primeiro_numero != segundo_numero;
	
	cout << "\n....Considerando 1 para verdadeiro e 0 para falso....";
	
	cout << "\nOs números são iguais: " << igual;
	cout << "\nOs números são diferentes: " << diferente;
	cout << "\nO primeiro número é maior que o segundo: " << maior_que;
	cout << "\nO primeiro número é menor que o segundo: " << menor_que;
	
	return 0;
	
}
