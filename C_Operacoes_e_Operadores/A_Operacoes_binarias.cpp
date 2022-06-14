#include <iostream>
#include <locale.h> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	// Se forem do mesmo tipo, é possível declarar variáveis na mesma linha
    int primeiro_inteiro = 4, segundo_inteiro = 2;
    int soma, divisao, subtracao, multiplicacao;
    
    soma = primeiro_inteiro + segundo_inteiro;
    subtracao = primeiro_inteiro - segundo_inteiro;
    multiplicacao = primeiro_inteiro * segundo_inteiro;
    divisao = primeiro_inteiro / segundo_inteiro;
    
    cout << "Resultado da soma: " << soma << endl;
    cout << "Resultado da subtração: " << subtracao << endl;
    cout << "Resultado da multiplicação: " << multiplicacao << endl;
    cout << "Resultado da divisão: " << divisao;

    return 0;
}
