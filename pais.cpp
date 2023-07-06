#include "pais.h"
#include <iostream>

//*******************************************************
/* FUNCOES DE CONSTRUCAO DE CLASSE
 Pais(): cria novo objeto da classe.
 getNomePais(): retorna o valor desse atributo para o objeto da classe Pais.
 setNomePais(): seta o valor desse atributo para o objeto da classe Pais.
 getResumo(): retorna o valor desse atributo para o objeto da classe Pais.
 setResumo(): seta o valor desse atributo para o objeto da classe Pais.
 getIdPais(): retorna o valor desse atributo para o objeto da classe Pais.
 setIdPais(): seta o valor desse atributo para o objeto da classe Pais.
 getReceitas(): retorna o vetor de receitas deste pais.
 adicionarReceita(): adiciona uma nova receita ao vetor de receitas deste pais.
-------------------------------------------------------*/

Pais::Pais(){

}

Pais::Pais(string nomePais, string resumo, int idPais) 
{
	this->nomePais = nomePais;
	this->resumo = resumo;
	this->idPais = idPais;
}

string Pais::getNomePais() {
	return nomePais;
}

void Pais::setNomePais(string nomePais) 
{
	this->nomePais = nomePais;
}

string Pais::getResumo() 
{
	return resumo;
}

void Pais::setResumo(string resumo) 
{
	this->resumo = resumo;
}

int Pais::getIdPais() 
{
	return idPais;  
}

void Pais::setIdPais(int idPais)
{
	this->idPais = idPais; 
}

vector<Receita> Pais::getReceitas() //vetor de receitas que vao ficar salvas no pais onde elas for cadastradas
{
	return receitasDoPais;
}

void Pais::adicionarReceita(Receita novaReceita) // aqui sempre que uma nova receita for cadastrada ela vai ser inserida no vetor de receitas que ta na classe pais
{
	receitasDoPais.push_back(novaReceita);
}