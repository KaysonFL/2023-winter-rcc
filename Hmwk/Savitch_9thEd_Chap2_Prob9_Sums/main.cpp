/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 16, 2023, 8:45 PM
 * Purpose:  Calculating Sums
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
    int number;
    int posSum, negSum;
    
    //Initialize or input i.e. set variable values
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    posSum=negSum=0;
    
    //Map inputs -> outputs
    cin>>number;
    posSum+=number>0?number:0;
    negSum+=number<0?number:0;
    cin>>number;
    posSum+=number>0?number:0;
    negSum+=number<0?number:0;
    cin>>number;
    posSum+=number>0?number:0;
    negSum+=number<0?number:0;
    cin>>number;
    posSum+=number>0?number:0;
    negSum+=number<0?number:0;
    cin>>number;
    posSum+=number>0?number:0;
    negSum+=number<0?number:0;
    cin>>number;
    posSum+=number>0?number:0;
    negSum+=number<0?number:0;
    cin>>number;
    posSum+=number>0?number:0;
    negSum+=number<0?number:0;
    cin>>number;
    posSum+=number>0?number:0;
    negSum+=number<0?number:0;
    cin>>number;
    posSum+=number>0?number:0;
    negSum+=number<0?number:0;
    cin>>number;
    posSum+=number>0?number:0;
    negSum+=number<0?number:0;
    
    //Display the outputs
    cout<<"Negative sum ="<<setw(4)<<negSum<<endl;
    cout<<"Positive sum ="<<setw(4)<<posSum<<endl;
    cout<<"Total sum    ="<<setw(4)<<posSum+negSum;

    //Exit stage right or left!
    return 0;
}