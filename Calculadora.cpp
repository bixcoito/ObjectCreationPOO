#include "Calculadora.h"

Calculadora::Calculadora(float r){
	resultado = r;
}


int Calculadora::somar(int valor1, int valor2){
	return resultado = valor1 + valor2;
}
float Calculadora::somar(float valor1, float valor2){
	return resultado = valor1 + valor2;
}
int Calculadora::subtrair(int valor1, int valor2){
	return resultado = valor1 - valor2;
}
float Calculadora::subtrair(float valor1, float valor2){
	return resultado = valor1 - valor2;
}/*
float Calculadora::multiplicar(float valor1, float valor2){
	return resultado = valor1 * valor2;
}
float Calculadora::dividir(float valor1, float valor2){
	return resultado = valor1 / valor2;
}*/


void imprimirUltimoValor(float resultado){
	cout << "A Ultima operacao calculad " << resultado << endl;
}
