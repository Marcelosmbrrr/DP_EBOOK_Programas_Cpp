#include <iostream>
#include <locale.h> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[3][3] = { {17, 10, 23}, { 89,  45, 78}, { 12,  14, 2} };
	
	cout << matriz[0][0];
	
    return 0;
    
}
