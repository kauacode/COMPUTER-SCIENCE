#include <iostream>
using namespace std;

int main()
{
    void *pgenerico;
    int x;
    char c = 'a';
    x = 10;
    pgenerico = &x;
    cout << "Valor de x = " << x << endl;
    cout << "valor de x via ponteiro = " << *(int *)pgenerico << endl;
    pgenerico = &c;
    cout << "valor de c via ponteiro = " << *(char *)pgenerico << endl;
    return 0;
}