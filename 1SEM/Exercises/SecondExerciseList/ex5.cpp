#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	cout << "Digite dois n�meros: " << endl;
	cin >> n1 >> n2;
	cout << "A soma dos n�meros �: " << n1 + n2 << endl;
	cout << "O produto do primeiro n�mero pelo quadrado do segundo �: " << n1*(n2*n2) << endl;
	cout << "O quadrado do primeiro n�mero �: " << (n1*n1) << endl;
	if (n1 >= 0){
		cout << "O m�dulo do primeiro n�mero �: " << n1;
	}
		else {
			cout << "O m�dulo do primeiro n�mero �: " << n1*-1; 
		}
	return 0;
}
