//Here will be all the methods for the class date, also include a constructor for date

#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <sstream>
#include <vector>
#include "Fecha.h"
using namespace std;
Fecha::Fecha(){
    //constructor
    //cout << "Constructor Fecha" << endl;
    dia = 1;
    mes = 2;
    anio = 2019;
}

Fecha::Fecha(const Fecha &f) {
    dia = f.dia;
    mes = f.mes;
    anio = f.anio;
}


Fecha::~Fecha(){
    //destructor
    //cout << "Destructor Fecha" << endl;
}

int Fecha::getDia() {
    return dia;
}

int Fecha::getMes() {
    return mes;
}

int Fecha::getAnio() {
    return anio;
}

void Fecha::setDia(int d) {
    dia = d;
}

void Fecha::setMes(int m) {
    mes = m;
}

void Fecha::setAnio(int a) {
    anio = a;
}

string Fecha::getFecha() {
    return to_string(dia) + "/" + to_string(mes) + "/" + to_string(anio);
}

void Fecha::setFecha(int const &d, int const &m, int const &a){
    dia = d;
    mes = m;
    anio = a;
}

string Fecha::to_string(int n) {
    stringstream s;
    s << n;
    return s.str();
}
ostream& operator <<(ostream &os, const Fecha &f) {
    os << f.dia << "/" << f.mes << "/" << f.anio;
    return os;
}

istream& operator >>(istream &is, Fecha &f) {
    cout << "Dia: ";
    is >> f.dia;
    cout << "Mes: ";
    is >> f.mes;
    cout << "Anio: ";
    is >> f.anio;
    return is;
}
