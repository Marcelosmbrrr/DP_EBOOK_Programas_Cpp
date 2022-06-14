#include <iostream>
#include <locale.h> 

using namespace std;

void soma(int vetor[10], int tamanho){
	
	// Os valores do vetor são somados
	int soma = 0;
	for(int cont = 0; cont < tamanho; cont++){
		soma = vetor[cont] + soma;
	}
	
	// A soma é impressa
	cout << "A soma dos elementos do vetor é igual a : " << soma;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int contador = 0, vetor[10];
	
	// Cada posição do array recebe 10 * contador
	while(contador < 10){
		vetor[contador] = 10 * contador;
		contador++;
	}
	
	// Vetor preenchido é enviado para a função soma
	// Também é enviado o valor do tamanho do vetor
	soma(vetor, 10);
	
	return 0;
    
}
