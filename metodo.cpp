#include "metodo.h"
#include <iostream>

//*******************************************************
/* FUNCOES DE CONSTRUCAO DE CLASSE
 Metodo(): Cria novo objeto da classe.
 getTexto(): Retorna o valor desse atributo para o objeto da classe Metodo.
 setTexto(): Seta o valor desse atributo para o objeto da classe Metodo.
 getIdMetodo(): Retorna o valor desse atributo para o objeto da classe Metodo.
 setIdMetodo(): Seta o valor desse atributo para o objeto da classe Metodo.
-------------------------------------------------------*/

Metodo::Metodo() {

}

Metodo::Metodo(string texto)
{
	this->texto = texto;
}

Metodo::Metodo(string texto, int contadorPasso, int idMetodo)
{
	this->texto = texto;
	this->contadorPasso = contadorPasso;
	this->idMetodo = idMetodo;
}

string Metodo::getTexto() {
	return texto;
}

void Metodo::setTexto(string texto) {
	this->texto = texto;
}

int Metodo::getIdMetodo()
{
	return idMetodo;
}

void Metodo::setIdMetodo(int idMetodo)
{
	this->idMetodo = idMetodo;
}

int Metodo::getContadorPasso()
{
	return contadorPasso;
}

void Metodo::setContadorPasso(int contadorPasso)
{
	this->contadorPasso = contadorPasso;
}