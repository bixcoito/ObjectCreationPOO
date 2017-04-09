#include "Pessoa.h"

Pessoa::Pessoa(string n, string e){
	nome = n;
	endereco = e;
}
void Pessoa::mostrar(){
	cout << "Oi, me chamo " << nome << " e moro em " << endereco << endl;
}
