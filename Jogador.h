#include <iostream>
#include <string>

using namespace std;

class Jogador{
	private:
		string nome;
		string posicao;
		string esporte;
	public:
		Jogador(string n, string p, string e);
		
		//Gets e Sets
		string getNome();
		void setNome(string nome);
		
		string getPosicao();
		void setPosicao(string posicao);
		
		string getEsporte();
		void setEsporte(string esporte);
		
		void imprimirEsporte();
};
