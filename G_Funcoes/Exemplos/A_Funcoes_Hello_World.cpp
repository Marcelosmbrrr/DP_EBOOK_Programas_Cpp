#include <iostream>
#include <locale.h> 

using namespace std;

void imprime_mensagem(){
	cout << "Hello World com Fun��o!";
}

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	imprime_mensagem();
    
}
