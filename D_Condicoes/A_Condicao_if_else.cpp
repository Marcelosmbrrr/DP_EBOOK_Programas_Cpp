#include <iostream>
#include <locale.h> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float primeiro_valor, segundo_valor;
	
	cout << "Digite o primeiro valor num�rico (pode ser fracion�rio): ";
	cin >> primeiro_valor;
	
	cout << "\nDigite o segundo valor num�rico (pode ser fracion�rio): ";
	cin >> segundo_valor;
	
	if(primeiro_valor > segundo_valor){
		
		cout << "\nO primeiro valor � maior";
		
	}else{
		
		cout << "\nO primeiro valor n�o � maior do que o segundo";
		
	}

    return 0;
}
