#include <iostream>
using namespace std;




void cadastra(string *nome, float *nota1, float *nota2) {
    int i;
    for (i = 0; i < 3; i++)
    {
        cout << "Nome ";
        cin >> nome[i];
        cout << "Nota da P1 ";
        cin >> nota1[i];
        cout << "Nota da P2 ";
        cin >> nota2[i];
    }
}

void lista(string *n, float *n1, float *n2){
cout << endl
         << endl
         << "Listagem" << endl;
    int i;
    float m;
    for (i = 0; i < 3; i++)
    {
        m = (n1[i] + n2[i]) / 2;
        cout << "Nome " << n[i] << " P1 " << n1[i] << " P2 " << n2[i] << " media " << m << endl;
    }
}

int main() {

    string nome[3];
    float nota1[3], nota2[3];
    int op;
    do {
        cout << endl
             << endl;
        cout << "1 - cadastrar" << endl;
        cout << "2 - listar" << endl;
        cout << "0 - fim" << endl;
        cout << "Opcao ";
        cin >> op;
        switch (op){
            case 1:
                cadastra(nome, nota1, nota2);
                break;
            case 2:
                lista(nome, nota1, nota2);
                break;
            case 0:
                cout << "Hasta la vista, Baby";
                break;
            default:
                cout << "Opcao invalida" << endl;
            }
    } while (op !=0);
    return 0;
}