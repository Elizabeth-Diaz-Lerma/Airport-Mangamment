//Here will be all the methods for the class fligts, also include a constructor for flight

#include <iostream>
#include <stdio.h>
#include "Flight.h"
#include "Passenger.h"
using namespace std;
Flight:: Flight(){
    date = "";
    hour = "";
    price = 0;
    airplaneModel = "";
    fromTo = "";
    distance = 0;
    crew = 0;
    fuel = 0;
    //cout<<"constructor de Flight"<<endl;
}
Flight:: ~Flight(){
}
string Flight::getDate(){
    return date;
}
string Flight::getHour(){
    return hour;
}
float Flight::getPrice(){
    return price;
}
string Flight::getAirplaneModel(){
    return airplaneModel;
}
string Flight::getFromTo(){
    return fromTo;
}
float Flight::getDistance(){
    return distance;
}
int Flight::getCrew(){
    return crew;
}
float Flight:: getFuel(){
    return fuel;
}
Passenger Flight::getSeats(){
    return seats[filas][columna];
}
void Flight:: setDate(string d){
    date = d;
}
void Flight::setHour(string h){
	hour = h;
}
void Flight::setPrice(float p){
	price = p;
}
void Flight::setAirplaneModel(string am){
    airplaneModel = am;
}
void Flight:: setFromTo(string ft){
    fromTo = ft;
}
void Flight :: setDistance(float d){
    distance = d;
}
void Flight :: setCrew(int c){
    crew = c;
}
void Flight :: setFuel(float f){
    fuel = f;
}
void Flight :: calculateFuel(float distancia){
    setDistance(distancia);
    int combustible_final = 0;
    float galones = 0;
    combustible_final=(getDistance()*1200)/100;
    galones = combustible_final/3.78541;
    setFuel(galones);
    cout<<"“El combustible requerido para viajar a "<<getFromTo()<<" es de "<<getFuel()<<endl;
}
void Flight:: prueba(){
            int k, l;
            int a,b;
            cout<<"Ingrese fila de asiento: "<<endl;
            cin>>a;
            cout<<"Ingrese columna de asiento: "<<endl;
            cin>>b;
            seats [a][b].llenar_datos();
                for (k=0;k<filas;k++){
                    cout<<endl;
                    for (l=0;l<columna;l++){
                        if (seats [k][l].getName() != "" & seats [k][l].getPhone() != 0){
                            cout<<1;
                        }
                        else {
                            cout<<0;
                        }
                    }
                }
}
