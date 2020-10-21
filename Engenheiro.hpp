#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
    std::string nome;
	int projetos;

  public:
    void setNome(std::string);
    std::string getNome() const;
    void setProjetos(int);
    int getProjetos() const;

};

#endif
