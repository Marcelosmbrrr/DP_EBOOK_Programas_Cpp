#include <iostream>

using namespace std;

int main(){
	
	float numero_a = 10.45, numero_b = 5.8;
	
	cout << "Primeiro valor: " << numero_a << endl;
	cout << "Segundo valor: " << numero_b << "\n";
	
	// A vari�vel "numero_a" foi igualada a uma opera��o de substra��o
	// Essa opera��o � a substra��o do valor do "numero_a" pelo valor do "numero_b"
	numero_a = numero_a - numero_b;
	
	// A valor do "numero_a" foi modificado com a opera��o, e agora � impresso
	cout << "O primeiro valor foi modificado. Agora ele vale: " << numero_a;
	
	return 0;
	
}
