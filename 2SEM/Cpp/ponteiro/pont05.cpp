#include <iostream>
using namespace std;


int main()
{
    int i, *pi;
    float f, *pf;
    char c, *pc;
    void *pv;
    cout << "Tamanho de i =  " << sizeof(i) << endl;
    cout << "Tamanho de f =  " << sizeof(f) << endl;
    cout << "Tamanho de c =  " << sizeof(c) << endl;
    cout << "Tamanho de pi = " << sizeof(pi) << endl;
    cout << "Tamanho de pf = " << sizeof(pf) << endl;
    cout << "Tamanho de pc = " << sizeof(pc) << endl;
    cout << "Tamanho de pv = " << sizeof(pv) << endl;
    return 0;
}