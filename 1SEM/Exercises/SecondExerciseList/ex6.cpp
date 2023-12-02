#include <iostream>
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int primeiro, segundo;

    cout << "Digite o primeiro valor: ";
    cin >> primeiro;

    cout << "Digite o segundo valor: ";
    cin >> segundo;

    if (primeiro < segundo) {
        for (int i = primeiro; i <= segundo; i++) {
            cout << i << " ";
        }
    } else if (primeiro > segundo) {
        for (int i = segundo; i <= primeiro; i++) {
            cout << primeiro - i + segundo << " ";
        }
      } else {
        cout << "Valores iguais";
    	}
    cout << endl;

    return 0;
}

