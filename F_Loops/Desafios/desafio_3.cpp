#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	
	cout << "Digite 1 para come�ar e 0 para finalizar o programa: ";
	cin >> opcao;
	
	if(opcao == 1){
		
		int quantidade_pessoas;
		
		cout << "\nQuantas pessoas quer cadastrar? ";
		cin >> quantidade_pessoas;
		
		// Limpar buffer antes do pr�ximo getline
		cin.ignore(); 
		
		// A matriz de pessoas ter� N linhas com 2 colunas cada
		string pessoas[quantidade_pessoas][2];
		// Vari�veis para receber e atribuir os dados de cada nova pessoa - a cada nova pessoa eles ser�o sobreescritos
		string pessoa[2], nome, sexo;
		// Contadores de linha e coluna
		int cont_linha, cont_coluna;
		
		cout << "\n...CADASTRO DAS PESSOAS...";
		// Preenchimento da matriz pessoas em loop
		
		// Percorrendo as linhas da matriz pessoas
		for(cont_linha = 0; cont_linha < quantidade_pessoas; cont_linha++){
			
			// A cada nova linha, no for(), isso ser� impresso pra dividir os cadastros visualmente
			cout << "\n....................................";
			
			// Percorrendo as colunas da atual linha da matriz pessoas
			for(cont_coluna = 0; cont_coluna < 2; cont_coluna++){
				
				// Se a coluna atual for 0, � a primeira, a do nome
				if(cont_coluna == 0){
					
					cout << "\nNome da " << (cont_linha+1) << "� pessoa: ";
					getline(cin, nome);
					
					pessoas[cont_linha][cont_coluna] = nome;
				
				// Se n�o, se n�o for 0, � 1, a segunda, a do sexo	
				}else{
					
					cout << "\nSexo da " << (cont_linha+1) << "� pessoa: ";
					getline(cin, sexo);
					
					pessoas[cont_linha][cont_coluna] = sexo;
					
				}
			}
		}
		
		cout << "\n....PESSOAS CADASTRADAS....IMPRIMINDO A MATRIZ DAS PESSOAS....\n";
		
		// Percorrendo as linhas
		for(cont_linha = 0; cont_linha < quantidade_pessoas; cont_linha++){
			
			// Sem quebra de linha para que a impress�o do valor da primeira coluna ocorra na mesma linha na tela de Output
			// Sempre quando a linha variar no for(), isso ser� impresso
			cout << "--> ";
			
			// Percorrendo as colunas 
			for(cont_coluna = 0; cont_coluna < 2; cont_coluna++){
				
				// O valor das duas colunas da atual linha s�o impressas na mesma linha da tela de Output porque n�o tem quebra
				// A concatena��o com o espa�o vazio serve apenas para que os valores n�o apare�am colados
				cout << pessoas[cont_linha][cont_coluna] << " ";
			}
			
			// Antes da linha variar no for(), � realizada uma quebra
			// Isso faz com que a pr�xima impress�o, que � o cout << "-->", ocorra na pr�xima linha da tela de Output
			cout << endl;
		}
		
	}else{
		cout << "\n...Programa finalizado...";
	}
	
	return 0;
	
}
