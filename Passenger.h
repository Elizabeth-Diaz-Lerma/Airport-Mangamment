//Here will define the class passenger with all their attributes and methods

#ifndef PASSENGER_H_INCLUDED
#define PASSENGER_H_INCLUDED
#include <iostream>
using namespace std;
class Passenger{
private:
    string name;
    int phone;
public:
    Passenger();
    ~Passenger();
    string getName();
    int getPhone();
    void setName(string);
    void setPhone(int);
    void llenar_datos ();
};


#endif // PASSENGER_H_INCLUDED
