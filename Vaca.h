#include <iostream>
#include <string>
using namespace std;

class Vaca{
	public:
		Vaca(string n, int i, float p, string d);
		string nome;
		int idade;
		float peso;
		string dono;
		
		void falar();
};
