#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2;
	int operacao;
	
	cout << "Digite um valor, escolha 1 para SOMA, 2 para SUBTRAÇÃO, 3 para MULTIPLICAÇÃO, 4 para DIVISÃO e outro valor: " << endl;
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
		cout << "Operação inválida! " << endl;
		break;
	}	
}

