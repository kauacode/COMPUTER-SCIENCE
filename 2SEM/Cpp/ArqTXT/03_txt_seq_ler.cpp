#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream arq;
    string msg;
    arq.open("arqCPP01.txt", ios::in);
    while(arq >> msg)
        cout << msg<<" ";
    arq.close();
    return 0;
}