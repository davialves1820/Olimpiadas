/*1. Crie uma classe Pais com os seguintes atributos:
Nome do país
Continente
2. Implemente métodos para obter e definir os atributos.
3. Implemente um método para exibir as informações do país
*/

#ifndef PAIS_H
#define PAIS_H
#include <string>

class Pais {
private:
    std::string nome;
    std::string continente;
public:
    Pais(const std::string& nome = "", const std::string& continente = "");//construtor de país
    ~Pais();//destrutor de país
    //gets e sets
    void set_nome(const std::string& nome);
    std::string get_nome();
    void set_continente(const std::string& continente);
    std::string get_continente();
    //
    void info_pais();//função para exibir informações de pais
};

#endif