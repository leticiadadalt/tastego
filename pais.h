#pragma once
#ifndef PAIS_H
#define PAIS_H
#include <iostream>
#include <string>
#include "receita.h"
#include <vector>

using namespace std;

/* CLASSE PAIS
Cada pais cadastrado no sistema resulta em um objeto desta classe.
Atributos:
 - nomePais: nome do pais.
 - resumo: resumo da cultura do pais.
 - idPais: id deste pais no banco de dados
 - receitas: vetor de objetos da classe Receita. Contem todas as receitas cadastradas no sistema deste pais.
*/

class Pais {
public:
    //funcoes de contrucao da classe e de atributos
    Pais();
    Pais(string nomePais, string resumo, int idBanco);
    string getNomePais();
    void setNomePais(string nomePais);
    string getResumo();
    void setResumo(string resumo);
    int getIdPais();
    void setIdPais(int idBanco);
    vector<Receita>getReceitas();
    void adicionarReceita(Receita novaReceita);
private:
    string nomePais;
    string resumo;
    int idPais;
    vector<Receita>receitasDoPais;
};

#endif
