#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1a7;
	
	cout <<"Escreva um número inteiro de 1 a 7: ";
	cin >>num1a7;
	
	switch(num1a7)
	{
		case 1: cout << "Esse número representa a segunda-feira.";
		break;
		case 2: cout << "Esse número representa a terça-feira.";
		break;
		case 3: cout << "Esse número representa a quarta-feira.";
		break;
		case 4: cout << "Esse número representa a quinta-feira.";
		break;
		case 5: cout << "Esse número representa a sexta-feira.";
		break;
		case 6: cout << "Esse número representa o sábado.";
		break;
		case 7: cout << "Esse número representa o domingo.";
		break;
		default: cout << "Número inválido!";
		break;		
	}
}
