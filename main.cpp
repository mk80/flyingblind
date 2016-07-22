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
    void setPlacement(string location)
    {
        placement = location;
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
    int motor1, motor2, motor3, motor4;
    
public:
    /* constructor */
    Controller(string name)
    {
        id = name;
        motor1 = motor2 = motor3 = motor4 = 0;
    }
    
    /* methods */
    void moveForward(int velo)
    {
        /* this will set for forward motion */
    }
    
    void moveBackward(int velo)
    {
        /* this will set for backward motion */
    }
    
    void moveRight(int velo)
    {
        /* this will set for movement right */
    }
    
    void moveLeft(int velo)
    {
        /* this will set for movement left */
    }
    
    void moveUp(int velo)
    {
        /* this will set for increased altitude */
    }
    
    void moveDown(int velo)
    {
        /* this will set for decresed altitude */
    }
    
private:
    void motorControl(int num1, int num2, int num3, int num4,
            int amount1, int amount2, int amount3, int amount4)
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

