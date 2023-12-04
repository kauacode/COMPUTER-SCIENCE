#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
#include "sqlite3.h"

using namespace std;

void inserir(sqlite3 *db) {
    char nome[100], rua[100], bairro[100], estado[100], cidade[100], celular[100];
    char cpf[100], rg[100], cep[100], email[100], ra[100], idade[100], nrua[100];
    char *erro;
    
    cout << endl << "Cadastro de contatos" << endl;
    cout << "Nome: ";
    cin.getline(nome, sizeof(nome));

    cout << "Celular: ";
    cin.getline(celular, sizeof(celular));

    cout << "Idade: ";
    cin.getline(idade, sizeof(idade));

    cout << "Rua: ";
    cin.getline(rua, sizeof(rua));

    cout << "Bairro: ";
    cin.getline(bairro, sizeof(bairro));

    cout << "Estado: ";
    cin.getline(estado, sizeof(estado));

    cout << "Cidade: ";
    cin.getline(cidade, sizeof(cidade));

    cout << "CPF: ";
    cin.getline(cpf, sizeof(cpf));

    cout << "RG: ";
    cin.getline(rg, sizeof(rg));

    cout << "CEP: ";
    cin.getline(cep, sizeof(cep));

    cout << "Email: ";
    cin.getline(email, sizeof(email));

    cout << "RA: ";
    cin.getline(ra, sizeof(ra));

    cout << "Nrua: ";
    cin.getline(nrua, sizeof(nrua));

    char sql_c[500];
    sprintf(sql_c, "INSERT INTO contatos (nome, cel, idade, rua, bairro, estado, cidade, cpf, rg, cep, email, ra, nrua) VALUES ('%s', '%s', %s, '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s');",
            nome, celular, idade, rua, bairro, estado, cidade, cpf, rg, cep, email, ra, nrua);

    int rc = sqlite3_exec(db, sql_c, NULL, NULL, &erro);
    if (rc != SQLITE_OK) {
        cerr << "Erro: " << sqlite3_errmsg(db) << endl;
        return;
    }
}

void matar(sqlite3 *db) {
    char *erro;
    string sql = "DROP TABLE IF EXISTS contatos;";
    int rc = sqlite3_exec(db, sql.c_str(), NULL, NULL, &erro);
    if (rc != SQLITE_OK) {
        cerr << "Erro: " << sqlite3_errmsg(db) << endl;
        return;
    }
    exit(-1);
}

void listar(sqlite3 *db) {
    sqlite3_stmt *stmt;
    char *erro;
    int id;
    const unsigned char *nome;
    const unsigned char *celular;
    const unsigned char *idade;
    const unsigned char *rua;
    const unsigned char *bairro;
    const unsigned char *estado;
    const unsigned char *cidade;
    const unsigned char *cpf;
    const unsigned char *rg;
    const unsigned char *cep;
    const unsigned char *email;
    const unsigned char *ra;
    const unsigned char *nrua;

    int rs = sqlite3_prepare_v2(db, "SELECT * FROM contatos;", -1, &stmt, 0);

    cout << endl << "Agenda" << endl;
    cout << "+-----+--------------------------------+------------------+-------+-----------------------------+----------------------------+-------+------------------+-------------+-------------+-------------+----------------------------+-------+-------+" << endl;
    cout << "| ID  | NOME                           | CELULAR          | IDADE | Rua                         | Bairro                     | Estado | Cidade           | CPF         | RG          | CEP         | EMAIL                      | RA    | NRUA  |" << endl;
    cout << "+-----+--------------------------------+------------------+-----------------------------+----------------------------+-------+------------------+-------------+-------------+-------------+----------------------------+-------+-------+" << endl;

    while (sqlite3_step(stmt) != SQLITE_DONE) {
        id = sqlite3_column_int(stmt, 0);
        nome = sqlite3_column_text(stmt, 1);
        celular = sqlite3_column_text(stmt, 2);
        idade = sqlite3_column_text(stmt, 3);
        rua = sqlite3_column_text(stmt, 4);
        bairro = sqlite3_column_text(stmt, 5);
        estado = sqlite3_column_text(stmt, 6);
        cidade = sqlite3_column_text(stmt, 7);
        cpf = sqlite3_column_text(stmt, 8);
        rg = sqlite3_column_text(stmt, 9);
        cep = sqlite3_column_text(stmt, 10);
        email = sqlite3_column_text(stmt, 11);
        ra = sqlite3_column_text(stmt, 12);
        nrua = sqlite3_column_text(stmt, 13);

        cout << "|" << setw(5) << right << id << " | "
             << setw(30) << left << nome << " | "
             << setw(16) << celular << " | "
             << setw(6) << idade << " | " << setw(28) << rua << " | " << setw(27) << bairro << " | " << setw(6) << estado << " | " << setw(18) << cidade << " | " << setw(13) << cpf << " | " << setw(12) << rg << " | " << setw(12) << cep << " | " << setw(27) << email << " | " << setw(6) << ra << " | " << setw(6) << nrua << " |" << endl;
    }
    cout << "+-----+--------------------------------+------------------+-----------------------------+----------------------------+-------+------------------+-------------+-------------+-------------+----------------------------+-------+-------+" << endl;
}

int consulta(sqlite3 *db, int id) {
    sqlite3_stmt *stmt;
    char *erro;
    const unsigned char *nome;
    const unsigned char *celular;
    const unsigned char *idade;
    const unsigned char *rua;
    const unsigned char *bairro;
    const unsigned char *estado;
    const unsigned char *cidade;
    const unsigned char *cpf;
    const unsigned char *rg;
    const unsigned char *cep;
    const unsigned char *email;
    const unsigned char *ra;
    const unsigned char *nrua;
    char sql[200];

    sprintf(sql, "SELECT * FROM contatos WHERE id = %d;", id);
    int rs = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    rs = sqlite3_step(stmt);
    if (rs == SQLITE_ROW) {
        id = sqlite3_column_int(stmt, 0);
        nome = sqlite3_column_text(stmt, 1);
        celular = sqlite3_column_text(stmt, 2);
        idade = sqlite3_column_text(stmt, 3);
        rua = sqlite3_column_text(stmt, 4);
        bairro = sqlite3_column_text(stmt, 5);
        estado = sqlite3_column_text(stmt, 6);
        cidade = sqlite3_column_text(stmt, 7);
        cpf = sqlite3_column_text(stmt, 8);
        rg = sqlite3_column_text(stmt, 9);
        cep = sqlite3_column_text(stmt, 10);
        email = sqlite3_column_text(stmt, 11);
        ra = sqlite3_column_text(stmt, 12);
        nrua = sqlite3_column_text(stmt, 13);

        cout << "+-----+--------------------------------+------------------+-----------------------------+----------------------------+-------+------------------+-------------+-------------+-------------+----------------------------+-------+-------+" << endl;
        cout << "| ID  | NOME                           | CELULAR          | IDADE | Rua                         | Bairro                     | Estado | Cidade           | CPF         | RG          | CEP         | EMAIL                      | RA    | NRUA  |" << endl;
        cout << "+-----+--------------------------------+------------------+-----------------------------+----------------------------+-------+------------------+-------------+-------------+-------------+----------------------------+-------+-------+" << endl;
        cout << "|" << setw(5) << right << id << " | "
             << setw(30) << left << nome << " | "
             << setw(16) << celular << " | "
             << setw(6) << idade << " | " << setw(28) << rua << " | " << setw(27) << bairro << " | " << setw(6) << estado << " | " << setw(18) << cidade << " | " << setw(13) << cpf << " | " << setw(12) << rg << " | " << setw(12) << cep << " | " << setw(27) << email << " | " << setw(6) << ra << " | " << setw(6) << nrua << " |" << endl;
        cout << "+-----+--------------------------------+------------------+-----------------------------+----------------------------+-------+------------------+-------------+-------------+-------------+----------------------------+-------+-------+" << endl;
    } else {
        cout << "ID não encontrado!" << endl;
        return 0;
    }
    return 1;
}

void alterar(sqlite3 *db) {
    char *erro;
    char nome[100], rua[100], bairro[100], estado[100], cidade[100], celular[100];
    char cpf[100], rg[100], cep[100], email[100], ra[100], idade[100], nrua[100];
    int id;
    char sql_c[500];
    cout << "Qual o código do registro a ser alterado: ";
    cin >> id;
    int ok = consulta(db, id);
    if (!ok) return;
    int op;
    cout << "Qual campo será alterado:\n1 - Nome\n2 - Celular\n3 - Idade\n0 - Cancelar\nEscolha: ";
    cin >> op;
    cin.ignore();  // Consume the newline character
    switch (op) {
        case 1:
            cout << "Nome: ";
            cin.getline(nome, sizeof(nome));
            sprintf(sql_c, "UPDATE contatos SET nome = '%s' WHERE id = %d;", nome, id);
            break;
        case 2:
            cout << "Celular: ";
            cin.getline(celular, sizeof(celular));
            sprintf(sql_c, "UPDATE contatos SET cel = '%s' WHERE id = %d;", celular, id);
            break;
        case 3:
            cout << "Idade: ";
            cin.getline(idade, sizeof(idade));
            sprintf(sql_c, "UPDATE contatos SET idade = '%s' WHERE id = %d;", idade, id);
            break;
        default:
            cout << "Alteração cancelada" << endl;
            return;
    }
    int rc = sqlite3_exec(db, sql_c, NULL, NULL, &erro);
    if (rc != SQLITE_OK) {
        cerr << "Erro: " << sqlite3_errmsg(db) << endl;
        return;
    }
    cout << "Dados alterados com sucesso. Pressione Enter para continuar.";
    cin.get();
}

void excluir(sqlite3 *db) {
    char *erro;
    int id;
    cout << "Código da exclusão: ";
    cin >> id;
    char sql_c[200];
    sprintf(sql_c, "DELETE FROM contatos WHERE id = %d;", id);
    int rc = sqlite3_exec(db, sql_c, NULL, NULL, &erro);
    if (rc != SQLITE_OK) {
        cerr << "Erro: " << sqlite3_errmsg(db) << endl;
        return;
    }
}

// Function to convert a string to binary
string stringParaBinario(const string& texto) {
    string binario;
    for (size_t i = 0; i < texto.length(); ++i) {
        char c = texto[i];
        for (int j = 7; j >= 0; --j) {
            binario.push_back(((c >> j) & 1) + '0');
        }
    }
    return binario;
}

void ArquivoBinario(ofstream& arquivo, const char* label, const char* valor) {
    string valorBinario = stringParaBinario(valor);
    arquivo << label << ": " << valorBinario << "\n";
}

int main(int argc, char const *argv[]) {
    char *erro;
    sqlite3 *db;
    sqlite3_open("agenda.db", &db);
    int rc = sqlite3_exec(db, "CREATE TABLE IF NOT EXISTS contatos (id INTEGER PRIMARY KEY AUTOINCREMENT, nome TEXT, cel TEXT, idade TEXT, rua TEXT, bairro TEXT, estado TEXT, cidade TEXT, cpf TEXT, rg TEXT, cep TEXT, email TEXT, ra TEXT, nrua TEXT);", NULL, NULL, &erro);
    if (rc != SQLITE_OK) {
        cerr << "Erro: " << sqlite3_errmsg(db) << endl;
        return -1;
    }

    int op = 1;
    while (op) {
        cout << endl << "Eu sou escrito em C++" << endl;
        cout << "1 - Cadastrar" << endl;
        cout << "2 - Listar" << endl;
        cout << "3 - Consultar" << endl;
        cout << "4 - Alterar" << endl;
        cout << "5 - Excluir" << endl;
        cout << "0 - Fim" << endl;
        cout << "Opção: ";
        cin >> op;
        cin.ignore();  // Consume the newline character
        char cont = 's';

        switch (op) {
            case 1:
                while (cont == 's') {
                    inserir(db);
                    cout << "Novo cadastro [s/n]: ";
                    cin >> cont;
                }
                break;
            case 2:
                listar(db);
                cout << "Pressione Enter para continuar...";
                cin.ignore();
                cin.get();
                break;
            case 3:
                int id;
                cout << "Qual o código: ";
                cin >> id;
                consulta(db, id);
                cout << "Pressione Enter para continuar...";
                cin.ignore();
                cin.get();
                break;
            case 4:
                alterar(db);
                break;
            case 5:
                excluir(db);
                break;
            case -1:
                matar(db);
                break;
            case 0:
                break;
            default:
                cout << "Opção inválida" << endl;
                break;
        }
    }

    sqlite3_close(db);
    return 0;
}



