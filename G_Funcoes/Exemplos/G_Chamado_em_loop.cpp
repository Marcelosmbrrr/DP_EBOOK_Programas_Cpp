#include <iostream>
#include <locale.h> 
#include <stdlib.h>

using namespace std;

int random(){
	// Gera aleatoriamente um n�mero entre 1 e 10
	return rand() % 100 + 1;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[10];
	
	for(int i = 0; i < 10; i++){
		cout << (i+1) << "� n�mero: " << random() << endl;
	}
	
	return 0;
    
}
