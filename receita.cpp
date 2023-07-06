#include "receita.h"
#include <iostream>

//*******************************************************
/* FUNCOES DE CONSTRUCAO DE CLASSE
 Receita(): cria novo objeto da classe.
 getNomeReceita(): retorna o valor desse atributo para o objeto da classe Receita.
 setNomeReceita(): seta o valor desse atributo para o objeto da classe Receita.
 getIdReceita(): retorna o valor desse atributo para o objeto da classe Receita.
 setIdReceita(): seta o valor desse atributo para o objeto da classe Receita.
 getIdPais(): retorna o valor desse atributo para o objeto da classe Receita.
 setIdPais(): seta o valor desse atributo para o objeto da classe Receita.
 getIngredientes(): retorna o vetor de ingredientes desta Receita.
 adicionarIngrediente(): adiciona uma nova receita ao vetor de receitas deste Receita.
 getIngredientes(): retorna o vetor de ingredientes deste receita.
 getMetodos(): retorna o vetor de metodos desta receita.
 adicionarMetodo(): adicionar novo metodo ao vetor de metodos desta receita.
 getComentarios(): retorna o vetor de comantarios desta receita.
 adicionarComentario(): adiciona um novo comentario nesta receita.
 removerComentario(): remove um comentario existente desta receita.
 getRestricoes(): retorna informacoes de restricoes alimentares da receita
 setRestricoes(): seta as restricoes alimentares da receita
-------------------------------------------------------*/

Receita::Receita() {

}

Receita::Receita(string nomeReceita)
{
	this->nomeReceita = nomeReceita;
}

Receita::Receita(string nomeReceita, int idReceita, int idPais)
{
	this->nomeReceita = nomeReceita;
	this->idReceita = idReceita;
	this->idPais = idPais;
}

string Receita::getNomeReceita() {
	return nomeReceita;
}

void Receita::setNomeReceita(string nomeReceita) {
	this->nomeReceita = nomeReceita;
}

int Receita::getIdReceita()
{
	return idReceita;
}

void Receita::setIdReceita(int idREceita)
{
	this->idReceita = idREceita;
}

int Receita::getIdPais()
{
	return idPais;
}

void Receita::setIdPais(int idPais)
{
	this->idPais = idPais;
}

vector<QuantidadeIngredientesReceita> Receita::getIngredientes() //vetor de receitas que vao ficar salvas no pais onde elas for cadastradas
{
	return ingredientes;
}

void Receita::adicionarIngrediente(QuantidadeIngredientesReceita novoIngrediente) // aqui sempre que uma nova receita for cadastrada ela vai ser inserida no vetor de receitas que ta na classe pais
{
	ingredientes.push_back(novoIngrediente);
}

vector<Metodo> Receita::getMetodos() //vetor de receitas que vao ficar salvas no pais onde elas for cadastradas
{
	return metodos;
}

void Receita::adicionarMetodo(Metodo novoMetodo) // aqui sempre que uma nova receita for cadastrada ela vai ser inserida no vetor de receitas que ta na classe pais
{
	metodos.push_back(novoMetodo);
}

vector<Comentario> Receita::getComentarios() 
{
	return comentarios; 
}
 
void Receita::adicionarComentario(string comentario, int estrelas, int idComentario, string username)
{
	Comentario comentario1;
	comentario1.comentario = comentario;
	comentario1.estrelas = estrelas;
	comentario1.idComentario = idComentario;
	comentario1.username = username;

	comentarios.push_back(comentario1);
}

void Receita::removerComentario(int indice)
{
	comentarios.erase(comentarios.begin() + indice);
}

Restricoes Receita::getRestricoes()
{
	return restricoes;
}

void Receita::setRestricoes(bool contemGluten, bool contemLactose, bool vegano, bool comidaApimentada)
{
	if (contemGluten) 
	{
		this->restricoes.contemGluten = "Sim";  
	}
	else
	{
		this->restricoes.contemGluten = "Nao"; 
	}
	if (contemLactose)
	{
		this->restricoes.contemLactose = "Sim";
	}
	else
	{
		this->restricoes.contemLactose = "Nao";
	}
	if (vegano)
	{
		this->restricoes.vegano = "Sim";
	}
	else
	{
		this->restricoes.vegano = "Nao";
	}
	if (comidaApimentada)
	{
		this->restricoes.comidaApimentada = "Sim";
	}
	else
	{
		this->restricoes.comidaApimentada = "Nao";
	}
}