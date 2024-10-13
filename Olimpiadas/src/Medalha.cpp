#include "Medalha.h"
#include <iostream>
//construção dos metodos
Medalha::Medalha() {}

Medalha::Medalha(int t, const std::string& a, Atleta at, const Modalidade& m) : tipo(t), ano(a), atleta(at), modalidade(m) {}

Medalha::~Medalha() {}

void Medalha::set_tipo(int t) {
    tipo = t;
}

void Medalha::set_ano(const std::string& a) {
    ano = a;
}

void Medalha::set_modalidade(const Modalidade& m) {
    modalidade = m;
}
void Medalha::set_atleta(const Atleta& a) {
    atleta = a;
}

int Medalha::get_tipo() {
    return tipo;
}

std::string Medalha:: get_ano() {
    return ano;
}

Modalidade Medalha::get_modalidade() {
    return modalidade;
}

void Medalha:: info_medalha() {
    std::string t;
    if (tipo == 1) {
        t = "Ouro";
    } else if(tipo == 2) {
        t = "Prata";
    }  else {
        t = "Bronze";
    }
    std::cout << "Medalha" << std::endl;
    std::cout << "Tipo: " << t << std::endl;
    std::cout << "Atleta :" << atleta.get_nome() << std::endl;
    modalidade.info_modalidade();
}