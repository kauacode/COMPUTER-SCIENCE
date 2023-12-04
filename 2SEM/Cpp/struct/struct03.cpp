#include <iostream>
#include "/home/mig/cpp/myLib/myLib.cpp"
using namespace std;

typedef struct
{
    int ra;
    float n1, n2;
    string nome;
} ficha;

ficha f;
    
void cadastro() {
    cout<<"RA: ";
    cin >>f.ra;
    cout<<"Nome: ";
    f.nome = leStr();
    cout<<"Nota 1 ";
    cin >>f.n1;
    cout<<"Nota 2 ";
    cin >> f.n2;
}

void listagem(){
    cout<<"RA "<<f.ra<<" Nome "<<f.nome<<
    " Media = "<<((f.n1 + f.n2) / 2.0)<<endl;
}

int main()
{
    cadastro();
    listagem();
    return 0;
}