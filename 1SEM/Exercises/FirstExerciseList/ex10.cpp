#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1a7;
	
	cout <<"Escreva um n�mero inteiro de 1 a 7: ";
	cin >>num1a7;
	
	switch(num1a7)
	{
		case 1: cout << "Esse n�mero representa a segunda-feira.";
		break;
		case 2: cout << "Esse n�mero representa a ter�a-feira.";
		break;
		case 3: cout << "Esse n�mero representa a quarta-feira.";
		break;
		case 4: cout << "Esse n�mero representa a quinta-feira.";
		break;
		case 5: cout << "Esse n�mero representa a sexta-feira.";
		break;
		case 6: cout << "Esse n�mero representa o s�bado.";
		break;
		case 7: cout << "Esse n�mero representa o domingo.";
		break;
		default: cout << "N�mero inv�lido!";
		break;		
	}
}
