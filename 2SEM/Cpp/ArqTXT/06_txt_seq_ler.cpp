#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream arq;
    string msg;
    arq.open("arqCPP02.txt", ios::in);
    while(getline(arq, msg))
        cout << msg<< endl;
    arq.close();
    return 0;
}