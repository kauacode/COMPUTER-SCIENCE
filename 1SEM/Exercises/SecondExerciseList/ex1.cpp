#include <iostream>
using namespace std;

int main() {
	
    setlocale(LC_ALL, "Portuguese");
    int num_max;
    cout << "Digite um n�mero �mpar m�ximo: ";
    cin >> num_max;

    if (num_max % 2 == 0) {
        cout << "O n�mero m�ximo digitado n�o � �mpar." << endl;
    }
    else {
        int espacos = 0;

        for (int i = num_max; i >= 1; i -= 2) {
            for (int j = 1; j < (num_max - i + 1) / 2; j++) {
                cout << " ";
            }
            for (int j = (num_max - i + 1) / 2; j < (num_max + i - 1) / 2; j++) {
                cout << j + 1 << " ";
            }
            cout << endl;
            espacos += 2;
            for (int j = 1; j <= espacos; j++) {
                cout << " ";
            }
        }
    }

    return 0;
}

