#include <iostream>
#include <locale.h> 
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	string resultado;
	
	cout << "Digite um n�mero: ";
	cin >> numero;
	
	resultado = numero > 1000 ? "� maior do que 1000" : "� menor do que mil";
	
	cout << resultado;

    return 0;
}
