#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2;
	char operador;
	
	cout << "Informe o valor do primeiro n�mero: ";
	cin >> numero1;
	
	cout << "\nInforme o valor do segundo n�mero: ";
	cin >> numero2;
	
	cout << "\nInforme a opera��o que quer realizar. Digite + para soma, - para subtra��o, / para divis�o e * para multiplica��o: ";
	cin >> operador;
	
	if(operador == '+'){
		cout << "\n" << numero1 << " " << operador << " " << numero2 << " = " << (numero1+numero2);
	}else if(operador == '-'){
		cout << "\n" << numero1 << " " << operador << " " << numero2 << " = " << (numero1-numero2);
	}else if(operador == '/'){
		cout << "\n" << numero1 << " " << operador << " " << numero2 << " = " << (numero1/numero2) << " | Resto: " << (numero1%numero2);
	}else{
		cout << "\n" << numero1 << " " << operador << " " << numero2 << " = " << (numero1*numero2);
	}
	
	return 0;
	
}
