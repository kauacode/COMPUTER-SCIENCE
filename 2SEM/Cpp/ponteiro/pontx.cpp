#include <iostream>
using namespace std;

int main() {
    int *x;
    x = new int(3);
    x[0] = 1;
    x[1] = 2;
    x[2] = 3;
    int p;
    
    int i;
    for (i = 0; i < 3; i ++){
        cout << x[i] << endl;
    }
}