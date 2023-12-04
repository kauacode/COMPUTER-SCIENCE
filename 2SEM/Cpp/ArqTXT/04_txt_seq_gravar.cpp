#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream arq;
    arq.open("arqCPP02.txt", ios::out);
    arq << "C++ foi criado em 1979 por Bjarne Stroustrup enquanto trabalhava em sua tese de doutorado no Bell Labs." << endl
        << endl;
    arq << "Ele estava tentando adicionar programacao orientada a objetos a linguagem de programacao C." << endl;
    arq << "C++ foi lancado para uso comercial em 1985, mas somente em 1998 a ISO o padronizou." << endl;
    arq.close();
    return 0;
}
