#include <iostream>

using namespace std;

int main(){
	
	float numero_a = 10.45, numero_b = 5.8;
	
	cout << "Primeiro valor: " << numero_a << endl;
	cout << "Segundo valor: " << numero_b << "\n";
	
	// A variável "numero_a" foi igualada a uma operação de substração
	// Essa operação é a substração do valor do "numero_a" pelo valor do "numero_b"
	numero_a = numero_a - numero_b;
	
	// A valor do "numero_a" foi modificado com a operação, e agora é impresso
	cout << "O primeiro valor foi modificado. Agora ele vale: " << numero_a;
	
	return 0;
	
}
