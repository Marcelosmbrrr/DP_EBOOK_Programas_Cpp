#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numeros[5];
	
	// Preenchimento do vetor de numeros
	for(int cont = 0; cont < 5; cont++){
		cout << "\n[" << cont << "]: ";
		cin >> numeros[cont];
	}
	
	// Variáveis para armazenar o numero atual e o próximo numero
	int atual, proximo;
	
	// O bubble sort é um algoritmo que compara o atual valor com o seu próximo - se o atual for maior, eles trocam de lugar. Ex: {2,0} se torna {0,2}
	// Se o array tem 5 números, o primeiro bubble irá jogar o maior de todos para a última posição, não se importando com a sequência dos outros valores
	// O segundo bubble nesse array jogaria o segundo maior valor para a penúltima posição, porque não seria maior que o que já foi jogado para a última
	
	for(int bubble = 0; bubble < 4; bubble++){
		
		// Serão realizadas 4 comparações no atual bubble
		// São 4 loops porque último não tem um posterior para ser comparado com ele
		// As posições comparadas são: [0]-[1], [1]-[2], [2]-[3], [3]-[4]
		for(int indice = 0; indice < 4; indice++){
			
			atual = numeros[indice];
			proximo = numeros[indice+1];
			
			// Se o atual for maior que o próximo...
			if(atual > proximo){
				
				// Eles trocam de lugar
				numeros[indice] = proximo;
				numeros[indice+1] = atual;
			}	
		}
	}
		
	cout << "\n....BUBBLE SORT REALIZADO....";
	
	// Impressão do array ordenado
	for(int cont = 0; cont < 5; cont++){
		cout << "\n[" << cont << "]: " << numeros[cont];
	}
	
	return 0;
	
}
	
