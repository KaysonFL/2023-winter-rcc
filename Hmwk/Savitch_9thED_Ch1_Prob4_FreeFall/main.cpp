/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 5, 2023, 12:47 PM
 * Purpose: Free Fall Calculation
 */

//System Libraries
#include <iostream> //Input Output Library
#include <cstdlib> //Utilizes Random Numbers
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
float GRAVITY=3.2174e1f; //Gravity 32.174 ft/sec^2

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    float dstnc, //Distance the object falls feet
            tme; //Time in seconds
            
    
    //Initialize Variables
    tme=rand()%10+1; //Time from 1 to 10 seconds
    
    //Map/Process the Inputs -> Outputs
    //dstnc=1/2*GRAVITY*tme*tme;    Incorrect integer division
    dstnc=1.0f/2*GRAVITY*tme*tme;
    
    //Display Inputs/Outputs
    cout<<"This program calculates distance in free fall"<<endl;
    cout<<"The time of the drop = "<<tme<<" seconds"<<endl;
    cout<<"The distance dropped = "<<dstnc<<" feet"<<endl;
    
    return 0;
}

