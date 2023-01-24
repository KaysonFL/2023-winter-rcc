/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 13, 2023, 1:12 PM
 * Purpose:  Test Average
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float num1, num2, num3, num4, num5, sum, avg;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Input 5 numbers to average."<<endl;
    cin>>num1>>num2>>num3>>num4>>num5;
    avg= (num1 + num2 + num3 + num4 + num5)/5;
    cout<<"The average = "<<fixed<<showpoint<<setprecision(1)<<avg;
    
    //Exit stage right or left!
    return 0;
}