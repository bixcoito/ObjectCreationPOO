#include "Aluno.h"

Aluno::Aluno(){
	nome = "Nao Indentificado";
	materia = "Todas";
	poder = 0;
}
Aluno::Aluno(string n, string m){
	nome = n;
	materia = m;
	poder = 0;
}
Aluno::Aluno(string n, string m, int p){
	nome = n;
	materia = m;
	poder = p;
}
void Aluno::triste(){
	cout << "Nome: " << nome << endl;
	cout << "Materia Preferida: " << materia << endl;
	cout << "Poder: " << poder << endl;
}
