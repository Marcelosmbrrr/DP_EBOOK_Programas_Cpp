#include <iostream>
#include <locale.h> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int contador = 1;
	while(contador <= 50){
		cout << "--> " << contador << endl; 
		contador++;
	}
	
    return 0;
    
}
