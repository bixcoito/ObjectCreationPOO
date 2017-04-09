#include <iostream>
#include <string>
using namespace std;

class Musica{
	//'Privado' são as informações que só podem ser vistas pelo próprio objeto
	private: //(Encpsulamento)
		//Criando as variáveis privadas (sendo enxergadas apenas dentro do objeto)
		string artista;
		string album;
		int duracao;
	//'Público' são as nformções que podem ser vistas por qualquer um que interagir com o objeto
	public:
		//Criando o construtor 'Musica'
		Musica(string ar, string al, int d);
		//Declarando 3 funções, respectivo as variáveis
		int pedir_duracao();
		string pedir_artista();
		void mostrar_album();
};
