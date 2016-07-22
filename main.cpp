/* 
 * File:   main.cpp
 * Author: michael
 *
 * Created on July 20, 2016, 8:07 PM
 * 
 * Creating control program for flight controls of a quad copter
 */

#include <cstdlib>
#include <string>

using namespace std;

/* Sensor class to maintain readings from sensors */
class Sensor
{
    string placement;
    int value;
    
public:
    /* constructor */
    Sensor(string facing)
    {
        placement = facing;
        value = 0;
    }
    
    /* methods */
    void setPlacement(string facing)
    {
        placement = facing;
    }
    
    int getValue()
    {
        /* this will need code to get value from analog sensors */
        return value;
    }
    
};

/* Controller class to control the flight controller */
/* This will control movement of the copter          */
class Controller
{
    string id;
    int forward, back, left, right, up, down;
    
public:
    /* constructor */
    void Controller(string name)
    {
        id = name;
        forward = back = left = right = up = down = 0;
    }
    
    /* methods */
    void setMovement(string movement, int amount)
    {
        /* this will need to determine which field to adjust */
    }
    
    void motorControl(int num, int amount)
    {
        /* this will need to adjust motor rpm */
    }
    
};

/*
 * Main body to operate copter autonomously
 */
int main(int argc, char** argv) {

    return 0;
}

