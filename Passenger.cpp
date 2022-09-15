////Here will define the methodos off the passenger

#include <iostream>
#include <stdio.h>
#include <fstream>
#include "Passenger.h"
using namespace std;
Passenger:: Passenger(){
    name = "";
    phone = 0;
}
Passenger:: ~Passenger(){
    ofstream out_stream;
    out_stream.open("Usuarios.txt");
    out_stream<<getName()<<endl;
    out_stream<<getPhone()<<endl;
    out_stream.close();
}
string Passenger::getName(){
    return name;
}
int Passenger::getPhone(){
    return phone;
}
void Passenger:: setName(string n){
    name = n;
}
void Passenger:: setPhone(int p){
    phone = p;
}
void Passenger:: llenar_datos(){
    string name;
    int phone;
    cout << "¿Como se llama el pasajero?" <<endl;
    cin >> name;
    setName(name);
    cout << "¿Cual es su numero?" << endl;
    cin >> phone;
    setPhone(phone);
    }
