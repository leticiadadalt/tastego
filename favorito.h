#pragma once
#ifndef FAVORITO_H
#define FAVORITO_H
#include <iostream>
#include <string>

using namespace std;

/* CLASSE FAVORITO
Cada usuario contem um vetor de receitas favoritas, ou seja, de objetos desta classe.
Atributos:
 - idReceita: id da receita no banco de dados
 - nomeReceita: nome da receita
 - idFavorito: id deste favorito no banco de dados
 - nomePais: nome do pais associado a receita
*/

class Favorito {
public:
    //funcoes de contrucao da classe e de atributos
    Favorito();
    Favorito(int idReceita, string nomeReceita, int idFavorito, string nomePais);
    int getIdReceita();
    void setIdReceita(int idReceita);
    string getNomeReceita();
    void setNomeReceita(string nomeReceita);
    int getIdFavorito();
    void setIdFavorito(int idFavorito);
    string getNomePais();
    void setNomePais(string nomePais);
private:
    int idReceita;
    string nomeReceita;
    int idFavorito;
    string nomePais;
};

#endif
