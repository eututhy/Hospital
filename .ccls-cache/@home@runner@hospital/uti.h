#ifndef UTI_H
#define UTI_H

#include "setoresdeinternacao.h"
#include "leito.h"

class UTI : public setoresDeInternacao {
public:
    std::string NomeSetor = "UTI"; 

    Leito leitosUTI[20];

    void alocaPaciente(Paciente p, int l);
    void definirDataSaida();
};

#endif