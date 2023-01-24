/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 16, 2023, 10:27 PM
 * Purpose:  Trigonometric Functions
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <math.h>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float Angl, Deg, CSin, CCos, CTan; //Angle, Degree, Conversions of Sin, Cos, Tan
    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>Angl;
    //Map inputs -> outputs
    Deg=Angl*(M_PI/180);
    CSin=sin(Deg);
    CCos=cos(Deg);
    CTan=tan(Deg);
    //Display the outputs
    cout<<"sin("<<Angl<<") = "<<fixed<<setprecision(4)<<CSin<<endl;
    cout<<"cos("<<setprecision(0)<<noshowpoint<<Angl<<") = "<<fixed<<setprecision(4)<<CCos<<endl;
    cout<<"tan("<<setprecision(0)<<noshowpoint<<Angl<<") = "<<fixed<<setprecision(4)<<CTan;
    //Exit stage right or left!
    return 0;
}