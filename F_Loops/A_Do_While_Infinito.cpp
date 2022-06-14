#include <iostream>
#include <locale.h> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int contador = 0;
	
	do{
		cout << "Ok" << endl;
		
	}while(contador == 0);
	
    return 0;
    
}
