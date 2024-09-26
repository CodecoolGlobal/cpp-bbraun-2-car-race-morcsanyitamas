#pragma once

#include <string>
#include "Weather.h"

class Motorcycle {
private:
   std::string getMotorcycleName();
   inline static int motorcycleCount;
   std::string name;
   double normalSpeed;
   double actualSpeed;
   double distanceTraveled = 0;
public:
   Motorcycle();
   void prepareForLap(Weather& weather, bool& isYellowFlag);
   std::string toString();
   void moveForAnHour();
};