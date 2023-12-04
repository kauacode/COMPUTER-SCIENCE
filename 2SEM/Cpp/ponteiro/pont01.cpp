#include <iostream>
using namespace std;

int main()
{
    int x, *p;
    x = 10;
    p = &x;
    cout << "Este é o valor da variável x = "
         << x << endl;
    cout << "Este é o endereço da variável x (&x) = "
         << &x << endl;                                                 // endereço de x
    cout << "Este é o valor do ponteiro p = "
         << p << endl;                                                 // valor de p == endereço de x
    cout << "Este é o valor de onde o ponteriro aponta *p = "
         << *p << endl;                                                  // conteudo do endereço onde p aponta
    return 0;
}