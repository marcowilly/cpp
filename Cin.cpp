/*
	Calcula idade do usuario
*/
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int ano, idade;
	
	cout << "Digite o ano de nascimento: ";
	cin >> ano;
	
	idade = 2020 - ano;
	cout << "Idade: " << idade << endl;
	ano++;
	return 0;
}
