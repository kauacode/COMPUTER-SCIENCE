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

void leFicha(ficha *f, int max)
{
    int i;
    for (i = 0; i < max; i++)
    {
        cout<<"RA: ";
        cin >> f[i].ra;
        cout<<"Nome: ";
        f[i].nome = leStr();
        cout<<"Nota 1 ";
        cin >> f[i].n1;
        cout<<"Nota 2 ";
        cin >> f[i].n2;
    }
}

void impFicha(ficha *f, int max)
{
    int i;
    for (i = 0; i < max; i++)
    {
        cout<<"RA "<<f[i].ra<<" Nome "<<f[i].nome<<
        " Media = "<< ((f[i].n1 + f[i].n2) / 2.0)<<endl;
    }
}

void impFicha2(ficha *f, int max)
{
    int i;
    cout<<"+--------+--------------------------------+-------+\n";
    cout<<"|  RA    |             NOME               | Media |\n";
    cout<<"+--------+--------------------------------+-------+\n";

    for (i = 0; i < max; i++)
    {
        cout<<"| "<<setw(6)<<f[i].ra<<
              " | "<<setw(30)<<left<<f[i].nome<<
              " |  " <<right <<setw(4)<<fixed<<setprecision(1)<<
              ((f[i].n1 + f[i].n2) / 2.0)<<" |"<<endl;
    }
    cout<<"+--------+--------------------------------+-------+\n";
}

int main()
{
    int tam = 3;
    ficha f[tam];
    leFicha(f, tam);
    impFicha2(f, tam);
    return 0;
}