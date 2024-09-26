#pragma once

#include "Weather.h"
#include <string>

class Truck {
private:
   static std::string getTruckName();
   int hoursSpentBroken = 0;
   bool isBroken = false;
   std::string name;
   double normalSpeed;
   double actualSpeed;
   double distanceTraveled = 0;
public:
   Truck();
   void prepareForLap(bool &isYellowFlag);
   std::string toString();
   void moveForAnHour();
};