#include <iostream>
#include <string>
using namespace std;

class MulherMaravilha{
	public:
		MulherMaravilha();
		MulherMaravilha(string nome, string n_v, int po);
		MulherMaravilha(string n, string n_v, string p, int po);
		
		string nome;
		string nome_verdadeiro;
		string profissao;
		int poder;
				
		void incrivel();
};
