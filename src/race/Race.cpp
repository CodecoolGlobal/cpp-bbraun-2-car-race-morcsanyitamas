#include <iostream>
#include "Race.h"
#include "Weather.h"

using namespace std;

void Race::simulateRace(Weather& weather){
    for (int i = 0; i < 50; ++i) {
        isYellowFlag = false;
        weather.randomize();
        
        for (Car &car : cars) {
            car.prepareForLap(isYellowFlag);
            car.moveForAnHour();
        }

        for (Motorcycle &motorcycle : motorcycles) {
            motorcycle.prepareForLap(weather, isYellowFlag);
            motorcycle.moveForAnHour();
        }
    }
}

void Race::printRaceResults() const{
    string results = "";

    for (Car car : cars) {
        results += car.toString() + "\n";
    }

    for (Motorcycle motorcycle : motorcycles) {
        results += motorcycle.toString() + "\n";
    }

    cout << results;
}

bool Race::isYellowFlagActive() const{
    return isYellowFlag;
}

void Race::registerCar(Car car) {
    cout << car.toString() << endl;
    cars.push_back(car);
}

void Race::registerMotorcycle(Motorcycle motorcycle) {
    cout << motorcycle.toString() << endl;
    motorcycles.push_back(motorcycle);
}