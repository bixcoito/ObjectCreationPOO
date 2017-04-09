#include <iostream>
#include <string>
using namespace std;

class Pessoa{
	public:
		Pessoa(string n, string e);
		string nome;
		string endereco;
		
		void mostrar();
};
