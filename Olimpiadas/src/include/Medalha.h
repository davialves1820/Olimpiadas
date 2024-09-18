/*1. Crie uma classe Medalha com os seguintes atributos:
Tipo de medalha (ouro, prata ou bronze)
Ano da conquista
Atleta (um objeto da classe Atleta)
Modalidade (um objeto da classe Modalidade)
2. Implemente métodos para obter e definir os atributos.
3. Implemente um método para exibir as informações da medalha.
*/

#ifndef MEDALHA_H
#define MEDALHA_H
#include <string>
#include "Pais.h"
#include "Modalidade.h"
#include "Atleta.h"
#include <memory>

class Medalha {
private:
    int tipo; //1 = ouro, 2 = prata, 3 = bronze
    std::string ano;
    Atleta atleta;
    Modalidade modalidade;
public:
    Medalha();//construtor sem parametros de medalha
    Medalha(int tipo , const std::string& ano , Atleta atleta, const Modalidade& modalidade);//construtor com parametros de medalha
    ~Medalha();//destrutor de medalha
    //gets e sets
    void set_tipo(int tipo);
    int get_tipo();
    void set_ano(const std::string& ano);
    std::string get_ano();
    void set_atleta(const Atleta& atleta);
    void set_modalidade(const Modalidade& m);
    Modalidade get_modalidade();
    //
    void info_medalha();//função para exibir informações de medalha
};

#endif