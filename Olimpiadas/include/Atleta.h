/*1. Crie uma classe Atleta com os seguintes atributos:
Nome
País de origem (objeto da classe Pais)
Modalidade esportiva (array de objetos da classe Modalidade)
2. Implemente métodos para obter e definir os atributos.
3. Implemente um método para exibir as informações do atleta
*/
#ifndef ATLETA_H
#define ATLETA_H
#include <string>
#include "Pais.h"
#include "Modalidade.h"
#include <memory>
#define TAM 5 //tamanho do array modalidade_esportiva

class Atleta {
private:
    int qnt;//controlar o tamanho do vetor
    std::string nome;
    Pais pais;
    Modalidade modalidade_esportiva [TAM];
public:
    Atleta();//construtor sem parametros de atleta
    Atleta(const std::string& nome, const Pais& pais);//construtor com parametros de atleta
    ~Atleta();//destrutor de atleta
    //gets e sets
    void set_nome(const std::string& nome);
    std::string get_nome();
    void set_pais(const Pais& pais);
    Pais get_pais();
    //
    void adicionar_modalidade(const Modalidade& modalidade);//metodo para adicionar modalidade
    void info_Atleta();//metodo para mostrar informações do atleta
};

#endif