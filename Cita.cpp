#include "Cita.h"

Cita::Cita(): id(" "),anno(0), mes(0), dia(0), hora(0), costo(0){};
Cita::Cita(string cId, int cAnno, int cMes, int cDia, int cHora, double cCosto){
    id = cId;
    anno = cAnno;
    mes = cMes;
    dia = cDia;
    hora = cHora;
    costo =cCosto;
}
    
string Cita::getId(){
    return id;
};
int Cita::getAnno(){
    return anno;
};

int Cita::getMes(){
    return mes;
};

int Cita::getDia(){
    return dia;
};

int Cita::getHora(){
    return hora;
};

double Cita::getCosto(){
    return costo;
}
void Cita::setId(string cId){
    id = cId;
};
void Cita::setFecha(int cAnno, int cMes, int cDia, int cHora){
    anno = cAnno;
    mes = cMes;
    dia = cDia;
    hora = cHora;

};

Cita::~Cita(){};
