#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int indice;
	string vetor_nomes[4] = {"Marcelo", "Pedro", "Fernanda", "Mario"};
	
	// Também poderia ser de 1 a 4
	// Assim a variável índice, quando utilizada como índice do vetor, seria (indice-1)
	cout << "Digite um número de 0 a 3 (inclusive) para selecionar um nome da coleção de nomes cadastrados: ";
	cin >> indice;
	
	if(indice >= 0 && indice <= 3){
		cout << "\nNome selecionado: " << vetor_nomes[indice];
	}else{
		cout << "\nValor inválido";
	}
	
	cout << "\n...Programa encerrado...";
	
	return 0;
	
}
