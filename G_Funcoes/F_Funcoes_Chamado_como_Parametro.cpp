#include <iostream>

using namespace std;

float soma(float a, float b, float c){

	float soma = a + b + c;

	return soma;
}

float triplo(int numero){
	return numero * 3;
}

int main()
{
	
	cout << "A soma vale: " << soma(triplo(2.10), triplo(10.10), 10.45);
	
	return 0;
    
}
