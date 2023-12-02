#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float valorEmprestimo, nParcelas, valorParcela, salario;
	
	cout <<"Digite o valor do empréstimo: ";
	cin >>valorEmprestimo;
		
	cout <<"Digite o número de parcelas: ";
	cin >>nParcelas;
	
	cout <<"Digite o salário: ";
	cin >>salario;
	
	valorParcela = valorEmprestimo/nParcelas;
	
	if (valorParcela <= salario*0.3)
	{
		cout <<"Empréstimo aprovado!";	
	}
	else
	{
		cout <<"Empréstimo recusado!";
	}
}
