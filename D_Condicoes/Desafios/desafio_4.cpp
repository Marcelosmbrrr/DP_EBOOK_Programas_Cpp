#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2;
	char operador;
	
	cout << "Informe o valor do primeiro número: ";
	cin >> numero1;
	
	cout << "\nInforme o valor do segundo número: ";
	cin >> numero2;
	
	cout << "\nInforme a operação que quer realizar. Digite + para soma, - para subtração, / para divisão e * para multiplicação: ";
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
