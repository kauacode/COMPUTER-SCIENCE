#include <iostream>
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
        if (retaA == retaB && retaB == retaC)
        {
            cout << "Os segmentos de reta formam um tri�ngulo equil�tero." << endl;
        }
        else if (retaA == retaB || retaA == retaC || retaB == retaC)
        {
            cout << "Os segmentos de reta formam um tri�ngulo is�sceles." << endl;
        }
        else
        {
            cout << "Os segmentos de reta formam um tri�ngulo escaleno." << endl;
        }
    }
    else
    {
        cout << "Os segmentos de reta n�o formam um tri�ngulo." << endl;
    }

    return 0;
}
