#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float salario, tempo, bonus;
	
	cout <<"Digite seu sal�rio: ";
	cin  >> salario;
	cout <<"Digite seu tempo de servi�o em anos: ";
	cin  >> tempo;
	if (tempo>=5)
	{
		(bonus = salario*0.2);
		cout <<"O valor do bonus recebido � de: " <<bonus <<" reais";
	}
	else
	{
		(bonus = salario*0.1);
		cout <<"O valor do bonus recebido � de : " <<bonus <<" reais";
	}
}
