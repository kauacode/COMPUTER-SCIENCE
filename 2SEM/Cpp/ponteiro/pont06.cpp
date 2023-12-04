#include <iostream>
using namespace std;

int main()
{
    int vet[5] = {10, 20, 30, 40, 50};
    int i;
    int *p;
    p = vet;
    for (i = 0; i < 5; i++)
    {
        cout << "vetor posição [" << i << "] = " << vet[i] << endl;
    }
    cout << "\n\n";

    for (i = 0; i < 5; i++)
    {
        cout << "vetor posição [" << i << "] = " << *(p + i) << endl;
    }
    cout << "\n\n";
    for (i = 0; i < 4; i++)
    {
        cout << "vetor posição [" << i << "] = " << *p << endl;
        p++;
    }
    cout << "vet[0] = " << vet[0] << endl;
    cout << "p[0]   = " << p[0] << endl;
    return 0;
}