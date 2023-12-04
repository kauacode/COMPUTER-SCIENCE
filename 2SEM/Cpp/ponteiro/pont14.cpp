#include <iostream>
using namespace std;

void ordenaStr(string *n1, string *n2)
{
    int igual;
    igual = (*n1).compare(*n2);

    if (igual > 0)
    {
        string *temp = new string();
        *temp = *n1;
        *n1 = *n2;
        *n2 = *temp;
    }
}

int main()
{
    string nome1 = "zulmira";
    string nome2 = "alexandre";
    cout << nome1 << ", " << nome2 << endl;
    ordenaStr(&nome1, &nome2);
    cout << nome1 << ", " << nome2 << endl;
    return 0;
}