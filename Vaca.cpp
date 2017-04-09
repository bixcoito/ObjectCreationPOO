#include "Vaca.h"

Vaca::Vaca(string n, int i, float p, string d){
	nome = n;
	idade = i;
	peso = p;
	dono = d;
}
void Vaca::falar(){
	cout << "Muuuuu" << endl;
	cout << "Nome: " << nome << endl;
	cout << "Idade: " << idade << endl;
	cout << "Peso: " << peso << endl;
	cout << "Dono: " << dono << endl;
	
}
