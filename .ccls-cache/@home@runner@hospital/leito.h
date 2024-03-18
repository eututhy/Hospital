#ifndef LEITO_H
#define LEITO_H

#include "paciente.h"

class Leito {
    public:
      Paciente internado[1];

      Leito() : internado{ Paciente("", "", 0, 0) } {}
      void checaDisponibilidade(){
        if(sizeof(internado) == 0){
          cout << "O leito está ocupado." << endl;
        } else {
          cout << "O leito está disponível." << endl;
        }
      }
    void alocaPaciente(Paciente p){
      internado[0] = p;
    }

      void liberarLeito(){
        internado[0] = Paciente("", "", 0, 0);;
      }
};
#endif