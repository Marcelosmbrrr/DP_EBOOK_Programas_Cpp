#include <iostream>
#include <locale.h> 

using namespace std;

int soma(){
	return 10+10;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	// As posi��es do vetor recebem o retorno de soma
	int exemplo_vetor[2] = {soma(), soma()};
	
	// A vari�vel recebe o resultado da opera��o com o retorno de soma
	int exemplo_operacao = 10 + soma() / 4;
	
	cout << "Vetor [0]: " << exemplo_vetor[0] << endl;
	cout << "Vetor [1]: " << exemplo_vetor[1] << endl;
	cout << "Opera��o: " << exemplo_operacao;
	
	return 0;
    
}
