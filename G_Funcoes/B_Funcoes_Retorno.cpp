#include <iostream>
#include <locale.h> 

using namespace std;

int soma(){
	int num1, num2, resultado;
	
	cout << "Digite o primeiro número: ";
	cin >> num1;
	
	cout << "\nDigite o segundo número: ";
	cin >> num2;
	
	resultado = num1 + num2;
	
	return resultado; // Poderia ser apenas return num1 + num2;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int retorno;
	
	// A variável retorno recebe o valor retornado pela função
	retorno = soma();
	
	cout << "\nO resultado da soma é: " << retorno;
	
	return 0;
    
}
