/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 22, 2023, 9:33 PM
 * Purpose:  Rectangle Pattern
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int input;
    char letter;
    //Initialize or input i.e. set variable values
    cin>>input>>letter;
    //Map inputs -> outputs
    
    //Display the outputs
    if (input>15||input<=0){
        cout<<"Number must be between 0 and 15.";
    }
    for (int i=0; i<input; i++){
        for (int j=1; j<=input; j++){
            cout<<letter;
        }
        if(i<input-1){
            cout<<endl;
        }
    }
    //Exit stage right or left!
    return 0;
}