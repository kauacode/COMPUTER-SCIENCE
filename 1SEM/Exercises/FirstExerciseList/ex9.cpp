#include <iostream>
#include <locale>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	int saque, extrato, transferencia, deposito, opcao;
	
	cout << "----Seja bem-vindo----" << endl;
	cout << "Escolha uma op��o" << endl;
	cout << "1.Saque" << endl;
	cout << "2.Extrato"<< endl;
	cout << "3.Transferencia" << endl;
	cout << "4.Deposito" << endl;
	cin >> opcao;
	
	switch (opcao)
	{	
	case 1: cout << "A op��o escolhida foi para realizar um saque.";
	break;
	case 2: cout << "A op��o escolhida foi para ver o extrato.";
	break;
	case 3: cout << "A op��o escolhida foi para realizar uma transferencia.";
	break;
	case 4: cout << "A op��o escolhida foi para realizar um dep�sito.";
	break;
	default: cout << "N�o possui essa escolha.";
	break;
	}
}
