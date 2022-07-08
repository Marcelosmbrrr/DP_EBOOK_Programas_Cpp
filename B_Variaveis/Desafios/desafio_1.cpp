#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int ano_nascimento, ano_atual, idade;
	
	cout << "Digite o seu ano de nascimento (ex: 2005): ";
	cin >> ano_nascimento;
	
	cout << "\nDigite o ano atual (ex: 2020): ";
	cin >> ano_atual;
	
	idade = ano_atual - ano_nascimento;
	
	cout << "\nA sua idade é: " << idade;
	
	return 0;
	
}
