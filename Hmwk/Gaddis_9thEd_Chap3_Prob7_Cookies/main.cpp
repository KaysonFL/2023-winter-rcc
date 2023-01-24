/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 14, 2023, 2:20 PM
 * Purpose:  Counting Calories
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
    float serv, cookies, SerCal, cal, totcal;
    //Initialize or input i.e. set variable values
    serv=4, SerCal=300,
    cal=SerCal/serv; //Cal is calories per serving
    //Map inputs -> outputs
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cookies;
    totcal=cookies*cal;
    
    //Display the outputs
    cout<<"You consumed "<<totcal<<" calories.";
    //Exit stage right or left!
    return 0;
}