#include <iostream>
#include <locale.h> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	bool teste_a = 2 > 4;  // 2 é maior do que 4 (FALSE)
	bool teste_b = 2 < 4; // 2 é menor do que 4 (TRUE)
	bool teste_c = 10 != 11; // 10 é diferente de 11 (TRUE)
	bool teste_d = 10 == 11; // 10 é igual a 11 (FALSE)
	bool teste_e = 10 >= 10; // 10 é maior ou igual a 10 (TRUE)
	
	cout << teste_a << endl; 
	cout << teste_b << endl;  
	cout << teste_c << endl;
	cout << teste_d << endl; 
	cout << teste_e << endl;

    return 0;
}
