//Here will define the class date with all their attributes 

#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;
class Fecha { 
    public: // methods will be private
        Fecha();
        Fecha(const Fecha&);
        virtual ~Fecha();
        int getDia();
        int getMes();
        int getAnio();
        void setDia(int);
        void setMes(int);
        void setAnio(int);
        string getFecha();
        void setFecha(int const&, int const&, int const&);
        friend ostream& operator <<(ostream &os, const Fecha &f);
        friend istream& operator >>(istream &is, Fecha &f);
    private: // los atributos son privados (encapsulamiento)
        int dia, mes, anio;
        string to_string(int);
};


#endif // FECHA_H_INCLUDED
