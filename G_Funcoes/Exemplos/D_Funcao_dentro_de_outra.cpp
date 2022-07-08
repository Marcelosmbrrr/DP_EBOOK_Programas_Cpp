#include <iostream>
#include <locale.h> 

using namespace std;

int maior(int a, int b){
	
	int retorno = a > b ? a : b;
	
	// A variável retorno, na verdade, é desnecessária aqui
	// Poderia ser apenas "return a > b ? a : b"
	return retorno;
	
}

int intermediario(){
	
	int numero_a, numero_b;

	cout << "Digite um valor 0 e 10: ";
	cin >> numero_a;

	cout << "\nDigite outro valor entre 0 e 10: ";
	cin >> numero_b;
	
	// Após obtidos os valores, a função "maior" é chamada
	// No chamado são enviados os valores como argumento
	// Abaixo ocorrerá o retorno do retorno função "maior" 
	return maior(numero_a, numero_b);
	
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int retorno;
	
	retorno = intermediario();
	
	// Poderia usar diretamente o chamado da função no "cout"? Com certeza
	// Seria: cout << "\nO maior valor digitado é: " << intermediario();
	cout << "\nO maior valor digitado é: " << retorno;
	
	return 0;
    
}
