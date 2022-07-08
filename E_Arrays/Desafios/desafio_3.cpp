#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string pessoa1[2], pessoa2[2], pessoas[2][2];
	int opcao;
	
	cout << "Digite 1 para começar e 0 para finalizar o programa: ";
	cin >> opcao;
	
	// Após esse cin, os outros Inputs são getline()
	// Ou seja, o buffer precisa ser limpo com cin.ignore()
	cin.ignore(); 
	
	if(opcao == 1){
		
		cout << "\n...CADASTRO DAS PESSOAS...";
		
		cout << "\nInforme o nome da 1º pessoa: ";
		getline(cin, pessoa1[0]);
		cout << "\nInforme o sexo da 1º pessoa (masc ou fem): ";
		getline(cin, pessoa1[1]);
		
		cout << "....................................";
		
		cout << "\nInforme o nome da 2º pessoa: ";
		getline(cin, pessoa2[0]);
		cout << "\nInforme o sexo da 2º pessoa (masc ou fem): ";
		getline(cin, pessoa2[1]);
		
		// Gravação da primeira pessoa
		pessoas[0][0] = pessoa1[0]; // 1º linha, 1º coluna da matriz pessoa recebe...
		pessoas[0][1] = pessoa1[1]; // 1º linha, 2º coluna da matriz pessoa recebe...
		
		// Gravação da segunda pessoa
		pessoas[1][0] = pessoa2[0]; // 2º linha, 1º coluna da matriz pessoa recebe...
		pessoas[1][1] = pessoa2[1]; // 2º linha, 2º coluna da matriz pessoa recebe...
		
		// A 1º pessoa existe no que seria a primeira "linha" da matriz pessoa
		cout << "\n....DADOS DA 1º PESSOA....";
		cout << "\nNome: " << pessoa1[0];
		cout << "\nSexo: " << pessoa1[1];
		
		// A 2º pessoa existe no que seria a segunda "linha" da matriz pessoa
		cout << "\n....DADOS DA 2º PESSOA....";
		cout << "\nNome: " << pessoa2[0];
		cout << "\nSexo: " << pessoa2[1];
		
	}else{
		cout << "\n...Programa finalizado...";
	}
	
	return 0;
	
}
