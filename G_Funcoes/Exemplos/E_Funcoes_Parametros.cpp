#include <iostream>
#include <locale.h> 

using namespace std;

void soma(int a, int b, int c){

	int soma = a + b + c;

	cout << "A soma resultou em: " << soma;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1 = 200, num2 = 350;
	
	soma(num1, num2, 50+50);
	
	return 0;
    
}
