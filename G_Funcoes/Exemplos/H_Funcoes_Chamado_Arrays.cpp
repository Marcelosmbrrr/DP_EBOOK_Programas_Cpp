#include <iostream>
#include <locale.h> 

using namespace std;

int indice(){
	
	return 0;
	
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[3] = {10, 20, 30};
	
	cout << "Elemento[0]: " << vetor[indice()];
	
	return 0;
    
}
