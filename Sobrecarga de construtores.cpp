/*
	Sobrecarga de contrutores
*/
#include <iostream>

using namespace std;

class Carro
{
public:
	int ano;
	double preco;

	Carro()//Construtor vazio
	{
		ano = 0;
		preco = 0.0;
	}
	Carro(int ano)//Construtor com um parametro
	{
		this->ano = ano;
		this->preco = 0.0;
	}
	Carro(int ano, double preco) {//Construtor com 2 parametros
		this->ano = ano;
		this->preco = preco;
	}
};

int main(int argc, char *argv[])
{
	Carro carro;
	Carro carro2(2014);
	Carro carro3(2014, 200000);

	cout << "Preco do carro: " << carro.preco << endl;
	cout << "Preco do carro2: " << carro2.preco << endl;
	cout << "Preco do carro3: " << carro3.preco << endl;
	return 0;
}