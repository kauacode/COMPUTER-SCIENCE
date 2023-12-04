#include <iostream>
#include <iomanip>
using namespace std;

#define LIN 2
#define COL 3

int main()
{
    int mat[LIN][COL];
    int i, j, valor = 10;

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            mat[i][j] = valor;
            valor++;
        }
    }
    int soma = 0;
    int menor = mat[0][0];
    int maior = mat[0][0];
    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            cout <<setw(4)<< mat[i][j];
            soma += mat[i][j];
            if (mat[i][j] < menor) {
                menor = mat[i][j];
            }
            if (mat[i][j] > maior) {
                maior = mat[i][j];
            }
        }
        cout<< endl;
    }
    cout << "Somatoria "<<soma<<endl;
    cout << "Media " << (float)soma / (LIN * COL)<<endl;
    cout << "Menor elemento "<<menor<<endl;
    cout << "Maior elemento "<<maior<<endl;
    return 0;
}