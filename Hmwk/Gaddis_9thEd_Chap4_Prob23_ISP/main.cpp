/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 18, 2023, 9:15 PM
 * Purpose:  Internet Bill
 */

//System Libraries
#include <iostream>  //Input/Output Library
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
    char pack; //Package chosen by customer
    float hours, cost, //Hours and Cost per month
          pkA=9.95, pkB=14.95, pkC=19.95; //Packages and Cost
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>pack>>hours;
    
    if (hours>744){
        //cout<<"Invalid Hours. Please try again.";
    }
    if (pack=='A'){
        if (hours>10){
            cost=pkA+((hours-10)*2.00);
        }
        else{
            cost=pkA*hours;
        }
    }
    if (pack=='B'){
        if (hours>10){
            cost=pkB+((hours-20)*1.00);
        }
        else{
            cost=pkB*hours;
        }
    }
    if (pack=='C'){
            cost=pkC;
    }
    //Display the outputs
    cout<<"Bill = $"<<setw(6)<<cost;
    //Exit stage right or left!
    return 0;
}
