#pragma once
#ifndef METODO_H
#define METODO_H
#include <iostream>
#include <string>

using namespace std;

/* CLASSE METODO
Cada receita contem um vetor de metodos, ou seja, de objetos desta classe. 
Atributos:
 - texto: explicacao de um passo de preparo de uma receita.
 - idMetodo: id do metodo no banco de dados.
 - idReceita: id da receita no banco de dados.
*/

class Metodo {
public:
    //funcoes de contrucao da classe e de atributos
    Metodo();
    Metodo(string texto);
    Metodo(string texto, int contadorPasso, int idMetodo);
    string getTexto();
    void setTexto(string texto);
    int getIdMetodo();
    void setIdMetodo(int idMetodo);
    int getContadorPasso();
    void setContadorPasso(int ContadorPasso);
private:
    string texto;
    int contadorPasso;
    int idMetodo;
};

#endif