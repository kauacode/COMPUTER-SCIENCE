#include <iostream>
#include <locale>

using namespace std;

	float calcular_potencia(float x, int n) {
    float resultado = 1.0;

    for (int i = 1; i <= n; i++) {
        resultado *= x;
    }

    return resultado;
	}

int main() {
	setlocale(LC_ALL, "Portuguese");
    float x;
    int n;

    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de n: ";
    cin >> n;

    float resultado = calcular_potencia(x, n);

    cout << "O resultado de " << x << " elevado a " << n << " é " << resultado << endl;

    return 0;
}
