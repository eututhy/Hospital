#ifndef DATA_H
#define DATA_H

class Data {
public:
    int Dia;
    int Mes;
    int Ano;

    int getDaysMonth(int Mes);

    Data(int dia, int mes, int ano);

    void SetDia(int dia);
    int GetDia();
    void SetMes(int mes);
    int GetMes();
    void SetAno(int ano);
    int GetAno();


       void avancarDia(){
        if(Dia == getDaysMonth(Mes) && Mes == 12){
          Dia = 1;
          Mes = 1;
          Ano++;
        } else if(Dia == getDaysMonth(Mes)){
          Dia = 1;
          Mes++;
        } else if((Dia >= 1 || Dia < getDaysMonth(Mes)) && Mes > 12){
          Dia++;
          Mes = 1;
        } else if((Dia >= 1 && Dia > getDaysMonth(Mes)) && Mes <= 12){
            Dia = 1;
            Dia++;
        }else if(Dia >= 1 || Dia < getDaysMonth(Mes)){
          Dia++;
        }
}
};

#endif