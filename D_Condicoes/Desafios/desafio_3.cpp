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
	cout << "\nID: 1 | Cadeira | Preço: R$ 50.00";
	cout << "\nID: 2 | Sofá | Preço: R$ 230.00";
	
	cout << "\nEscolha um produto por ID: ";
	cin >> id_escolhido;
	
	// Definição do preço a ser descontado com base no produto escolhido
	if(id_escolhido == 1){
		preco = 50.00;
	}else{
		preco = 230.00;
	}
	
	// Se o valor da carteira é menor do que o preço...
	if(carteira < preco){
		cout << "\nSaldo insuficiente!";
		
	// Se não, se o valor da carteira é maior do que o preço...
	}else{
		
		// A variável desconto recebe o valor do preço menos 30% se a idade do usuário for maior que 60
		// Se a idade não for maior que 60, desconto recebe 0
		desconto = idade > 60 ? preco - (preco * 30 / 100) : 0;
		
		// A carteira recebe o valor atual dela menos o preço com o desconto aplicado
		carteira = carteira - (preco - desconto);
		
		// Impressão da situação final
		cout << "\nCompra processada! ID do produto: " << id_escolhido;
		cout << "\nPreço final do produto: R$" << (preco - desconto) << " (desconto: R$" << desconto << ")";
		cout << "\nValor final da carteira: R$" << carteira;
	}
	
	return 0;
	
}
