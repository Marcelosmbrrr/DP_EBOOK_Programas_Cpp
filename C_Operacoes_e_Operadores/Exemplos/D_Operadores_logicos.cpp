#include <iostream>
#include <locale.h> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int a = 10;
	int b = 20;
	bool c = true;
	
	// a é maior do que b E b é maior do que 5 // FALSE
	bool teste_and = a > b && b > 5; 
	
	// a é maior do que b OU b é maior do que 5 // TRUE
	bool teste_or = a > b || b > 5; 
	
	// A negação de c é igual a false, porque o contrário de TRUE é FALSE
	bool teste_not = !c;
	
	cout << teste_and << endl; 
	cout << teste_or << endl;  
	cout << teste_not;

    return 0;
}
