#include <iostream>
using namespace std;


int main()
{
    int *p1 = (int *)0x5DC;
    float *p2 = (float *)0x5DC;
    double *p3 = (double *)0x5DC;

    cout << "Endereço de p1 (int)    = " << p1 << endl;
    cout << "Endereço de p2 (float)  = " << p2 << endl;
    cout << "Endereço de p3 (double) = " << p3 << endl;

    p1++;
    p2++;
    p3++;

    cout << "===========================================" << endl;
    cout << "Endereço de p1 (int)     = " << p1 << endl; // 0x5e0 = 1504
    cout << "Endereço de p2 (float)   = "<< p3 << endl;  // 0x5e0 = 1504
    cout << "Endereço de p3 (double)  = "<< p3 << endl; // 0x5e4 = 1508
    return 0;
}