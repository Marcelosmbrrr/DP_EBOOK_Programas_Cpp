#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	
	cout << "Digite 1 para avan�ar ou 0 para finalizar o programa: ";
	cin >> opcao;
	
	switch(opcao){
		
		case 1:
			int num1, num2, soma;
			
			cout << "\nDigite o primeiro n�mero: ";
			cin >> num1;
			
			cout << "\nDigite o segundo n�mero: ";
			cin >> num2;
			
			soma = num1 + num2;
			
			cout << "A soma vale: " << soma;
			
		break;
		
		case 0:
			cout << "\nO programa foi finalizado.";
		break;
		
		default:
			cout << "\nErro! Op��o inv�lida.";
		break;
		
	}
	
	return 0;
	
}
