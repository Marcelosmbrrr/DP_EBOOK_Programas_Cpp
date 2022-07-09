#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

// Função recebe a matriz, o valor do total de linhas e colunas
// O tamanho da primeira dimensão da matriz não precisa ser declarado, as restantes sim
int soma_diagonal(int numeros[][3], int linhas, int colunas){
	
	int soma = 0;
	cout << "\n....MATRIZ RECEBIDA....SELECIONANDO DIAGONAL PRINCIPAL\n";
	
	// Percorrendo a linha
	for(int i = 0; i < linhas; i++){
		
		cout << "[";
		
		// Percorrendo a coluna
		for(int j = 0; j < colunas; j++){
			
			// Se coluna e linha forem iguais...
			if(i == j){
				cout << "(" << numeros[i][j] << ") ";
				soma += numeros[i][j]; 
				
			// Se coluna e linha não forem iguais...
			}else{
				cout << numeros[i][j] << " ";
			}
			
		}
		
		cout << "]" << endl;
	}
	
	return soma;
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numeros[3][3];
	
	// Preenchimento da matriz 
	for(int i = 0; i < 3; i++){
		cout << "..........." << (i+1) << "º linha" << "...........\n";
		for(int j = 0; j < 3; j++){
			cout << "\n[" << i << "][" << j << "]: ";
			cin >> numeros[i][j];
		}
	}
	
	int soma = soma_diagonal(numeros, 3, 3);
	
	cout << "\nA soma dos valores da diagonal principal é: " << soma;
	
	return 0;
	
}
	
