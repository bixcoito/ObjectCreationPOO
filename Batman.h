#include <iostream>
#include <string>
using namespace std;

class Batman{
	public:
		Batman();
		Batman(string n, int n_p);
		Batman(string n, string n_r, int n_p);
		
		string nome;
		string nome_real;
		int nivel_poder;
		
		void falar_frase();
		void falar_frase(string frase);
};
