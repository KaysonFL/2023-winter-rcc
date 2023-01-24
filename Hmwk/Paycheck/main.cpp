/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 16, 2023, 6:27 PM
 * Purpose:  Calculate Gross Pay
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
    float rate, gross;
    int hours;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>rate>>hours;
    if (hours>40)
        gross=(rate*40)+(hours-40)*rate*2.0;
    else gross=rate*hours;
    cout<<"Paycheck = $"<<setw(7)<<fixed<<setprecision(2)<<gross;

    //Exit stage right or left!
    return 0;
}