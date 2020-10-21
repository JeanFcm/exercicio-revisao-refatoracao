#ifndef VENDEDOR_H
#define VENDEDOR_H
#include "Empregado.hpp"

class Vendedor : public Empregado {

  private:
    std::string nome;

  public:
    int nMesesAno = 12;
	double quotaTotalAnual();
    void setNome(std::string);
    std::string getNome() const;

};

#endif
