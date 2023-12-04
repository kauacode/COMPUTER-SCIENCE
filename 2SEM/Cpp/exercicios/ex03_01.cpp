#include <iostream>
#define MAX 5
using namespace std;

int main() {
    int vetor[MAX];
    int i;
    // carga no vetor
    for (i = 0; i< MAX; i++){
        cout << "Elemento ["<<i<<"] ";
        cin >> vetor[i];
    }

    // somatoria
    int soma = 0;
    for (i = 0; i < MAX; i++) {
        soma += vetor[i]; // soma = soma + vetor[i];
    }
    cout << "Somatoria "<<soma<<endl;
    // media
    int media = soma / MAX;
    float mediaf = (float)soma / MAX;
    cout << "Media inteiro "<<media<<endl;
    cout <<"Media real "<<mediaf<<endl;
    // maior elemento da lista
    int maior = vetor[0];
    for (i=0; i < MAX; i++){
        if (vetor[i]>maior){
            maior = vetor[i];
        }
    }
    cout<<"Maior elemento "<<maior<<endl;
    // menor elemento da lista
    int menor = vetor[0];
    for (i=0; i < MAX; i++){
        if (vetor[i]<menor){
            menor = vetor[i];
        }
    }
    cout<<"Menor elemento "<<menor<<endl;

    return 0;
}