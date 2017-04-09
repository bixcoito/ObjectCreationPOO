#include <iostream>
#include <string>
using namespace std;

//Criando a Classe Artefato
class Artefato{
	public:
		//Criando o construtor
		Artefato(string n);
		
		//Criando variáveis públicas
		string nome;
		int nivel_conserto;
		
		//Criando as funções
		void restaurar();
		void restaurar(int valor);
		void mostrar_situacao();
};
