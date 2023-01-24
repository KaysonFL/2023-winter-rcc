/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 22, 2023, 9:45 PM
 * Purpose:  Display the Largest and Smallest
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
    int num, min, max;
    const int EndVal=-99;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin>>num;
    min=max=num;
    while(num != EndVal){
        if (num<min){
            min=num;
        }
        if (num>max){
            max=num;
        }
        cin>>num;
    }
    //Display the outputs
    cout<<"Smallest number in the series is "<<min<<endl;
    cout<<"Largest  number in the series is "<<max;
    //Exit stage right or left!
    return 0;
}