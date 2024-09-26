#include "Truck.h"

using namespace std;

Truck::Truck() : name(getTruckName()), normalSpeed(100){}

string Truck::getTruckName(){
    return to_string(rand() % 1000);
}

void Truck::prepareForLap(bool& isYellowFlag){
    if (hoursSpentBroken == 0){
        if (rand() % 100 < 98){
            actualSpeed = 0;
            hoursSpentBroken++;
            isBroken = true;
            isYellowFlag = true;
        } else {
            actualSpeed = normalSpeed;
        }
        return;
    }

    if (hoursSpentBroken == 2){
        if (rand() % 100 < 98){
            actualSpeed = 0;
            hoursSpentBroken++;
            isBroken = true;
            isYellowFlag = true;
        } else {
            hoursSpentBroken = 0;
            actualSpeed = normalSpeed;
            isBroken = false;
        }
        return;
    }

    if (hoursSpentBroken == 1){
        isYellowFlag = true;
        hoursSpentBroken++;
    }
}

void Truck::moveForAnHour(){
    distanceTraveled += actualSpeed;
}

string Truck::toString(){
    return "Type: Truck, Name: " + name + ", normal speed: " + to_string(normalSpeed) + ", actual speed: " +
        to_string(actualSpeed) + ", distance traveled: " + to_string(distanceTraveled);
}