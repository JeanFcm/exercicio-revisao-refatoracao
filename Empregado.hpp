#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

  private:
    double salarioHora;
    const int horasMaxima = 8;

  public:
    double quotaMensalVendas;
    double pagamentoMes(double);
    void setSalarioHora(double);
    double getSalarioHora() const;

};

#endif
