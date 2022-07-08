#include <iostream>
#include <locale.h> 

using namespace std;

int maior(int a, int b){
	
	int retorno = a > b ? a : b;
	
	// A vari�vel retorno, na verdade, � desnecess�ria aqui
	// Poderia ser apenas "return a > b ? a : b"
	return retorno;
	
}

int intermediario(){
	
	int numero_a, numero_b;

	cout << "Digite um valor 0 e 10: ";
	cin >> numero_a;

	cout << "\nDigite outro valor entre 0 e 10: ";
	cin >> numero_b;
	
	// Ap�s obtidos os valores, a fun��o "maior" � chamada
	// No chamado s�o enviados os valores como argumento
	// Abaixo ocorrer� o retorno do retorno fun��o "maior" 
	return maior(numero_a, numero_b);
	
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int retorno;
	
	retorno = intermediario();
	
	// Poderia usar diretamente o chamado da fun��o no "cout"? Com certeza
	// Seria: cout << "\nO maior valor digitado �: " << intermediario();
	cout << "\nO maior valor digitado �: " << retorno;
	
	return 0;
    
}
