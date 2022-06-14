#include <iostream>
#include <locale.h> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	bool verdadeiro = true; // Também poderia escrever 1
	bool falso = false; // Poderia escrever 0
	
	if(falso){
		
		cout << "Verdadeiro";
		
	}else{
		
		cout << "Falso";
		
	}
	

    return 0;
    
}
