#include <iostream>
using namespace std;

void mudaValor(int v1, int v2)
{
    v1 = v1 + 1;
    v2 = v2 - 1;
    cout << "valor x1 dentro da função " << v1 << endl;
    cout << "valor x2 dentro da função " << v2 << endl;
}

void mudaValorPonteiro(int *v1, int *v2)
{
    *v1 = *v1 + 1;
    *v2 = *v2 - 1;
    cout << "valor x1 dentro da função " << *v1 << endl;
    cout << "valor x2 dentro da função " << *v2 << endl;
}

int main()
{
    int x1 = 10, x2 = 20;
    cout << "Valor x1 antes da chamada da função " << x1 << endl;
    cout << "Valor x2 antes da chamada da função " << x2 << endl;
    mudaValor(x1, x2);
    cout << "Valor x1 antes da chamada da função " << x1 << endl;
    cout << "Valor x2 antes da chamada da função " << x2 << endl;

    cout << "====================================================================\n";

    cout << "Valor x1 antes da chamada da função " << x1 << endl;
    cout << "Valor x2 antes da chamada da função " << x2 << endl;
    mudaValorPonteiro(&x1, &x2);
    cout << "Valor x1 antes da chamada da função " << x1 << endl;
    cout << "Valor x2 antes da chamada da função " << x2 << endl;

    return 0;
}