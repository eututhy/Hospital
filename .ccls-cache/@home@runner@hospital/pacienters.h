#ifndef PACIENTE_H
#define PACIENTE_H

#include <iostream>
#include <string>
#include "data.h"

using namespace std;

class Paciente {
public:
    string Nome;
    string CPF;
    int Idade;
    int Severidade;

    Paciente(string n, string c, int i, int s);

    void setNome(string n);
    string getNome();
    void setCPF(string c);
    string getCPF();
    void setIdade(int i);
    int getIdade();
    void setSeveridade(int s);
    int getSeveridade();


void exibirDados() {
    cout << "Nome: " << Nome << endl;
    cout << "CPF: " << CPF << endl;
    cout << "Idade: " << Idade << endl;
    cout << "Severidade: " << Severidade << endl;
}
    void excluir(){
  Nome = " ";
  CPF = " ";
  Idade = 0;
  Severidade = 0;
}
};

#endif