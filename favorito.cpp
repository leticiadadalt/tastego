#include "favorito.h"

//*******************************************************
/* FUNCOES DE CONSTRUCAO DE CLASSE
 - Favorito(): cria novo objeto da classe Favorito
 - getIdReceita(): retorna o valor desse atributo para o objeto da classe Favorito.
 - setIdReceita(): seta o valor desse atributo para o objeto da classe Favorito.
 - getNomeReceita(): retorna o valor desse atributo para o objeto da classe Favorito.
 - setNomeReceita(): seta o valor desse atributo para o objeto da classe Favorito.
 - getIdFavorito(): retorna o valor desse atributo para o objeto da classe Favorito.
 - setIdFavorito(): seta o valor desse atributo para o objeto da classe Favorito.
 - getNomePais(): retorna o valor desse atributo para o objeto da classe Favorito.
 - setNomePais(): seta o valor desse atributo para o objeto da classe Favorito.
-------------------------------------------------------*/

Favorito::Favorito() {

}

Favorito::Favorito(int idReceita, string nomeReceita, int idFavorito, string nomePais)
{
	this->idReceita = idReceita;
	this->nomeReceita = nomeReceita;
	this->idFavorito = idFavorito;
	this->nomePais = nomePais;
}

int Favorito::getIdReceita()
{
	return idReceita;
}

void Favorito::setIdReceita(int idReceita)
{
	this->idReceita = idReceita;
}

string Favorito::getNomeReceita()
{
	return nomeReceita;
}

void Favorito::setNomeReceita(string nomeReceita) 
{
	this->nomeReceita = nomeReceita;
}

int Favorito::getIdFavorito()
{
	return idFavorito;
}

void Favorito::setIdFavorito(int idFavorito)
{
	this->idFavorito = idFavorito;
}

string Favorito::getNomePais()
{
	return nomePais;
}

void Favorito::setNomePais(string nomePais)
{
	this->nomePais = nomePais;
}