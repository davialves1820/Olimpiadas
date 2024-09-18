/*Funcionalidade do Programa:
Faça um programa que permita o cadastro e exibição de atletas, modalidades, países e medalhas.
Solicite todos os dados de cada objeto e armazene-os em vetores.
Quando solicitado pelo usuário, exiba os resultados das Olimpíadas com as informações dos atletas,
modalidades e medalhas conquistadas.
Use make/Makefile para facilitar a compilação do programa
*/

#include "Pais.h"
#include "Pais.h"
#include "Modalidade.h"
#include "Atleta.h"
#include "Medalha.h"
#include <iostream>
#include <memory>

#define TAMA 5 //tamanho dos vetores

void exibir_paises(int num_paises, Pais paises[]) {//função para exibir paises
    std::cout << "PAISES" <<std::endl;
    for (int i = 0; i < num_paises; i++) {
        std::cout << i + 1 << "- "; 
        paises[i].info_pais();
    }
}

void exibir_modalidades(int num_modalidade, Modalidade modalidades[]) {//função para exibir modalidades
    std::cout<< "MODALIDADES" <<std::endl;
    for (int i = 0; i < num_modalidade; ++i) {
        std::cout << i + 1 << "- ";
        modalidades[i].info_modalidade();
    }
}

void exibir_atletas(int num_atletas, Atleta atletas[]) {//função para exibir atletas
    std::cout<< "ATLETAS" <<std::endl;
    for (int i = 0; i < num_atletas; ++i) {
        std::cout << i + 1 << "- ";
        atletas[i].info_Atleta();
    }
}

void exibir_medalhas(int num_medalhas, Medalha medalhas[]) {//função para exibir medalhas
    std::cout<< "MEDALHAS" << std::endl;
    for (int i = 0; i < num_medalhas; ++i) {
        medalhas[i].info_medalha();
    }
}

int main() {

    Atleta atletas[TAMA];//array de atletas
    Modalidade modalidades[TAMA];//array de modalidades
    Pais paises[TAMA];//array de paises
    Medalha medalhas[TAMA];//array de medalhas

    int num_atletas = 0, num_modalidades = 0, num_medalhas = 0, num_paises = 0;//variaveis auxiliares para verificar se os arrays não ultrapassaram o limite
    int opcao;

    do {
        //os 4 primeiros casos para cadastrar um novo objeto e adicionar ao vetor especifico
        std::cout << "1- Cadastrar Pais" <<std::endl;
        std::cout << "2- Cadastrar Atleta"<<std::endl;
        std::cout << "3- Cadastrar Modalidade"<<std::endl;
        std::cout << "4- Cadastrar Medalha"<<std::endl;
        std::cout << "5- Exibir Resultados"<<std::endl;//exibir os resultados dos jogos
        //casos de 6 a 9 para exibir respectivos vetores
        std::cout << "6- Exibir Pais" <<std::endl;
        std::cout << "7- Exibir Atlestas" <<std::endl;
        std::cout << "8- Exibir Modalidades" <<std::endl;
        std::cout << "9- Exibir Medalhas" <<std::endl;
        std::cout << "0- Sair\n"<<std::endl;//caso para se encerrar o looping
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;

        if(opcao == 1) {
            if (num_paises < TAMA) {
                std::string nome, continente;
                std::cout << "Nome do pais: ";
                std::cin.ignore();
                std::getline(std::cin, nome);
                std::cout << "Continente do pais: ";
                std::cin.ignore();
                std::getline(std::cin, continente);
                //criar pais
                paises[num_paises++] = Pais(nome, continente);
            }
        } 
        
        else if (opcao == 2) {
            if (num_atletas < TAMA) {
                std::string nome;
                std::cout << "Nome do Atleta: ";
                std::cin.ignore();
                std::getline(std::cin, nome);
                std::cout << "Selecione um Pais:\n";
                //listar paises
                exibir_paises(num_paises, paises);
                int pais_pos;
                std::cin >> pais_pos;
                //criar atleta
                atletas[num_atletas] = Atleta(nome, paises[pais_pos - 1]);
                int escolher_modalidade;
                do {//looping para adicionar modalidades para o atleta
                    std::cout << "Selecionar modalidade(1) ou sair(0)" << std::endl;
                    std::cin >> escolher_modalidade;
                    if (escolher_modalidade == 1) {
                        std::cout << "Selecione a Modalidade:\n";
                        //listar modalidades
                        exibir_modalidades(num_modalidades, modalidades);
                        int modalidade_pos;
                        std::cin >> modalidade_pos;
                        atletas[num_atletas].adicionar_modalidade(modalidades[modalidade_pos - 1]);
                    }
                }while (escolher_modalidade != 0);
                num_atletas++;
            } else {
                std::cout << "Numero maximo de atletas atingido.\n";
            }
        }  
        
        else if (opcao == 3) {
            if (num_modalidades < TAMA) {
                std::string nome;
                std::cout << "Nome da Modalidade: ";
                std::cin.ignore();
                std::getline(std::cin, nome);
                int tipo;
                std::cout<< "Tipo da modalidade 0(individual) ou 1(coletiva): " << std::endl;
                std::cin>> tipo;
                while (tipo > 1 || tipo < 0) {//looping para verificar se o tipo é valido
                    std::cout<< "Tipo da modalidade 0(individual) ou 1(coletiva): " << std::endl;
                    std::cin>> tipo;
                }
                //criar modalidade
                modalidades[num_modalidades++] = Modalidade(nome, tipo);
            } else {
                std::cout << "Numero maximo de modalidades atingido.\n";
            }
        } 
        
        else if (opcao == 4) {
            if (num_medalhas < TAMA) {
                int tipo;
                std::string ano;
                while (tipo > 1 || tipo < 0) {//looping para verificar se o tipo é valido
                    std::cout<< "Tipo de Medalha (1 - Ouro, 2 - Prata, 3 - Bronze):  " << std::endl;
                    std::cin>> tipo;
                }
                std::cin.ignore();
                std::cout << "Ano: ";
                std::cin >> ano;

                //listar atletas
                std::cout << "Selecione o Atleta:\n";
                exibir_atletas(num_atletas, atletas);
                int atleta_pos;
                std::cin >> atleta_pos;

                //listar modalidades
                std::cout << "Selecione a Modalidade:\n";
                exibir_modalidades(num_modalidades, modalidades);
                int modalidade_pos;
                std::cin >> modalidade_pos;

                //criar medalha
                medalhas[num_medalhas++] = Medalha(tipo, ano, atletas[atleta_pos - 1], modalidades[modalidade_pos - 1]);
            } else {
                std::cout << "Numero maximo de medalhas atingido.\n";
            }
        } else if (opcao == 5) {//exibi atletas, modalidades e medalhas
            std::cout << "\nResultados das Olimpiadas:\n";
            exibir_atletas(num_atletas, atletas);
            exibir_modalidades(num_modalidades, modalidades);
            exibir_medalhas(num_medalhas, medalhas);
        } else if (opcao == 6) {//exibi paises
            exibir_paises(num_paises, paises);
        } else if (opcao == 7) {//exibi atletas
            exibir_atletas(num_atletas, atletas);
        } else if (opcao == 8) {//exibi modalidades
            exibir_modalidades(num_modalidades, modalidades);
        } else if (opcao == 9) {//exibi medalhas
            exibir_medalhas(num_medalhas, medalhas);
        }

    } while (opcao != 0);

    return 0;
}