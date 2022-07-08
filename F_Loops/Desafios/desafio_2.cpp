#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	// Para recuperar a quantidade de linhas e colunas
	int linhas, colunas; 
	
	cout << "\nInforme a quantidade de linhas da matriz A e B: ";
	cin >> linhas;
	cout << "\nInforme a quantidade de colunas da matriz A e B: ";
	cin >> colunas;
	
	// Criação das matrizes com o tamanho especificado de linhas e colunas
	int matriz_A[linhas][colunas], matriz_B[linhas][colunas], matriz_C[linhas][colunas];
	// Criação da variável que recebe o valor e das que contam as linhas e colunas nos loops
	int valor, cont_linha, cont_coluna;
	
	// Recolhimento dos valores para a Matriz A
	// Todas suas linhas e colunas devem ser percorridas
	cout << "\n..........MATRIZ A..........";
	for(cont_linha = 0; cont_linha < linhas; cont_linha++){
		for(cont_coluna = 0; cont_coluna < colunas; cont_coluna++){
			cout << "\n[" << cont_linha << "][" << cont_coluna << "]: ";
			cin >> valor;
			matriz_A[cont_linha][cont_coluna] = valor;
		}
	}
	
	// Recolhimento dos valores para a Matriz B
	// Todas suas linhas e colunas devem ser percorridas
	cout << "\n..........MATRIZ B..........";
	for(cont_linha = 0; cont_linha < linhas; cont_linha++){
		for(cont_coluna = 0; cont_coluna < colunas; cont_coluna++){
			cout << "\n[" << cont_linha << "][" << cont_coluna << "]: ";
			cin >> valor;
			matriz_B[cont_linha][cont_coluna] = valor;
		}
	}
	
	// Recolhimento dos valores para a Matriz C a partir da soma dos da matriz A e B
	// Todas suas linhas e colunas devem ser percorridas
	cout << "\n..........SOMANDO AS MATRIZES A E B.........";
	for(cont_linha = 0; cont_linha < linhas; cont_linha++){
		for(cont_coluna = 0; cont_coluna < colunas; cont_coluna++){
			matriz_C[cont_linha][cont_coluna] = matriz_A[cont_linha][cont_coluna] + matriz_B[cont_linha][cont_coluna];
		}
	}
	
	// Impressão dos valores da Matriz C
	// Todas suas linhas e colunas devem ser percorridas
	cout << "\n..........SOMA DAS MATRIZES REALIZADA..........";
	for(cont_linha = 0; cont_linha < linhas; cont_linha++){
		for(cont_coluna = 0; cont_coluna < colunas; cont_coluna++){
			cout << "\n[" << cont_linha << "][" << cont_coluna << "]: " << matriz_C[cont_linha][cont_coluna];
		}
	}
	
	return 0;
	
}
