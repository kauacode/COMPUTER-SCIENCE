#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    float retaA, retaB, retaC;

    cout << "Digite o comprimento do segmento de reta a: ";
    cin >> retaA;

    cout << "Digite o comprimento do segmento de reta b: ";
    cin >> retaB;

    cout << "Digite o comprimento do segmento de reta c: ";
    cin >> retaC;

    if (retaA + retaB > retaC && retaA + retaC > retaB && retaB + retaC > retaA)
    {
        cout << "Os segmentos de reta informados formam um triângulo." << endl;
    }
    else
    {
        cout << "Os segmentos de reta informados não formam um triângulo." << endl;
    }

    return 0;
}
