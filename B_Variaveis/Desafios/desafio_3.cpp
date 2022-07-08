#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float distancia, velocidade, tempo;
	
	cout << "Informe a velocidade do carro em Km/h: ";
	cin >> velocidade;
	
	cout << "\nInforme o tempo decorrido (em horas): ";
	cin >> tempo;
	
	distancia = velocidade * tempo;
	
	cout << "\nA distância percorrida foi de " << distancia << "km/h";
	
	return 0;
	
}
