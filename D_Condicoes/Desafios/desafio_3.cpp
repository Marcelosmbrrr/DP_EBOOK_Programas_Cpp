#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float carteira, desconto, preco;
	int idade, id_escolhido;
	
	cout << "Valor armazenado na carteira: ";
	cin >> carteira;
	
	cout << "\nInforme a sua idade: ";
	cin >> idade;
	
	cout << "\n...LISTANDO PRODUTOS...";
	cout << "\nID: 1 | Cadeira | Pre�o: R$ 50.00";
	cout << "\nID: 2 | Sof� | Pre�o: R$ 230.00";
	
	cout << "\nEscolha um produto por ID: ";
	cin >> id_escolhido;
	
	// Defini��o do pre�o a ser descontado com base no produto escolhido
	if(id_escolhido == 1){
		preco = 50.00;
	}else{
		preco = 230.00;
	}
	
	// Se o valor da carteira � menor do que o pre�o...
	if(carteira < preco){
		cout << "\nSaldo insuficiente!";
		
	// Se n�o, se o valor da carteira � maior do que o pre�o...
	}else{
		
		// A vari�vel desconto recebe o valor do pre�o menos 30% se a idade do usu�rio for maior que 60
		// Se a idade n�o for maior que 60, desconto recebe 0
		desconto = idade > 60 ? preco - (preco * 30 / 100) : 0;
		
		// A carteira recebe o valor atual dela menos o pre�o com o desconto aplicado
		carteira = carteira - (preco - desconto);
		
		// Impress�o da situa��o final
		cout << "\nCompra processada! ID do produto: " << id_escolhido;
		cout << "\nPre�o final do produto: R$" << (preco - desconto) << " (desconto: R$" << desconto << ")";
		cout << "\nValor final da carteira: R$" << carteira;
	}
	
	return 0;
	
}
