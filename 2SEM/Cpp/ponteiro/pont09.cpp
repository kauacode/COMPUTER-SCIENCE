#include <iostream>
using namespace std;


void swap(int *x1, int *x2)
{
    int temp;
    temp = *x1;
    *x1 = *x2;
    *x2 = temp;
}

void swap2(int *x1, int *x2)
{
    int *temp;
    temp = x1;
    x1 = x2;
    x2 = temp;
}

int main()
{
    int a = 9, b = 10;
    cout << "Mudando o valor\n";
    cout << "antes a = " << a << endl;
    cout << "antes b = " << b << endl;
    swap(&a, &b);
    cout << "depois a = " << a << endl;
    cout << "depois b = " << b << endl;
    cout << "===========================\n";
    cout << "Mudando o endereço\n";
    cout << "antes a = " << a << endl;
    cout << "antes b = " << b << endl;
    swap2(&a, &b);
    cout << "depois a = " << a << endl;
    cout << "depois b = " << b << endl;
    return 0;
}