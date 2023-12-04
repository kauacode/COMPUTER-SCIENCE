#include <iostream>
#include <iomanip>
#include "/home/mig/cpp/myLib/myLib.cpp"
using namespace std;

typedef struct
{
    int ra;
    float n1, n2;
    string nome;
} ficha;

int main()
{
    ficha f[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        cout<<"RA: ";
        cin >>f[i].ra;
        cout<<"Nome: ";
        f[i].nome = leStr();
        cout<<"Nota 1 ";
        cin >> f[i].n1;
        cout<<"Nota 2 ";
        cin >> f[i].n2;
    }
    
    for (i = 0; i < 3; i++)
    
        cout<<"RA "<<setw(6)<<f[i].ra<<" Nome "<<setw(30)<<left<<f[i].nome<<
        " Media = "<< right <<setw(6)<<fixed<<setprecision(2)<<((f[i].n1 + f[i].n2) / 2.0)<<endl;
    return 0;
}