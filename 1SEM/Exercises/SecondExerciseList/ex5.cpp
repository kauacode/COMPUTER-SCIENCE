#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	cout << "Digite dois números: " << endl;
	cin >> n1 >> n2;
	cout << "A soma dos números é: " << n1 + n2 << endl;
	cout << "O produto do primeiro número pelo quadrado do segundo é: " << n1*(n2*n2) << endl;
	cout << "O quadrado do primeiro número é: " << (n1*n1) << endl;
	if (n1 >= 0){
		cout << "O módulo do primeiro número é: " << n1;
	}
		else {
			cout << "O módulo do primeiro número é: " << n1*-1; 
		}
	return 0;
}
