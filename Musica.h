#include <iostream>
#include <string>
using namespace std;

class Musica{
	//'Privado' s�o as informa��es que s� podem ser vistas pelo pr�prio objeto
	private: //(Encpsulamento)
		//Criando as vari�veis privadas (sendo enxergadas apenas dentro do objeto)
		string artista;
		string album;
		int duracao;
	//'P�blico' s�o as nform��es que podem ser vistas por qualquer um que interagir com o objeto
	public:
		//Criando o construtor 'Musica'
		Musica(string ar, string al, int d);
		//Declarando 3 fun��es, respectivo as vari�veis
		int pedir_duracao();
		string pedir_artista();
		void mostrar_album();
};
