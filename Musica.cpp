#include "Musica.h"
//O .cpp serve para adicionar-mos o código para o objeto, sendo, portanto, o <3 (coração) 

//Construindo o construtor
Musica::Musica(string ar, string al, int d){
	artista = ar;
	album = al;
	duracao = d;
}
//Escrevendo nas funções
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
