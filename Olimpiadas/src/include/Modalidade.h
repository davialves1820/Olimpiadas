/*1. Crie uma classe Modalidade com os seguintes atributos:
Nome da modalidade esportiva
Atributo que define se modalidade é individual ou coletiva
2. Implemente métodos para obter e definir os atributos.
3. Implemente um método para exibir as informações da modalidade.
*/

#ifndef MODALIDADE_H
#define MODALIDADE_H
#include <string>

class Modalidade {
private:
    std::string nome;
    int categoria; // 0 se é individual 1 se é coletiva
public:
    Modalidade(const std::string& nome = "", int categoria = 0);//construtor de modalidade
    ~Modalidade();//destrutor de modalidade
    //gets e sets
    void set_nome(const std::string& nome);
    std::string get_nome();
    void set_categoria(int categoria);
    int get_categoria();
    //
    void info_modalidade();//função para exibir informações de modalidade
};

#endif