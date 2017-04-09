#include "Batman.h"

Batman::Batman(){
	nome = "Sem nome";
	nome_real = "Nao Identificado";
	nivel_poder = 0;
}
Batman::Batman(string n, int n_p){
	nome = n;
	nome_real = "Nao Identificado";
	nivel_poder = n_p;
}
Batman::Batman(string n, string n_r, int n_p){
	nome = n;
	nome_real = n_r;
	nivel_poder = n_p;
}
void Batman::falar_frase(){
	cout << "I'm Batman" << endl;
}
void Batman::falar_frase(string frase){
	
}
