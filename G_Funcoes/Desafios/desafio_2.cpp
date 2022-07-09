#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

// Função que cadastra o nome
// Recebe o contador do loop realizado na função main
string cadastra_nome(int cont){
	
	string nome;
	
	// O nome é requisitado enquanto tiver menos do que 3 letras
	do{
		cout << (cont+1) << "º nome (min: 3 letras): ";
		cin >> nome;
	}while(nome.length() < 3);
	
	return nome;
}

// Função para retornar o maior nome
// Recebe o vetor dos nomes e retorno o maior deles
string maior_nome(string nomes[5]){
	
	string maior_nome = "";
	for(int cont = 0; cont < 5; cont++){
		
		// A função length é nativa da biblioteca C++ e calcula quantas letras tem uma string
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
		
		// A cada loop a função cadastra_nome é chamada sendo enviado como argumento o contador do loop
		nomes[contador] = cadastra_nome(contador);
		contador++;
		
	}
	
	// A variável maior recebe o retorno da função que obtém o maior nome
	string maior = maior_nome(nomes);
	
	cout << "\nO maior nome é: " << maior;
	
	return 0;
	
}
	
