#include <iostream>
#include <locale.h> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char vetor[5] = {'A', 'B', 'C', 'D', 'E'};
	
	for(int contador = 0; contador < 5; contador++){
		cout << vetor[contador] << endl;
	}
	
    return 0;
    
}
