#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <locale>

using namespace std;


struct registrogeral{

	int ra, idade;
	char nome[100];
	string cpf, rg, celular, email, rua, nrua, bairro, cidade, estado, cep;

};

void inicio(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "-----------------------------------------------------" << endl;
	cout << "|  Bem-vindo a area de cadastro do cliente          |" << endl;
	cout << "|  Aqui você deve informar todas suas informações   |" << endl;
	cout << "|  Deseja começar?                                  |" << endl;
	cout << "-----------------------------------------------------" << endl;
	
	system("pause & cls");
	
}

void imprimir(registrogeral x){
    
    cout 
    << "Seu nome é "                << x.nome
    << ", usuario do RA "           << x.ra
    << ", possui "                  << x.idade << " anos, "
    << "Numero de celular "         << x.celular
    << ", portador do CPF "         << x.cpf
    << " e rg "                     << x.rg << ". "
    << "Residente na "              << x.rua 
    << " n° "                       << x.nrua 
    << ", no bairro "               << x.bairro
    << ", cep "                     << x.cep
    << ", morador na cidade de "    << x.cidade
    << ", no estado de "            << x.estado << ".\n"<< endl;
    
    
    cout << "Nome: "        << x.nome    << endl;
    cout << "RA: "          << x.ra      << endl;
    cout << "Idade: "       << x.idade   << endl; 
    cout << "Celular: "     << x.celular << endl;
    cout << "CPF: "         << x.cpf     << endl;
    cout << "RG: "          << x.rg      << endl;
    cout << "Rua: "         << x.rua     << endl;
    cout << "N° da rua: "   << x.nrua    << endl;
    cout << "Bairro: "      << x.bairro  << endl;
    cout << "CEP: "         << x.cep     << endl;
    cout << "Cidade: "      << x.cidade  << endl;
    cout << "Estado: "      << x.estado  << endl;
    
    

}

int main (){
	registrogeral r;
    
	inicio();

    cout << "Digite seu nome completo: ";       cin.getline(r.nome,100);
    cout << "Digite seu RA: ";                  cin >> r.ra;
    cout << "Digite sua idade: ";               cin >> r.idade;
    cout << "Digite seu cpf: ";                 cin >> r.cpf;
    cout << "Digite seu rg: ";                  cin >> r.rg;
    cout << "Digite seu email: ";               cin >> r.email;
    cout << "Digite o numero do seu celular: "; cin >> r.celular;
    cout << "Digite o nome da sua rua: ";       cin >> r.rua;
    cout << "Digite o n° da rua: ";             cin >> r.nrua;
    cout << "Digite o nome do bairro: ";        cin >> r.bairro;
    cout << "Digite o cep: ";                   cin >> r.cep;
    cout << "Digite o nome da cidade: ";        cin >> r.cidade;
    cout << "Digite o nome do estado: ";        cin >> r.estado;
    cout << "\n \n \n ";
    
	system("cls");

    imprimir(r);

}
