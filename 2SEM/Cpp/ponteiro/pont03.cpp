#include <iostream>
using namespace std;

int main()
{
    int *p1, *p2, x = 10, y = 10;
    p1 = &x;
    p2 = &y;
    if (p1 == p2)
        cout << "Endercos iguais\n";
    else
        cout << "Endercos diferentes\n";
    if (p1 > p2)
        cout << "endereco de p1 eh maior do que p2\n";
    else
        cout << "endereco de p2 eh maior do que p1\n";
    return 0;
}