#include "Atleta.h"
#include <iostream>
//construção dos metodos
Atleta::Atleta(const std::string& n, const Pais& p) : nome(n), pais(p) {qnt = 0;}

Atleta::Atleta() {}

Atleta::~Atleta() {}

void Atleta::set_nome(const std::string& n) {
    nome = n;
}

std::string Atleta::get_nome() {
    return nome;
}

void Atleta::set_pais(const Pais& p) {
    pais = p;
}

Pais Atleta::get_pais() {
    return pais;
}

void Atleta::adicionar_modalidade(const Modalidade& m) {
    //verificar se o array não passou do limite de tamanho
    if (qnt < TAM) {//adicionar modalidade ao vetor modalidade_esportiva
        modalidade_esportiva[qnt] = m;
        qnt++;
    }
    else {
        std::cout<< "Limite de modalidades alcancado" << std::endl;
    }
}

void Atleta::info_Atleta() {
    std::cout << "Informacoes do atleta" << std::endl;
    std::cout << "Nome: " << nome << std::endl;
    pais.info_pais();
    for (int i = 0; i < qnt; i++) {
        modalidade_esportiva[i].info_modalidade();
    }
}