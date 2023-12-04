#include <iostream>
#include <fstream>

using namespace std;

struct registrogeral {
    char nome[100], rua[100], bairro[100], estado[100], cidade[100], celular[100], cpf[100], rg[100], cep[100], email[100], ra[100], idade[100], nrua[100];
};

void inicio() {
    setlocale(LC_ALL, "Portuguese");
    cout << "-----------------------------------------------------" << endl;
    cout << "|  Bem-vindo ao Registro Geral Online               |" << endl;
    cout << "|  Aqui você pode passar todas suas informações     |" << endl;
    cout << "|  Gostaria de começar?                             |" << endl;
    cout << "-----------------------------------------------------" << endl;
    system("pause & cls");
}

int main() {
    registrogeral r;
    inicio();

    cout << "Digite seu nome completo: ";
    cin.getline(r.nome, 100);
    cout << "Digite seu RA: ";
    cin.getline(r.ra, 100);
    cout << "Digite sua idade: ";
    cin.getline(r.idade, 100);
    cout << "Digite seu cpf: ";
    cin.getline(r.cpf, 100);
    cout << "Digite seu rg: ";
    cin.getline(r.rg, 100);
    cout << "Digite seu email: ";
    cin.getline(r.email, 100);
    cout << "Digite o numero do seu celular: ";
    cin.getline(r.celular, 100);
    cout << "Digite o nome da sua rua: ";
    cin.getline(r.rua, 100);
    cout << "Digite o número da rua: ";
    cin.getline(r.nrua, 100);
    cout << "Digite o nome do bairro: ";
    cin.getline(r.bairro, 100);
    cout << "Digite o cep: ";
    cin.getline(r.cep, 100);
    cout << "Digite o nome da cidade: ";
    cin.getline(r.cidade, 100);
    cout << "Digite o nome do estado: ";
    cin.getline(r.estado, 100);
    cout << "\n \n \n";

    system("cls");

    ofstream arquivo("Cadastro.bin", ios::binary);

    if (arquivo.is_open()) {
        arquivo.write(reinterpret_cast<char*>(&r), sizeof(registrogeral));
        cout << "Respostas salvas no arquivo 'Cadastro.bin'." << endl;
        arquivo.close();
    } else {
        cerr << "Erro ao criar o arquivo de saída." << endl;
    }

    return 0;
}
