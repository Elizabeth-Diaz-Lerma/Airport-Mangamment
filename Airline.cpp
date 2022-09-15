//Here will be all the methods for the class airline, also include a constructor for airline

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include "Airline.h"
#include "Flight.h"
#include "Passenger.h"
using namespace std;

Airline:: Airline (){
    boardingCity = "";
    shortName = "";
    incomes = 0;
    name = "";
    //cout<<"Constructor de Airline"<<endl;
}
Airline:: ~Airline (){
    //cout<<"Destructor de Airline"<<endl;
}
string Airline::getBoardingCity(){
    return boardingCity;
}
string Airline::getShortName(){
    return shortName;
}
string Airline::getName(){
    return name;
}
int Airline::getIncomes(){
    return incomes;
}
void Airline::setBoardingCity(string b){
    boardingCity = b;
}
void Airline:: setShortName(string s){
    shortName = s;
}
void Airline::setName(string b){
    name = b;
}
void Airline:: setIncomes (int i){
    incomes = i;
}
void Airline :: updateAirline(){
    //string shortName, name;
    //cout<< "Ingrese nombre abreviado:  "<< endl;
    //cin>>shortName;
    //setShortName(shortName);
    //cout<< "Ingrese nombre:  "<< endl;
    //cin>>name;
    //setName(name);
}
void Airline::ScheduleFlight(){
    ifstream in_stream;
    in_stream.open("Vuelos.txt");
    string s;
    int t;
    float p;
    string cd;
    cout<<"Ciudad de Destino: "<<endl;
    cin>>cd;
    if (!in_stream.fail()) {
        for (int i = 0; i<5;i++){
            in_stream.ignore();
            in_stream>>t; //fecha
            flights[i].setDate(to_string(t));
            in_stream>>t;
            flights[i].setDate(flights[i].getDate()+"/"+to_string(t));
            in_stream>>t;
            flights[i].setDate(flights[i].getDate()+"/"+to_string(t));
            in_stream>>t; //hora
            flights[i].setHour(to_string(t));
            in_stream>>t; //hora
            flights[i].setHour(flights[i].getHour()+":"+to_string(t));
            in_stream>>p; //precio
            flights[i].setPrice(p);
            in_stream.ignore();
            getline(in_stream,s,'\n'); //modelo de avión
            flights[i].setAirplaneModel(s);
            getline(in_stream,s,'\n'); //Fromto
            flights[i].setFromTo(s);
            in_stream>>p; //distancia
            flights[i].setDistance(p);
            in_stream>>t; // crew
            flights[i].setCrew(t);
            in_stream>>p; // gasolina
            flights[i].setFuel(p);
            if (cd == flights[i].getFromTo()){
                    cout<<flights[i].getDate()<<endl;
                    cout<<flights[i].getHour()<<endl;
                    cout<<flights[i].getPrice()<<endl;
                    cout<<flights[i].getAirplaneModel()<<endl;
                    cout<<flights[i].getFromTo()<<endl;
                    cout<<flights[i].getDistance()<<endl;
                    cout<<flights[i].getCrew()<<endl;
                    cout<<flights[i].getFuel()<<endl;
                    flights[i].prueba();

            }
    }
}

}
void Airline:: currentIncome(){
    //setIncomes(getPrice++);


}
void Airline::closeOperation(){

}
