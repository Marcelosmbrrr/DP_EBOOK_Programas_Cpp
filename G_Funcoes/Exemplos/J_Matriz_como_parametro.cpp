#include <iostream>
#include <locale.h> 

using namespace std;

void imprime_matriz(char matriz[3][3], int total_linhas, int total_colunas){
	
	for(int linha = 0; linha < total_linhas; linha++){
		
		for(int coluna = 0; coluna < total_colunas; coluna++){
			
			// A coluna atual � impressa
			// Cada valor da coluna � separado por um espa�o " "
			cout << matriz[linha][coluna] << " ";
		}
		
		// Aqui os loops das colunas da linha atual acabaram
		// Antes da linha variar � realizada uma quebra de linha
		// Assim os valores de cada linha ser�o impressos em linhas diferentes 
		cout << endl;
	}
	
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char matriz[3][3] = {
	{'A','B', 'C'}, 
	{'D', 'E', 'F'}, 
	{'G', 'H', 'I'}
	};
	
	imprime_matriz(matriz, 3, 3);
	
	return 0;
    
}
