#ifndef SETORESDEINTERNACAO_H
#define SETORESDEINTERNACAO_H

#include <string>

class setoresDeInternacao {
public:
    int diaSaida, mesSaida, anoSaida;
    std::string nomeSetor;


    void definirDataSaida();
    const std::string& getNomeSetor() const;
    void setCapacidade(int capacidade);
    int getCapacidade() const; 

};

#endif