

#ifndef Cita_h
#define Cita_h

#include <string>

using namespace std;

class Cita{
private:
    string id;
    int anno;
    int mes;
    int dia;
    int hora;
    double costo;

public:
    Cita();
    Cita(string, int, int, int, int, double);
    
    string getId();
    int getAnno();
    int getMes();
    int getDia();
    int getHora();
    double getCosto();
    
    void setId(string);
    void setFecha(int, int, int, int);
    
    ~Cita();
};

#endif /* Cita_h */
