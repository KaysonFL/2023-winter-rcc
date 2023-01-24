/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 16, 2023, 11:08 AM
 * Purpose:  Temperature Converter
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float F, C;   //Degrees Fahrenheit and Celsius
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>F;
    C=5.0/9.0*(F-32);
    cout<<fixed<<setprecision(1)<<F<<" Degrees Fahrenheit = "<<fixed<<setprecision(1)<<C<<" Degrees Centigrade";
    

    //Exit stage right or left!
    return 0;
}