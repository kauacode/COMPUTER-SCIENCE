#include <iostream>
using namespace std;

void ordena(int *x1, int *x2)
{
    if (*x1 > *x2)
    {
        int temp;
        temp = *x1;
        *x1 = *x2;
        *x2 = temp;
    }
}

int main()
{
    int a = 19, b = 10;
    cout << "Ordenando\n";
    cout << "antes a = " << a << endl;
    cout << "antes b = " << b << endl;
    ordena(&a, &b);
    cout << "depois a = " << a << endl;
    cout << "depois b = " << b << endl;
    printf("=========================\n");
    a = 9;
    b = 10;
    cout << "Ordenando\n";
    cout << "antes a = " << a << endl;
    cout << "antes b = " << b << endl;
    ordena(&a, &b);
    cout << "depois a = " << a << endl;
    cout << "depois b = " << b << endl;
    return 0;
}