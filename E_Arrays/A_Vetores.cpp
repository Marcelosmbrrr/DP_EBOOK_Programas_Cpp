#include <iostream>
#include <locale.h> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[3] = { 10, 20, 12455 };
	
	cout << "1� valor: " << vetor[0] << endl;
	cout << "2� valor: " << vetor[1] << endl;
	cout << "3� valor: " << vetor[2];
	

	
    return 0;
    
}
