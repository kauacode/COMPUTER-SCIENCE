#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float peso, altura, imc;
	
	cout << "Digite seu peso: "  << endl;
	cin >> peso;
	cout << "Digite sua altura: "  << endl;
	cin >> altura;
	imc = (peso/(altura*altura));
	if (imc < 20)
	{
		cout << "Seu IMC é de: " <<imc << ", classificado como abaixo do normal";
	}
	else if (imc >= 20 & imc < 25)
	{
		cout << "Seu IMC é de: " <<imc << ", classificado como normal";
	}
	else if (imc >= 25 & imc < 30)
	{
		cout << "Seu IMC é de: " <<imc << ", classificado como sobrepeso";
	}
	else if (imc >= 30 & imc < 35)
	{
		cout << "Seu IMC é de: " <<imc << ", classificado como obesidade leve";
	}
	else if (imc >= 35 & imc < 40)
	{
		cout << "Seu IMC é de: " <<imc << ", classificado como obesidade moderada";
	}
	else if (imc >= 40)
	{
		cout << "Seu IMC é de: " <<imc << ", classificado como obesidade mórbida";
	}
}
