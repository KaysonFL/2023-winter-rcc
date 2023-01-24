/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 22, 2023, 8:48 PM
 * Purpose:  Displaying a Pattern
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
    int input;
    //Initialize or input i.e. set variable values
    cin>>input;
    //Map inputs -> outputs
    for (int i=0;i<input;i++){
        
        for(int j=0;j<=i;j++){
            cout<<"+";
        }
        cout<<endl;
        if(i!=input){
            cout<<endl;
        }
       
    }
    for (int i=0;i<input;i++){
        
        for(int j=input;j>i;j--){
            cout<<"+";
        }
        
        if(i!=input-1){
            cout<<endl;
            cout<<endl;
        }
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}