#include <iostream>

using namespace std;

int main()
{
    
    int matriz[2][2] = {
	{10, 5}, 
	{15, 20}
	};
	
	// Percorrer linhas	
	for(int linha = 0; linha < 2; linha++){
		
		// Percorrer colunas da linha atual
		for(int coluna = 0; coluna < 2; coluna++){
			
			// Imprimir elemento atual com uma mensagem indicando linha e coluna atual
			cout << "[" << linha << "][" << coluna << "]: " << matriz[linha][coluna] << endl;
		}
	}

    return 0;
}

