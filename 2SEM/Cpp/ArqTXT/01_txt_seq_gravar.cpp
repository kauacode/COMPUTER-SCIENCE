#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream arq;
    arq.open("arqCPP01.txt", ios::out);
    arq << "C++ foi criado em 1979 por Bjarne Stroustrup" << endl;
    arq.close();
    return 0;
}