#include "usuario.h"
#include <string>

//*******************************************************
/* FUNCOES DE CONSTRUCAO DE CLASSE
 Usuario(): cria novo objeto da classe.
 getNomeCompleto(): retorna o valor desse atributo para o objeto da classe Usuario.
 setNomeCompleto(): seta o valor desse atributo para o objeto da classe Usuario.
 getDataNascimento(): retorna o valor desse atributo para o objeto da classe Usuario.
 setDataNascimento(): seta o valor desse atributo para o objeto da classe Usuario.
 getUsername(): retorna o valor desse atributo para o objeto da classe Usuario.
 setUsername(): seta o valor desse atributo para o objeto da classe Usuario.
 getSenha(): retorna o valor desse atributo para o objeto da classe Usuario.
 setSenha(): seta o valor desse atributo para o objeto da classe Usuario.
 getEmail(): retorna o valor desse atributo para o objeto da classe Usuario.
 setEmail(): seta o valor desse atributo para o objeto da classe Usuario.
 getAdmin(): retorna o valor desse atributo para o objeto da classe Usuario.
 setAdmin(): seta o valor desse atributo para o objeto da classe Usuario.
 getIdUsuario(): retorna o valor desse atributo para o objeto da classe Usuario.
 setIdUsuario(): seta o valor desse atributo para o objeto da classe Usuario..
 receitasFavoritas(): retorna o vetor de receitas favoritas deste usuario.
 favoritarReceita(): adiciona uma nova receita ao vetor de favoritos do usuario.
 removerFavorito(): remove uma receita do vetor de favoritos do usuario.
 dados(): imprimi os dados do usuario.
-------------------------------------------------------*/

Usuario::Usuario()
{

}

Usuario::Usuario(string nomeCompleto, string dataNascimento, string username, string senha, string email, bool admin, int idUsuario)
{
    this->nomeCompleto = nomeCompleto;
    this->dataNascimento = dataNascimento;
    this->username = username;
    this->senha = senha;
    this->email = email;
    this->admin = admin;
    this->idUsuario = idUsuario;
}

string Usuario::getNomeCompleto()
{
    return nomeCompleto;
}

void Usuario::setNomeCompleto(string nomeCompleto)
{
    this->nomeCompleto = nomeCompleto;
}

string Usuario::getDataNascimento()
{
    return dataNascimento;
}

void Usuario::setDataNascimento(string dataNascimento)
{
    this->dataNascimento = dataNascimento;
}

string Usuario::getUsername()
{
    return username;
}

void Usuario::setUsername(string username)
{
    this->username = username;
}

string Usuario::getSenha()
{
    return senha;
}

void Usuario::setSenha(string senha)
{
    this->senha = senha;
}

string Usuario::getEmail()
{
    return email;
}

void Usuario::setEmail(string email)
{
    this->email = email;
}

bool Usuario::getAdmin()
{
    return admin;
}

void Usuario::setAdmin(bool admin)
{
    this->admin = admin;
}

int Usuario::getIdUsuario()
{
    return idUsuario;
}

void Usuario::setIdUsuario(int idUsuario)
{
    this->idUsuario = idUsuario;
}

vector<Favorito> Usuario::receitasFavoritas() 
{
    return favoritos;
}

void Usuario::favoritarReceita(Favorito receita)
{
    favoritos.push_back(receita);
}

void Usuario::removerFavorito(int posicao)
{
    favoritos.erase(favoritos.begin() + posicao);
}

void Usuario::dados()
{
    cout << "Username: " << username << "\n";
    cout << "Senha: " << senha << "\n";
    cout << "Email: " << email << "\n";
    cout << "Nome completo: " << nomeCompleto << "\n";
    cout << "Data nascimento: " << dataNascimento << "\n";
}