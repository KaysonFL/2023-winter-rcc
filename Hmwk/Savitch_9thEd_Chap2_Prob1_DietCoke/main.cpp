/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 16, 2023, 7:06 PM
 * Purpose:  Diet Coke
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVLBSG=45359.2/100; //Converts lbs to grams CNVLBSG
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float DietWt, MsMs, CanMs, //Dieter desired weight, mouse mass, coke can mass
          MsDeth, WtDeth, dsDeth, //How much sweetener kills mouse, how much soda kills person
          SwtCan, SwtCon; //Amt of sweetener in can grams, concentration of sweetener in coke 
    int CanAmt;
    
    //Initialize or input i.e. set variable values
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>DietWt;
    MsMs=35;
    MsDeth=5;
    CanMs=350;
    SwtCon=0.001f;
    
    //Map inputs -> outputs
    WtDeth=MsDeth/MsMs*DietWt;
    dsDeth=WtDeth*CNVLBSG;
    SwtCan=CanMs*SwtCon;
    CanAmt=dsDeth/SwtCan;
    //Display the outputs
    
    
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<CanAmt<<" cans";
    
    //Exit stage right or left!
    return 0;
}