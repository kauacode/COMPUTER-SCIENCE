#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float valorEmprestimo, nParcelas, valorParcela, salario;
	
	cout <<"Digite o valor do empr�stimo: ";
	cin >>valorEmprestimo;
		
	cout <<"Digite o n�mero de parcelas: ";
	cin >>nParcelas;
	
	cout <<"Digite o sal�rio: ";
	cin >>salario;
	
	valorParcela = valorEmprestimo/nParcelas;
	
	if (valorParcela <= salario*0.3)
	{
		cout <<"Empr�stimo aprovado!";	
	}
	else
	{
		cout <<"Empr�stimo recusado!";
	}
}
