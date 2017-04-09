#include <iostream>
#include <string>
using namespace std;

class Aluno{
	public:
		Aluno();
		Aluno(string n, string m);
		Aluno(string n, string m, int p);
		
		string nome;
		string materia;
		int poder;
		
		void triste();
};
