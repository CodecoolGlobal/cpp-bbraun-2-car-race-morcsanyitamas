#pragma once

#include <vector>
#include "Car.h"
#include "Motorcycle.h"
#include "Weather.h"

class Race {
private:
   std::vector<Car> cars;
   std::vector<Motorcycle> motorcycles;
   bool isYellowFlag = false;

public:
   void simulateRace(Weather &weather);
   void printRaceResults() const;
   bool isYellowFlagActive() const;
   void registerCar(Car car);
   void registerMotorcycle(Motorcycle motorcycle);
};