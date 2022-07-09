#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

// Fun��o que cadastra o nome
// Recebe o contador do loop realizado na fun��o main
string cadastra_nome(int cont){
	
	string nome;
	
	// O nome � requisitado enquanto tiver menos do que 3 letras
	do{
		cout << (cont+1) << "� nome (min: 3 letras): ";
		cin >> nome;
	}while(nome.length() < 3);
	
	return nome;
}

// Fun��o para retornar o maior nome
// Recebe o vetor dos nomes e retorno o maior deles
string maior_nome(string nomes[5]){
	
	string maior_nome = "";
	for(int cont = 0; cont < 5; cont++){
		
		// A fun��o length � nativa da biblioteca C++ e calcula quantas letras tem uma string
		if(nomes[cont].length() > maior_nome.length()){
			maior_nome = nomes[cont];
		}
	}
	
	return maior_nome;
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string nomes[5];
	
	// Loop com while apenas para variar
	int contador = 0;
	while(contador < 5){
		
		// A cada loop a fun��o cadastra_nome � chamada sendo enviado como argumento o contador do loop
		nomes[contador] = cadastra_nome(contador);
		contador++;
		
	}
	
	// A vari�vel maior recebe o retorno da fun��o que obt�m o maior nome
	string maior = maior_nome(nomes);
	
	cout << "\nO maior nome �: " << maior;
	
	return 0;
	
}
	
