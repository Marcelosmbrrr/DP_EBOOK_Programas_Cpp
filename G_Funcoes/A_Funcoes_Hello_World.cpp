#include <iostream>
#include <locale.h> 

using namespace std;

void imprime_mensagem(){
	cout << "Hello World com Função!";
}

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	imprime_mensagem();
    
}
