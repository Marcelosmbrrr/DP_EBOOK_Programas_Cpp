#include <iostream>
#include <locale.h> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	cout << "Digite um número: ";
	cin >> numero;
	
	switch(numero){
		case 50:
			cout << "O número vale 50";
		break;
		
		case 100:
			cout << "O número vale 100";
		break;
		
		default:
			cout << "O número não vale 50 nem 100";
		break;
	}

    return 0;
}
