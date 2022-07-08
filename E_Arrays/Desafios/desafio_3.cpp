#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string pessoa1[2], pessoa2[2], pessoas[2][2];
	int opcao;
	
	cout << "Digite 1 para come�ar e 0 para finalizar o programa: ";
	cin >> opcao;
	
	// Ap�s esse cin, os outros Inputs s�o getline()
	// Ou seja, o buffer precisa ser limpo com cin.ignore()
	cin.ignore(); 
	
	if(opcao == 1){
		
		cout << "\n...CADASTRO DAS PESSOAS...";
		
		cout << "\nInforme o nome da 1� pessoa: ";
		getline(cin, pessoa1[0]);
		cout << "\nInforme o sexo da 1� pessoa (masc ou fem): ";
		getline(cin, pessoa1[1]);
		
		cout << "....................................";
		
		cout << "\nInforme o nome da 2� pessoa: ";
		getline(cin, pessoa2[0]);
		cout << "\nInforme o sexo da 2� pessoa (masc ou fem): ";
		getline(cin, pessoa2[1]);
		
		// Grava��o da primeira pessoa
		pessoas[0][0] = pessoa1[0]; // 1� linha, 1� coluna da matriz pessoa recebe...
		pessoas[0][1] = pessoa1[1]; // 1� linha, 2� coluna da matriz pessoa recebe...
		
		// Grava��o da segunda pessoa
		pessoas[1][0] = pessoa2[0]; // 2� linha, 1� coluna da matriz pessoa recebe...
		pessoas[1][1] = pessoa2[1]; // 2� linha, 2� coluna da matriz pessoa recebe...
		
		// A 1� pessoa existe no que seria a primeira "linha" da matriz pessoa
		cout << "\n....DADOS DA 1� PESSOA....";
		cout << "\nNome: " << pessoa1[0];
		cout << "\nSexo: " << pessoa1[1];
		
		// A 2� pessoa existe no que seria a segunda "linha" da matriz pessoa
		cout << "\n....DADOS DA 2� PESSOA....";
		cout << "\nNome: " << pessoa2[0];
		cout << "\nSexo: " << pessoa2[1];
		
	}else{
		cout << "\n...Programa finalizado...";
	}
	
	return 0;
	
}
