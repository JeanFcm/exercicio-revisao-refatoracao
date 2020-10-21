#include <string>
#include "Empregado.hpp"
#include "Engenheiro.hpp"

void Engenheiro::setNome(std::string _nome) {

    nome = _nome;

}

std::string Engenheiro::getNome() const {

    return(nome);

}

void Engenheiro::setProjetos(int _projetos) {

    projetos = _projetos;

}

int Engenheiro::getProjetos() const {

    return(projetos);

}

