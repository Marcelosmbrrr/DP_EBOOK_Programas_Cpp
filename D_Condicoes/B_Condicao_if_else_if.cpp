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
	
	if(primeiro_valor > segundo_valor){ // SE()
		
		cout << "\nO primeiro valor � maior.";
		
	}else if(primeiro_valor < segundo_valor){ // SE N�O, SE()
		
		cout << "\nO segundo valor � maior do que o primeiro.";
		
	}else if(primeiro_valor == segundo_valor){ // SE N�O, SE()
		
		cout << "\nNenhum � maior do que o outro, porque ambos s�o iguais.";
		
	}

    return 0;
    
}
