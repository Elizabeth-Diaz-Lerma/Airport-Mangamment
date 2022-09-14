#ifndef AIRPORT_H_INCLUDED
#define AIRPORT_H_INCLUDED
#include "Airline.h"
#include "Flight.h"
#include "Passenger.h"
#include "Fecha.h"
const int NUM_AIRLINES = 3;
class Airport{
private:
    string id;
    Fecha date;
    string city;
    string country;
    int totalTransactions;
    int totalDailyIncomes;
    Airline airlines[NUM_AIRLINES];
public:
    Airport();
    ~Airport();
    string getId();
    Fecha getDate();
    string getCity();
    string getCountry();
    int getTotalTransactions();
    int getTotalDailyIncomes();
    void setId(string);
    void setDate(Fecha);
    void setCity(string);
    void setCountry(string);
    void setTotalTransactions(int);
    void setTotalDailyIncomes(int);
    void startOperations(Fecha date);
    void printAllFights();
    void closeOperations();


};


#endif // AIRPORT_H_INCLUDED
