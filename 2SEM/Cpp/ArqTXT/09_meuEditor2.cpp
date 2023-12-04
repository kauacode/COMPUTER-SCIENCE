// caso apresente erro em ios::out
// no menu escolha tools -> compileGEnerations -> Language standard (-std) -> ISO C++11
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "C:/Users/mig/OneDrive/Documentos/cpp/myLib/myLib.cpp"
using namespace std;

int main(int argc, char *argv [ ]) {
    //cout << "Argumentos passados" << argc << endl;
    string texto, arqNome;
    if (argc > 1)
        arqNome = argv[1];
    else
        arqNome = "saida.txt";
    ofstream arqSaida;
    arqSaida.open(arqNome, ios::out);
    if (!arqSaida){
        cout << "Erro ao abrir arquivo" << endl;
        abort();
    }
    cout << "Crtl-Z para finalizar" << endl;
    while (1){
        texto = leStr();
        arqSaida << texto << endl;
    }
    arqSaida.close();
    return 0;
}
