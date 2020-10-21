 #include "Empregado.hpp"

void Empregado::setSalarioHora(double _salarioHora) {

    salarioHora = _salarioHora;

}

double Empregado::getSalarioHora() const {

    return(salarioHora);

}

double Empregado::pagamentoMes(double horasTrabalhadas) {

    double t = horasTrabalhadas;

 //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > horasMaxima) {
      double x = horasTrabalhadas - horasMaxima;
      t += x / 2;
    }
	return t * salarioHora;
}
