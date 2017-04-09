#include "Jogador.h"

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

//Funcao Bola
void Jogador::arremessar(Bola b){
	cout << "Arremessando bola com " << endl;
	cout << "Peso: " << b.getPeso() << endl;
	cout << "Tipo: " << b.getTipo() << endl;
}
