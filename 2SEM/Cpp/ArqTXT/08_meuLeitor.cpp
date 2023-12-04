#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string texto;
    ifstream arqEntrada;

    arqEntrada.open("saida.txt", ios::in);
    if (!arqEntrada){
        cout << "Erro ao abrir arquivo" << endl;
        abort();
    }
    while (arqEntrada >> texto){
        cout << texto << endl;
    }
    arqEntrada.close();
    return 0;
}