#include <iostream>
#include <locale.h> 
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	string resultado;
	
	cout << "Digite um número: ";
	cin >> numero;
	
	resultado = numero > 1000 ? "É maior do que 1000" : "É menor do que mil";
	
	cout << resultado;

    return 0;
}
