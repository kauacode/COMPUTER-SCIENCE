#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int metros, dm, cm, pol, mm;
	
	cout << "Digite um comprimento em metros! " << endl;
	cin >> metros;
	dm = (metros*10);
	cm = (metros*100);
	pol = (metros*39.37);
	mm = (metros*1000);
	
	cout << "Seu valor em dec�metros �: " << dm << " decimetros." << endl;
	cout << "Seu valor em cent�metros �: " << cm << " centimetros." << endl;
	cout << "Seu valor em polegadas �: " << pol << " polegadas." << endl;
	cout << "Seu valor em mil�metros �: " << mm << " milimetros." << endl;
}

