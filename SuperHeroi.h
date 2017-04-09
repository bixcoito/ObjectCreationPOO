#include <iostream>
#include <string>
using namespace std;

class SuperHeroi{
	public:
		SuperHeroi();
		SuperHeroi(string n, string nr, int np);
		string nome;
		string nome_real;
		int nivel_poder;
		
		void falar_frase();
};
