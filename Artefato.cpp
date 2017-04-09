#include "Artefato.h"

//Construindo o construtor
Artefato::Artefato(string n){
	nome = n;
	//A variável 'nivel_conserto sempre iniciará em 10
	nivel_conserto = 10;
}
//Essa função aumenta em 10 o valor de 'nivel_conserto'
void Artefato::restaurar(){
	//Se o valor da variável 'nivel_conserto' chegar a 100 ela deve continuar com esse valor
	if(nivel_conserto > 100){
		nivel_conserto = 100;
	}
	nivel_conserto = nivel_conserto + 10;
}
//Nessa função o valor de 'nivel_conserto' mudará de acordo com 'valor' digitado pelo usuario
void Artefato::restaurar(int valor){
	//Digitar o valor que o usuario deseja somar a 'nivel_conserto'
	cout << "Digite o Valor: " << endl;
	cin >> valor;
	nivel_conserto = nivel_conserto + valor;
	//Da mesma forma não passará de 100
	if(nivel_conserto > 100){
		nivel_conserto = 100;
	}
}
void Artefato::mostrar_situacao(){
	cout << "Artefato: " << nome << " " << "Reparos: " << nivel_conserto << endl;
}


