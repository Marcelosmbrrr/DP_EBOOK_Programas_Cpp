#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string nome;
	int idade;
	
	cout << "Digite a sua idade: ";
	cin >> idade;
	cin.ignore();
	
	cout << "\nDigite o seu nome: ";
	getline(cin, nome);
	
	cout << "\nNome: " << nome << " | Idade: " << idade;
	
	return 0;
	
}
