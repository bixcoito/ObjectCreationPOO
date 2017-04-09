#include "MulherMaravilha.h"

MulherMaravilha::MulherMaravilha(){
	nome = "Indigente";
	nome_verdadeiro = "O que ela quiser";
	profissao = "Assalariada";
	poder = 0;
}
MulherMaravilha::MulherMaravilha(string n, string n_v, int po){
	nome = n;
	nome_verdadeiro = n_v;
	profissao = "Assalariada";
	poder = po;
}
MulherMaravilha::MulherMaravilha(string n, string n_v, string p, int po){
	nome = n;
	nome_verdadeiro = n_v;
	profissao = p;
	poder = po;
}
void MulherMaravilha::incrivel(){
	cout << "Meu nome de Super Heroina e " << nome << endl;
	cout << "Mas meu verdadeiro nome e " << nome_verdadeiro << endl;
	cout << profissao << endl;
	cout << poder << endl;
}
