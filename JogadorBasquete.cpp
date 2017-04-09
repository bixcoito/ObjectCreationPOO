#include "JogadorBasquete.h"
#include "Jogador.h"

//Construtor
JogadorBasquete::JogadorBasquete(string n, string p, int c){
	nome =  n;
	posicao = p;
	esporte = "Basquete";
	cestas = c;
}

//Gets
string JogadorBasquete::getNome(){
	return nome;
}
string JogadorBasquete::getPosicao(){
	return posicao;
}
int JogadorBasquete::getCestas(){
	return cestas;
}

//Sets
void JogadorBasquete::setNome(string novoNome){
	nome = novoNome;
}
void JogadorBasquete::setPosicao(string novaPosicao){
	posicao = novaPosicao;
}
void JogadorBasquete::setCestas(int novoCestas){
	cestas = novoCestas;
}

//Função
void JogadorBasquete::jogar(int horario){
	cout << "Jogando desde " << horario << " horas" << endl;
}
void JogadorBasquete::estatiticas(){
	cout << "Jogador " << nome << " fez " << cestas << " pontos" << endl;
}
void JogadorBasquete::imprimirEsporte(){
	cout << "Jogador de " << esporte << endl;
}


//.h do Jogador

//Construtor
Jogador::Jogador(string n, string p, string e){
	nome = n;
	posicao = p;
	esporte = e;
}

//Gets
string Jogador::getNome(){
	return nome;
}
string Jogador::getPosicao(){
	return posicao;
}
string Jogador::getEsporte(){
	return esporte;
}

//Sets
void Jogador::setNome(string novoNome){
	nome = novoNome;
}
void Jogador::setPosicao(string novaPosicao){
	posicao = novaPosicao;
}
void Jogador::setEsporte(string novoEsporte){
	esporte = novoEsporte;
}

//Função
void Jogador::imprimirEsporte(){
	cout << "Jogador de " << esporte << endl;
}
