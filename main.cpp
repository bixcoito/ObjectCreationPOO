#include <iostream>
//#include "Gato.h"
//#include "Pessoa.h"
//#include "Cachorro.h"
//#include "Vaca.h"
//#include "SuperHeroi.h";
//#include "Batman.h"
//#include "MulherMaravilha.h"
//#include "Aluno.h"
#include "Musica.h"
#include "Artefato.h"
using namespace std;

int main(){
	//Cachorro novo;
	//novo.falar();
	
	
	//Gato mona;
	//mona.falar();
	
	
	//Pessoa exotica("Mercedes Diva Jones", "Jacanam");
	//exotica.mostrar();
	
	
	//Vaca loca("Puta", 4, 999.999, "da porra toda");
	//loca.falar();
	
	
	//SuperHeroi anti;
	//anti.falar_frase();
	
	
	//Batman capa_preta;
	//capa_preta.falar_frase("Nada");
	
	/*MulherMaravilha poderosa;
	poderosa.incrivel();
	MulherMaravilha destruidora("Mulher Maravilha", "Dianna", 0);
	destruidora.incrivel();
	MulherMaravilha lacradora("Mulher Maravilha", "Dianna", "Salvadora", 10000);
	lacradora.incrivel();
	
	
	Aluno recebe;
	recebe.triste();
	Aluno morbido("Bere", "Ingles");
	morbido.triste();
	Aluno semnocao("Jessica", "POO", 1000);
	semnocao.triste();
	*/
	
	
	//Criando um objeto chamdo 'nova' na classe Musica
	Musica nova("Jennifer Hudson", "2010", 10);
	//Usando a função 'mostrar_album' do objeto 'nova'
	nova.mostrar_album();
	
	
	Artefato estranho("Quero Morrer");
	estranho.mostrar_situacao();
	estranho.restaurar();
	estranho.restaurar(0);
	
	return 0;
}
