#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, ME, MA;
	
	cout << "Digite suas tr�s notas!" << endl;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	
	ME = (n1+n2+n3)/3;
	MA = (n1 + n2*2 + n3*3 + ME)/7;
	
	if (MA >= 9){
		cout << "Sua m�dia de aproveitamento �: (A)" << endl;
	}
	
	else if (MA >= 7 && MA < 9){
		cout << "Sua m�dia de aproveitamento �: (B)" << endl;
	}
	
	else if (MA >= 6 && MA < 7){
		cout << "Sua m�dia de aproveitamento �: (C)" << endl;
	}
	
	else if (MA >= 4 && MA < 6){
		cout << "Sua m�dia de aproveitamento �: (D)" << endl;
	}
	
	else if (MA < 4){
		cout << "Sua m�dia de aproveitamento �: (E)" << endl;
	}
	return 0;
}
