#pragma once
#ifndef RECEITA_H
#define RECEITA_H
#include "ingrediente.h"
#include "metodo.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

/* CLASSE RECEITA
Cada receita cadastrado no sistema resulta em um objeto desta classe.
Atributos:
 - nomeReceita: nome da receita.
 - idReceita: id da receita no banco de dados.
 - idPais: id do pais associado a receita no banco de dados.
 - ingredientes: vetor de objetos da classe QuantidadeIngredientesReceita. Contem todos os ingredientes e quantidades utilizada na receita.
 - metodos: vetor de objetos da classe metodo. Contem todos os metodos de preparo da receita
 - comentarios: vetor de structs de comentario
 - restricoes: struct de restricoes da receita
*/

struct Comentario 
{
    string comentario;
    int estrelas;
    int idComentario;
    string username;
};

struct Restricoes
{
    string contemGluten;
    string contemLactose; 
    string vegano; 
    string comidaApimentada;
};

class Receita {
public:
    //funcoes de contrucao da classe e de atributos
    Receita();
    Receita(string nomeReceita);
    Receita(string nomeReceita, int idReceita, int idPais);
    string getNomeReceita();
    void setNomeReceita(string nomeReceita);
    int getIdReceita();
    void setIdReceita(int idReceita);
    int getIdPais();
    void setIdPais(int idPais);
    vector<QuantidadeIngredientesReceita> getIngredientes();
    void adicionarIngrediente(QuantidadeIngredientesReceita novoIngrediente);
    vector<Metodo> getMetodos();
    void adicionarMetodo(Metodo novoMetodo);
    vector<Comentario> getComentarios();
    void adicionarComentario(string texto, int estrelas, int idComentario, string username);
    void removerComentario(int indice);
    Restricoes getRestricoes();
    void setRestricoes(bool contemGluten, bool contemLactose, bool vegano, bool comidaApimentada);
private:
    string nomeReceita;
    int idReceita;
    int idPais;
    vector<QuantidadeIngredientesReceita> ingredientes;
    vector<Metodo> metodos; 
    vector<Comentario> comentarios;
    Restricoes restricoes;
};

#endif