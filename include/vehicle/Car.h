#pragma once

#include <random>

class Car {
private:
   std::string getRandomCarName();
   std::string name;
   double normalSpeed;
   double actualSpeed;
   double distanceTraveled = 0;
public:
   Car();
   void prepareForLap(bool& isYellowFlag);
   std::string toString();
   void moveForAnHour();
};