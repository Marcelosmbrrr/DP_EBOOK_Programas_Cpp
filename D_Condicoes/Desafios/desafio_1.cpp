#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	cout << "Informe a sua idade (min: 1): ";
	cin >> idade;
	
	if(idade >= 18){
		cout << "\nVoc� � um adulto.";
	}else if(idade >= 12 && idade < 18){
		cout << "\nVoc� � um adolescente.";
	}else if(idade < 12 && idade > 2){
		cout << "\nVoc� � uma crian�a.";
	}else if(idade <= 2 && idade > 0){
		cout << "\nVoc� � um beb�.";
	}else if(idade < 1){
		cout << "\nIdade inv�lida.";
	}	
	
	cout << "\nPrograma encerrado.";
	
	return 0;
	
}
