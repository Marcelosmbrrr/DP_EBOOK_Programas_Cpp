#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int primeiro_numero, segundo_numero;
	bool maior_que, menor_que, igual, diferente;
	
	cout << "Informe o primeiro n�mero inteiro: ";
	cin >> primeiro_numero;
	
	cout << "Informe o segundo n�mero inteiro: ";
	cin >> segundo_numero;
	
	maior_que = primeiro_numero > segundo_numero;
	menor_que = primeiro_numero < segundo_numero;
	igual = primeiro_numero == segundo_numero;
	diferente = primeiro_numero != segundo_numero;
	
	cout << "\n....Considerando 1 para verdadeiro e 0 para falso....";
	
	cout << "\nOs n�meros s�o iguais: " << igual;
	cout << "\nOs n�meros s�o diferentes: " << diferente;
	cout << "\nO primeiro n�mero � maior que o segundo: " << maior_que;
	cout << "\nO primeiro n�mero � menor que o segundo: " << menor_que;
	
	return 0;
	
}
