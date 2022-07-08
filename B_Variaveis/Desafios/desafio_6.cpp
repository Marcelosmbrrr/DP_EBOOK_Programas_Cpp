#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float fahrenheit, celsius;
	
	cout << "Informe uma temperatura em Fahrenheit: ";
	cin >> fahrenheit;
	
	// Fórmula para um valor float
	celsius = (fahrenheit - 32.0) * (5.0/9.0);
	
	cout << "Conversão para Celsius: " << celsius << "ºC";
	
	return 0;
	
}
