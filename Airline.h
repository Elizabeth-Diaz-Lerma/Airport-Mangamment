//Here will define the class Airline 

#ifndef AIRLINE_H_INCLUDED
#define AIRLINE_H_INCLUDED
#include "Flight.h"
const int NUM_FLIGHTS = 5;
class Airline{
private:
    //consideration must be in a txt the bording city, short name 
    string boardingCity;
    string shortName;
    string name;
    int incomes;
    Flight flights[NUM_FLIGHTS];
public:
    Airline();
    ~Airline();
    string getBoardingCity();
    string getShortName();
    string getName();
    int getIncomes();
    void setBoardingCity(string);
    void setShortName(string);
    void setName(string);
    void setIncomes(int);
    void updateAirline();
    void ScheduleFlight();
    void currentIncome();
    void closeOperation();
};


#endif // AIRLINE_H_INCLUDED
