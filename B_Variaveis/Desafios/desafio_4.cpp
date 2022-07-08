#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor_metros, decimetro, centimetro, milimetro;
	
	cout << "Informe um valor em metros: ";
	cin >> valor_metros;
	
	centimetro = valor_metros * 100;
	decimetro = valor_metros * 10;
	milimetro = valor_metros * 1000;
	
	cout << "\nConversão para decímetro: " << decimetro;
	cout << "\nConversão para centímetro: " << centimetro;
	cout << "\nConversão para milimetro: " << milimetro;
	
	return 0;
	
}
