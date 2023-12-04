#include <iostream>
using namespace std;

int soma(int v1, int v2)
{
    return v1 + v2;
}

void soma2(int v1, int v2, int *res)
{
    *res = v1 + v2;
}

int main()
{
    int a, b, resultado;
    cout << "Digite o primeiro valor ";
    cin >> a;
    cout << "Digite o segundo valor ";
    cin >> b;
    resultado = soma(a, b);
    cout << a << " + " << b << " = " << resultado << endl;
    cout << "==================\n";
    soma2(a, b, &resultado);
    cout << a << " + " << b << " = " << resultado << endl;
    return 0;
}