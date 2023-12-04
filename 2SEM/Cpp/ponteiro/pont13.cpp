#include <iostream>
using namespace std;

void dmap(int x, int *d, int *m, int *a, int *p)
{
    *d = x * 2;
    *m = x / 2;
    *a = x - 1;
    *p = x + 1;
}

int main()
{
    int valor, dobro, metade, anterior, proximo;
    cout << "Digite um número inteiro ";
    cin >> valor;
    dmap(valor, &dobro, &metade, &anterior, &proximo);
    cout << "O valor digitado foi = " << valor << endl;
    cout << "O dobro = " << dobro << endl;
    cout << "A metade = " << metade << endl;
    cout << "Valor anterior = " << anterior << endl;
    cout << "O próximo valor = " << proximo << endl;
    return 0;
}