#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2;
	int operacao;
	
	cout << "Digite um valor, escolha 1 para SOMA, 2 para SUBTRA��O, 3 para MULTIPLICA��O, 4 para DIVIS�O e outro valor: " << endl;
	cin >> n1 >> operacao >> n2;
	
	switch (operacao){
	
	case 1:
		cout << n1+n2;
		break;
	case 2:
		cout << n1-n2;
		break;
	case 3:
		cout << n1*n2;
		break;
	case 4:
		cout << n1/n2;
		break;
	default:
		cout << "Opera��o inv�lida! " << endl;
		break;
	}	
}

