/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 16, 2023, 9:02 PM
 * Purpose:  Calculate maximum capacity
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    short value1, value2, lescap, morcap;
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>value1>>value2;
    lescap=value1-value2; //If number of people is less than max capacity
    morcap=value2-value1; //If number of people is more than max capacity
    if (value1<value2){
        cout<<"Meeting cannot be held."<<endl;
        cout<<"Reduce number of people by "<<morcap<<" to avoid fire violation.";
    } else { cout<<"Meeting can be held."<<endl;
             cout<<"Increase number of people by "<<lescap<<" will be allowed without violation.";
    }    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}