#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
#include "data.h"

class Paciente {
public:
    std::string Nome;
    std::string CPF;
    int Idade;
    int Severidade;

    Paciente(std::string n, std::string c, int i, int s);

    void setNome(std::string n);
    std::string getNome();
    void setCPF(std::string c);
    std::string getCPF();
    void setIdade(int i);
    int getIdade();
    void setSeveridade(int s);
    int getSeveridade();

    void exibirDados();
    void excluir();
};

#endif