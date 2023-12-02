#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	cout << "Digite sua idade: ";
	cin  >> idade;
	
	if (idade < 16)
	{
		cout << "Não pode nem votar e nem dirigir";
	}
	else if (idade >= 16 < 18)
	{
		cout << "Pode votar, mas não pode dirigir";
	}
	else if (idade >= 18)
	{
		cout << "Pode votar e pode dirigir";
	}	
}

