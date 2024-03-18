#include <iostream>
#include <vector>
#include "paciente.h"
#include "setoresdeinternacao.h"
#include "leito.h"
#include "enfermaria.h"
#include "uti.h"
#include "prontosocorro.h"

using namespace std;
// Função para o submenu de gerenciamento de pacientes
void menuPacientes(vector<Paciente> &pacientes) {
    int opcao;
    do {
        system("cls");
        cout << "=== Menu Pacientes ===" << endl;
        cout << "=1. Adicionar Paciente" << endl;
        cout << "==2. Remover Paciente=" << endl;
        cout << "3. Alterar Dados do Paciente" << endl;
        cout << "4. Pesquisar Paciente=" << endl;
        cout << "5. Listar Todos os Pacientes" << endl;
        cout << "6. Voltar" << endl;
        cout << "Digite sua escolha: ";
        cin >> opcao;

        switch (opcao) {
          case 1:{
              string nome, cpf;
              int idade, severidade;

              cout << "Digite o nome do paciente: ";
              cin >> nome;
              cout << "Digite o CPF do paciente: ";
              cin >> cpf;
              cout << "Digite a idade do paciente: ";
              cin >> idade;
              cout << "Digite a severidade do paciente: ";
              cin >> severidade;

              Paciente novoPaciente(nome, cpf, idade, severidade);
              pacientes.push_back(novoPaciente);

              cout << "Paciente adicionado com sucesso!" << endl;
              break;
          }
          case 2:
          {
              string cpf;
              cout << "Digite o CPF do paciente a ser removido: ";
              cin >> cpf;

              bool pacienteEncontrado = false;
              for (auto it = pacientes.begin(); it != pacientes.end(); ++it) {
                  if (it->getCPF() == cpf) {
                      pacientes.erase(it);
                      pacienteEncontrado = true;
                      cout << "Paciente removido com sucesso!" << endl;
                      break;
                  }
              }

              if (!pacienteEncontrado) {
                  cout << "Paciente não encontrado." << endl;
              }

              break;
          }
          case 3:
          {
              string cpf;
              cout << "Digite o CPF do paciente cujos dados deseja alterar: ";
              cin >> cpf;

              bool pacienteEncontrado = false;
              for (auto &paciente : pacientes) {
                  if (paciente.getCPF() == cpf) {
                      cout << "Novos dados do paciente - " << paciente.getNome() << ":" << endl;

                      string nome;
                      int idade, severidade;

                      cout << "Novo nome: ";
                      cin >> nome;
                      paciente.setNome(nome);

                      cout << "Nova idade: ";
                      cin >> idade;
                      paciente.setIdade(idade);

                      cout << "Nova severidade: ";
                      cin >> severidade;
                      paciente.setSeveridade(severidade);

                      cout << "Dados do paciente alterados com sucesso!" << endl;
                      pacienteEncontrado = true;
                      break;
                  }
              }

              if (!pacienteEncontrado) {
                  cout << "Paciente não encontrado." << endl;
              }

              break;
          }
          case 4:
          {
              string cpf;
              cout << "Digite o CPF do paciente a ser pesquisado: ";
              cin >> cpf;

              bool pacienteEncontrado = false;
              for (const auto &paciente : pacientes) {
                  if (paciente.getCPF() == cpf) {
                      cout << "Paciente encontrado:" << endl;
                      paciente.exibirDados();
                      pacienteEncontrado = true;
                      break;
                  }
              }

              if (!pacienteEncontrado) {
                  cout << "Paciente não encontrado." << endl;
              }

              break;
          }
          case 5:
          {
              if (pacientes.empty()) {
                  cout << "Não há pacientes cadastrados." << endl;
              } else {
                  cout << "Lista de todos os pacientes:" << endl;
                  for (const auto &paciente : pacientes) {
                      paciente.exibirDados();
                  }
              }
              break;
          }
            case 6:
                cout << "Voltando ao menu principal..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    } while (opcao != 6);
}

// Função para o submenu de gerenciamento de setores
void menuSetores(vector<Setor> &setores) {
    int opcao;
    do {
        system("cls");
        cout << "=== Menu Setores ===" << endl;
        cout << "=1. Adicionar Setor=" << endl;
        cout << "==2. Remover Setor==" << endl;
        cout << "3. Alterar Dados do Setor" << endl;
        cout << "=4. Pesquisar Setor=" << endl;
        cout << "5. Listar Todos os Setores" << endl;
        cout << "6. Voltar" << endl;
        cout << "Digite sua escolha: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                // Implementar função para adicionar setor
                break;
            case 2:
                // Implementar função para remover setor
                break;
            case 3:
                // Implementar função para alterar dados do setor
                break;
            case 4:
                // Implementar função para pesquisar setor
                break;
            case 5:
                // Implementar função para listar todos os setores
                break;
            case 6:
                cout << "Voltando ao menu principal..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    } while (opcao != 6);
}

// Função para o submenu de gerenciamento de leitos
void menuLeitos(vector<Leito> &leitos) {
    int opcao;
    do {
        system("cls");
        cout << "=== Menu Leitos ===" << endl;
        cout << "==1. Ocupar Leito==" << endl;
        cout << "=2. Liberar Leito==" << endl;
        cout << "=3. Disponibilidade" << endl;
        cout << "=4. Listar Leitos==" << endl;
        cout << "5. Listar Ocupados/Livres" << endl;
        cout << "6. Voltar" << endl;
        cout << "Digite sua escolha: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                // Implementar função para ocupar leito
                break;
            case 2:
                // Implementar função para liberar leito
                break;
            case 3:
                // Implementar função para pesquisar disponibilidade de leitos
                break;
            case 4:
                // Implementar função para listar leitos por setor
                break;
            case 5:
                // Implementar função para listar leitos ocupados/livres
                break;
            case 6:
                cout << "Voltando ao menu principal" << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    } while (opcao != 6);
}

// Função principal (menu do sistema)
int main() {
    // Vetores para armazenamento
    vector<Paciente> pacientes;
    vector<Setor> setores;
    vector<Leito> leitos;

    // Carregar dados
    // carregarDados(pacientes, "");
    // carregarDados(setores, "");
    // carregarDados(leitos, "");

    int opcao;
    do {
        system("cls");
        cout << "==== Hospital JLA ====" << endl;
        cout << "=== Menu Principal ===" << endl;
        cout << "1. Gerenciar Pacientes" << endl;
        cout << "=2. Gerenciar Setores=" << endl;
        cout << "==3. Gerenciar Leitos=" << endl;
        cout << "========4. Sair=======" << endl;
        cout << "Digite sua escolha: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                menuPacientes(pacientes);
                break;
            case 2:
                menuSetores(setores);
                break;
            case 3:
                menuLeitos(leitos);
                break;
            case 4:
                cout << "Encerrando o programa" << endl;
                break;
            default:
                cout << "Opçao invalida. Tente novamente." << endl;
        }
    } while (opcao != 4);

    // Salvar dados nos arquivos
    // salvarDados(pacientes, "");
    // salvarDados(setores, "");
    // salvarDados(leitos, "");

    return 0;
}