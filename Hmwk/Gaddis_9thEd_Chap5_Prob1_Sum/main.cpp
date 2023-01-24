/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 22, 2023 7:43 PM
 * Purpose:  Sum the Sequence
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
    int num1,num2,num3;
    //Initialize or input i.e. set variable values
    num1=0;
    num2=1;
    cin>>num3;
    //Map inputs -> outputs
    if (num3>0){
        for(int i=0; i<num3; i++){
            num1+=num2;
            num2+=1;
        }
        cout<<"Sum = "<<num1;
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}