#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    string texto;
    ofstream arqSaida;
    arqSaida.open("saida.txt", ios::out);
    if (!arqSaida){
        cout << "Erro ao abrir arquivo" << endl;
        abort();
    }
    cout << "Crtl-Z para finalizar" << endl;
    while (cin >> texto){
        arqSaida << texto << endl;
    }
    arqSaida.close();
    return 0;
}