#include <iostream>
#include <locale.h> 

using namespace std;

int soma(){
	int num1, num2, resultado;
	
	cout << "Digite o primeiro n�mero: ";
	cin >> num1;
	
	cout << "\nDigite o segundo n�mero: ";
	cin >> num2;
	
	resultado = num1 + num2;
	
	return resultado; // Poderia ser apenas return num1 + num2;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int retorno;
	
	// A vari�vel retorno recebe o valor retornado pela fun��o
	retorno = soma();
	
	cout << "\nO resultado da soma �: " << retorno;
	
	return 0;
    
}
