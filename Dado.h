#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Dado{
	private:
		int num_faces;
	public:
		int rolar(int faces);
		void rolar(int faces, int vezes);
		void imprimirUltimoDado();
}
