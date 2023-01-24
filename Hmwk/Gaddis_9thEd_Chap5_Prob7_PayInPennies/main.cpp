/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 22, 2023, 11:16 PM
 * Purpose:  Payment in Pennies
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
    int penny=1, prft=0, days;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin>>days;
    
    if(days<1){
        cout<<"Days cannot be less than 1"<<endl;
    }
    else{
        for(int i=0; i<days; i++){
            prft+=penny;
            penny*=2;
        }
        cout<<"Pay = $"<<setw(4)<<fixed<<setprecision(2)<<prft*0.01;
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}