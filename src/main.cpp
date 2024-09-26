#include <iostream>
#include "Race.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Weather.h"

#include <cstdlib>

using namespace std;

int main() {
    std::cout << RAND_MAX << std::endl;
    cout << "============================== REGISTRATION STARTS ==============================" << endl;

    int numberOfRacersPerType = 10;
    Race race{};

    for(int i = 0; i < numberOfRacersPerType; i++){
        race.registerCar(Car());
        race.registerMotorcycle(Motorcycle());
    }

    cout << "============================== RACE STARTS ======================================" << endl;

    Weather weather(false);

    race.simulateRace(weather);
    race.printRaceResults();

    return 0;
}
