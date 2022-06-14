#include <iostream>
#include <locale.h> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float primeiro_valor, segundo_valor;
	
	cout << "Digite o primeiro valor numérico (pode ser fracionário): ";
	cin >> primeiro_valor;
	
	cout << "\nDigite o segundo valor numérico (pode ser fracionário): ";
	cin >> segundo_valor;
	
	if(primeiro_valor > segundo_valor){
		
		cout << "\nO primeiro valor é maior";
		
	}else{
		
		cout << "\nO primeiro valor não é maior do que o segundo";
		
	}

    return 0;
}
