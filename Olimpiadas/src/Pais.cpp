#include "Pais.h"
#include <iostream>
//construções dos metodos
Pais::Pais(const std::string& n, const std::string& c) : nome(n), continente(c) {}

Pais::~Pais() {}

void Pais::set_nome(const std::string& n) {
    nome = n;
}

std::string Pais::get_nome() {
    return nome;
}

void Pais::set_continente(const std::string& c) {
    continente = c;
}

std::string Pais::get_continente() {
    return continente;
}

void Pais::info_pais() {
    std::cout<< "Pais: " << nome << " Continente: " << continente << std::endl;
}