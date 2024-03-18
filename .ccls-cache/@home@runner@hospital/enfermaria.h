#ifndef ENFERMARIA_H
#define ENFERMARIA_H

#include "setoresdeinternacao.h"
#include "leito.h"

class Enfermaria : public setoresDeInternacao {
public:
    Leito leitosEnfermaria[30];

    void alocaPaciente(Paciente p, int l);
    void definirDataSaida();
};

#endif