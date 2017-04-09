#include <iostream>
#include <string>

using namespace std;

class Calculadora{
	private:
		float resultado;
	public:
		Calculadora(float r);
		int somar(int valor1, int valor2);
		float somar(float valor1, float valor2);
		int subtrair(int valor1, int valor2);
		float subtrair(float valor1, float valor2);
		float multiplicar(float valor1, float valor2);
		float dividir(float valor1, float valor2);
		
		void imprimirUltimoValor();
};
