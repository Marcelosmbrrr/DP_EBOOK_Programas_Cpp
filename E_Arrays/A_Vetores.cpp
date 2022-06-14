#include <iostream>
#include <locale.h> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[3] = { 10, 20, 12455 };
	
	cout << "1º valor: " << vetor[0] << endl;
	cout << "2º valor: " << vetor[1] << endl;
	cout << "3º valor: " << vetor[2];
	

	
    return 0;
    
}
