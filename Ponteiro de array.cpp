/*
	Ponteiro de array
	Limpa memoria alocada
*/
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int* parray = new int[10];

	cout << "Digite um numero: ";
	cin >> *(parray);
	cout << "Voce digitou: " << *(parray) << endl;
	
	delete[] parray;
	parray = NULL;
	return 0;
}
