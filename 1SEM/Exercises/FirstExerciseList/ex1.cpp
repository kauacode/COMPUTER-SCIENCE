#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1;
	
	cin >> num1;
	if (num1 < 0)
	{
		cout << "O numero é menor que zero ";
	}
	else if (num1 == 0)
	{
		cout << "O numero é igual a zero ";
	}
	else
	{
		cout << "O número é maior que zero ";
	}
}

