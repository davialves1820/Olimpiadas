#include "Modalidade.h"
#include <iostream>
//construção dos metodos
Modalidade::Modalidade(const std::string& n, int c) : nome(n), categoria(c) {}

Modalidade::~Modalidade() {}

void Modalidade::set_nome(const std::string& n) {
    nome = n;
}

std::string Modalidade::get_nome() {
    return nome;
}

void Modalidade::set_categoria(int m) {
    categoria = m;
}

int Modalidade::get_categoria() {
    return categoria;
}

void Modalidade::info_modalidade() {
    std::string c;
    if (categoria == 0) {//condicional para saber o tipo de modalidade que sera exibido
        c = "individual";
    }
    else{ 
        c = "coletivo";
    }
    std::cout<< "Modalidade" <<std::endl;
    std::cout<< "Nome: " << nome <<  std::endl;
    std::cout<< "Categoria: " << c << std::endl;
}