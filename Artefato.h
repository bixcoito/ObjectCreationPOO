#include <iostream>
#include <string>
using namespace std;

//Criando a Classe Artefato
class Artefato{
	public:
		//Criando o construtor
		Artefato(string n);
		
		//Criando vari�veis p�blicas
		string nome;
		int nivel_conserto;
		
		//Criando as fun��es
		void restaurar();
		void restaurar(int valor);
		void mostrar_situacao();
};
