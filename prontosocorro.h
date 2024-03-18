#ifndef PRONTOSOCORRO_H
#define PRONTOSOCORRO_H

#include "paciente.h"
#include "enfermaria.h"
#include "uti.h"
#include "leito.h"

class prontoSocorro {
public:
    void Direcionar(Paciente p, Enfermaria e, UTI u, Leito l);
};

#endif