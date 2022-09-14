#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED
#include <iostream>
#include "Passenger.h"
using namespace std;
const int columna = 4;
const int filas = 30;
class Flight{
private:
    //Incluirlo en el archivo de texto de aerlinea 120 elementos 0 los que están ocupados, 2 números enteros nombre y teléfono
    string date;
    string hour;
    int price;
    string airplaneModel;
    string fromTo;
    float distance;
    int crew;
    float fuel;
    Passenger seats[filas][columna];
public:
    Flight();
    ~Flight();
    string getDate();
    string getHour();
    float getPrice();
    string getAirplaneModel();
    string getFromTo();
    float getDistance();
    int getCrew ();
    float getFuel();
    Passenger getSeats();
    void setDate(string);
    void setHour(string);
    void setPrice(float);
    void setAirplaneModel (string);
    void setFromTo (string);
    void setDistance(float);
    void setCrew(int);
    void setFuel(float);
    void calculateFuel(float);
    void prueba();

};

#endif // FLIGHT_H_INCLUDED
