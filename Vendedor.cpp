#include <string>
#include "Empregado.hpp"
#include "Vendedor.hpp"

void Vendedor::setNome(std::string _nome) {

    nome = _nome;

}

std::string Vendedor::getNome() const {

    return(nome);

}

double Vendedor::quotaTotalAnual() {

	  return quotaMensalVendas * nMesesAno;

}


