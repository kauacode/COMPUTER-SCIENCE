#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
	int linha, coluna = 1;
	
	while (coluna <= 10){
		linha = 1;
		while(linha <=10){	
			cout << linha * coluna << setw(4);
			linha++;	
		}
		cout << "\n";
		coluna++;
	}
}

