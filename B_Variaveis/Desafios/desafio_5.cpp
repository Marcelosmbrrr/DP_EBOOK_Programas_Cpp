#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int nota1, nota2, nota3;
	float media;
	
	cout << "Primeira nota do aluno (1 a 10): ";
	cin >> nota1;
	
	cout << "\nSegunda nota do aluno (1 a 10): ";
	cin >> nota2;
	
	cout << "\nTerceira nota do aluno (1 a 10): ";
	cin >> nota3;
	
	media = (nota1 + nota2 + nota3) / 3;
	
	cout << "\nA média do aluno é: " << media;
	
	return 0;
	
}
