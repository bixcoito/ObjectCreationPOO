#include "SuperHeroi.h"

SuperHeroi::SuperHeroi(){
	nome = "Sem Nome";
	nome_real = "Ninguem";
	nivel_poder = 0;
}
SuperHeroi::SuperHeroi(string n, string nr, int np){
	nome = n;
	nome_real = nr;
	nivel_poder = np;
}
void SuperHeroi::falar_frase(){
	cout << nome << endl;
	cout << nome_real << endl;
	cout << nivel_poder << endl;
}
