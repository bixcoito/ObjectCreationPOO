#include <iostream>
#include <string>

using namespace std;

class JogadorBasquete{
	private:
		string nome;
		string posicao;
		string esporte;
		int cestas;
	public:
		JogadorBasquete(string n, string p, int c);
		
		//Gets e Sets
		string getNome();
		void setNome(string nome);
		
		string getPosicao();
		void setPosicao(string posicao);
		
		int getCestas();
		void setCestas(int cestas);
				
		
		void jogar(int horario);
		void estatiticas();
		void imprimirEsporte();
};
