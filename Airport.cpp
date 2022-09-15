//Here will be all the methods for the class airpot, also include a constructor for airpot

#include <iostream>
#include <fstream>
#include <stdio.h>
#include "Airport.h"
#include "Flight.h"
#include "Passenger.h"
#include "Airline.h"
#include "Fecha.h"
using namespace std;
Airport:: Airport(){
    Fecha date;
    //cout<<"constructor de Airport"<<endl;
    cout<< "Ingrese la fecha de operación  en formato DD/MM/AA:  "<< endl;
    cin>>date;
    //Airlines[NUM_AIRLINES];
    //Flights[NUM_FLIGHTS];
    //seats[filas][columnas];
    startOperations(date);

}
Airport::~Airport(){
}
string Airport::getId(){
    return id;
}
Fecha Airport::getDate(){
    return date;
}
string Airport::getCity(){
    return city;
}
string Airport::getCountry(){
    return country;
}
int Airport::getTotalTransactions(){
    return totalTransactions;
}
int Airport::getTotalDailyIncomes(){
    return totalDailyIncomes;
}
void Airport:: setId(string i){
    id = i;
}
void Airport:: setDate(Fecha d){
    date = d;
}
void Airport:: setCity(string c){
    city = c;
}
void Airport:: setCountry(string co){
    country = co;
}
void Airport:: setTotalTransactions(int tr){
    totalTransactions = tr;
}
void Airport :: setTotalDailyIncomes(int td){
    totalDailyIncomes = td;
}
void Airport::startOperations(Fecha date){
    this->date = date;
    //string ID, city, pais;
    //setDate(date);
    cout<< "Ingrese ID:  ";
    cin>>id;
    cout << "Ingresa Ciudad: ";
    cin>>city;
    cout<<"Ingresa País: ";
    cin>>country;
    ifstream in_stream;
    in_stream.open("Aerolineas.txt");
    string s;
    int t;
    if (!in_stream.fail()) {
        for (int i = 0; i<3;i++){
            in_stream.ignore();
            getline(in_stream,s,'\n');
            airlines[i].setBoardingCity(s);
            getline(in_stream,s,'\n');
            airlines[i].setShortName(s);
            getline(in_stream,s,'\n');
            airlines[i].setName(s);
            in_stream>>t;
            airlines[i].setIncomes(t);
    }
    }
    else {

            cout<<"No hay datos de aerolinea"<<endl;
    }

}
void Airport::printAllFights(){
    for (int i=0; i<3; i++){
        cout<<airlines[i].getBoardingCity()<<endl<<airlines[i].getShortName()<<endl<<airlines[i].getName()<<endl<<airlines[i].getIncomes()<<endl;
    }
}
void Airport::closeOperations(){
}
