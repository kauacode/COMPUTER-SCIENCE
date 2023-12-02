#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
    int numeros[5];

    cout << "Digite 5 numeros inteiros:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    char escolha;
    cout << "Deseja mostrá-los em ordem crescente (c) ou decrescente (d)?" << endl;
    cin >> escolha;

    if (escolha == 'c') 
	{
        sort(numeros, numeros + 5);
    } else if (escolha == 'd') {
        sort(numeros, numeros + 5, greater<int>());
    } else {
        cout << "Escolha inválida." << endl;
        return 0;
    }

    cout << "Numeros em ordem " << (escolha == 'c' ? "crescente" : "decrescente") << ":" << endl;
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
