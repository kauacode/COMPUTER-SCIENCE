#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int totalGasto, opcao, nParcela;
	
	cout << "Digite o total gasto em uma loja por um cliente: " << endl;
	cin >> totalGasto;
	cout << "Opções de pagamento disponíveis:" << endl;
	cout << "Digite 1 para pagar a vista com 10% de desconto" << endl;
	cout << "Digite 2 para pagar em duas vezes" << endl;
	cout << "Digite 3 para pagar em 3 até 10 vezes com 3% de juros" << endl;
	cin >> opcao;
	switch (opcao){
		
		case 1:
			cout << totalGasto*0.9 << " reais";
			break;
		case 2:
			cout << totalGasto << " reais";
			break;
		case 3:
			if (totalGasto > 100){
			cout << totalGasto*1.03 << " reais";
			}
			else cout << "Valor abaixo de 100 reais.";
			break;
		default:
			cout << "Opção inválida!";	
	}
}
	
	
