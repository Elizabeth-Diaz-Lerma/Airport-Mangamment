#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <sstream>
#include "Airport.h"
#include "Flight.h"
#include "Passenger.h"
#include "Airline.h"
using namespace std;

int main()
{
    //Airport airport;
    //menu
    //airport.printAllFights();
    //Flight flight;
    //float distancia;
    //cout << "distancia: "<<endl;
    //cin>> distancia;
    //flight.calculateFuel(distancia);

    //Flight flight;
    //flight.prueba();
    Passenger passenger;
    Airline airline;
    int op;
    do {
        cout <<endl;
        cout << "Sitema de control de vuelo del Aeropuerto de la Ciudad de Mexico" << endl << endl;
        cout << "Menu del sistema" << endl;
        cout << "1. Registrarse" << endl;
        cout << "2. Buscar vuelo" << endl;
        cout << "3. Elegir vuelo" << endl;
        cout << "4. Imprimir detalles del vuelo" << endl;
        cout << "5. Kilometraje acumulado" << endl;
        cout << "0. Salir del sistema" << endl << endl;
        cout << "Opcion: ";
        cin >> op;
        switch (op) {
        case 1:
            cout << "Registrar usuario" << endl;
            passenger.llenar_datos();
            cout << endl;
            break;
        case 2:
            cout << "Buscar vuelo" << endl << endl;
            airline.ScheduleFlight();
            cout << endl;
            break;
        case 3:
            cout << "Actualiza un alumno." << endl << endl;
            cout << "Matricula: ";
            cout << endl;
            break;
        case 4:
            cout << "Eliminar alumno." << endl << endl;
            cout << "Matricula: ";

            //procesaBajaAlumno(&listaAlumnos)
            break;
        case 5:
            cout << "Listado de alumnos." << endl << endl;

            break;
        case 0:
            cout << "Salir del sistema..." << endl << endl;
            break;
        default:
            cout << endl << "Opcion no valida, intente de nuevo." << endl << endl;
        }
        if (op != 0) {
            cout << "<< Enter >> para continuar";
            cin.ignore();
            getchar();
        }
    } while (op != 0);
    cout << "Cerrando el Sistema" << endl;
    cout << "Gracias por usar el sistema." << endl;
    return 0;
}
