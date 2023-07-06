#include "ingrediente.h"
#include <iostream>

//*******************************************************
/* FUNCOES DE CONSTRUCAO DE CLASSE
 Ingrediente(): cria novo objeto da classe.	
 getNomeIngrediente(): retorna o valor desse atributo para o objeto da classe ingrediente.
 setNomeIngrediente(): seta o valor desse atributo para o objeto da classe ingrediente.
 getIdIngrediente(): retorna o valor desse atributo para o objeto da classe ingrediente.
 setIdIngrediente(): seta o valor desse atributo para o objeto da classe ingrediente.
 QuantidadeIngredientesReceita(): construtor da subclasse.
 getQuantidade: retorna o valor desse atributo para o objeto da classe ingrediente.
 setQuantidade: seta o valor desse atributo para o objeto da classe ingrediente.
-------------------------------------------------------*/

Ingrediente::Ingrediente()
{

}

Ingrediente::Ingrediente(string nomeIngrediente, int idIngrediente)
{
	this->nomeIngrediente = nomeIngrediente;
	this->idIngrediente = idIngrediente; 

}

string Ingrediente::getNomeIngrediente() 
{
	return nomeIngrediente;
}

void Ingrediente::setNomeIngrediente(string nomeIngrediente) 
{
	this->nomeIngrediente = nomeIngrediente;
}

int Ingrediente::getIdIngrediente()
{
	return idIngrediente;
}

void Ingrediente::setIdIngrediente(int idIngrediente)
{
	this->idIngrediente = idIngrediente;
}

// funcoes da subClasse

QuantidadeIngredientesReceita::QuantidadeIngredientesReceita (string nomeIngrediente, int idIngrediente, string quantidade): Ingrediente(nomeIngrediente, idIngrediente)
{
	this->quantidade = quantidade;
}

string QuantidadeIngredientesReceita::getQuantidade()
{
	return quantidade;
}

void QuantidadeIngredientesReceita::setQuantidade(string quantidade)
{
	this->quantidade = quantidade;
}