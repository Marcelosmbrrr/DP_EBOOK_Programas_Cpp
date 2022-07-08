#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	cout << "Informe a sua idade (min: 1): ";
	cin >> idade;
	
	if(idade >= 18){
		cout << "\nVocê é um adulto.";
	}else if(idade >= 12 && idade < 18){
		cout << "\nVocê é um adolescente.";
	}else if(idade < 12 && idade > 2){
		cout << "\nVocê é uma criança.";
	}else if(idade <= 2 && idade > 0){
		cout << "\nVocê é um bebê.";
	}else if(idade < 1){
		cout << "\nIdade inválida.";
	}	
	
	cout << "\nPrograma encerrado.";
	
	return 0;
	
}
