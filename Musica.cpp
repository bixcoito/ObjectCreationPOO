#include "Musica.h"
//O .cpp serve para adicionar-mos o c�digo para o objeto, sendo, portanto, o <3 (cora��o) 

//Construindo o construtor
Musica::Musica(string ar, string al, int d){
	artista = ar;
	album = al;
	duracao = d;
}
//Escrevendo nas fun��es
int Musica::pedir_duracao(){
	return duracao;
}
string Musica::pedir_artista(){
	return artista;
}
void Musica::mostrar_album(){
	cout << "Arista: " << artista << endl;
	cout << "Album: " << album << endl;
	cout << "Duracao: " << duracao << endl;
	}
