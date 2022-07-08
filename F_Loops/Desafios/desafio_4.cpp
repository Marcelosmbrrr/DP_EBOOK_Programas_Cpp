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
	
	// Vari�veis para armazenar o numero atual e o pr�ximo numero
	int atual, proximo;
	
	// O bubble sort � um algoritmo que compara o atual valor com o seu pr�ximo - se o atual for maior, eles trocam de lugar. Ex: {2,0} se torna {0,2}
	// Se o array tem 5 n�meros, o primeiro bubble ir� jogar o maior de todos para a �ltima posi��o, n�o se importando com a sequ�ncia dos outros valores
	// O segundo bubble nesse array jogaria o segundo maior valor para a pen�ltima posi��o, porque n�o seria maior que o que j� foi jogado para a �ltima
	
	for(int bubble = 0; bubble < 4; bubble++){
		
		// Ser�o realizadas 4 compara��es no atual bubble
		// S�o 4 loops porque �ltimo n�o tem um posterior para ser comparado com ele
		// As posi��es comparadas s�o: [0]-[1], [1]-[2], [2]-[3], [3]-[4]
		for(int indice = 0; indice < 4; indice++){
			
			atual = numeros[indice];
			proximo = numeros[indice+1];
			
			// Se o atual for maior que o pr�ximo...
			if(atual > proximo){
				
				// Eles trocam de lugar
				numeros[indice] = proximo;
				numeros[indice+1] = atual;
			}	
		}
	}
		
	cout << "\n....BUBBLE SORT REALIZADO....";
	
	// Impress�o do array ordenado
	for(int cont = 0; cont < 5; cont++){
		cout << "\n[" << cont << "]: " << numeros[cont];
	}
	
	return 0;
	
}
	
