#include <iostream>
#include <locale.h> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	cout << "Digite um n�mero: ";
	cin >> numero;
	
	switch(numero){
		case 50:
			cout << "O n�mero vale 50";
		break;
		
		case 100:
			cout << "O n�mero vale 100";
		break;
		
		default:
			cout << "O n�mero n�o vale 50 nem 100";
		break;
	}

    return 0;
}
