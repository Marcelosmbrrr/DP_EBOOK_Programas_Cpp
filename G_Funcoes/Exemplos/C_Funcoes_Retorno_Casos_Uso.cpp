#include <iostream>
#include <locale.h> 

using namespace std;

int soma(){
	return 10+10;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	// As posições do vetor recebem o retorno de soma
	int exemplo_vetor[2] = {soma(), soma()};
	
	// A variável recebe o resultado da operação com o retorno de soma
	int exemplo_operacao = 10 + soma() / 4;
	
	cout << "Vetor [0]: " << exemplo_vetor[0] << endl;
	cout << "Vetor [1]: " << exemplo_vetor[1] << endl;
	cout << "Operação: " << exemplo_operacao;
	
	return 0;
    
}
