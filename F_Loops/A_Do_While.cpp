#include <iostream>
#include <locale.h> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int contador = 0;
	
	do{
		
		cout << "Ok" << endl;
		contador++;
		
	}while(contador < 5);
	
    return 0;
    
}
