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
	
	if(primeiro_valor > segundo_valor){ // SE()
		
		cout << "\nO primeiro valor é maior.";
		
	}else if(primeiro_valor < segundo_valor){ // SE NÃO, SE()
		
		cout << "\nO segundo valor é maior do que o primeiro.";
		
	}else if(primeiro_valor == segundo_valor){ // SE NÃO, SE()
		
		cout << "\nNenhum é maior do que o outro, porque ambos são iguais.";
		
	}

    return 0;
    
}
