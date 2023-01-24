/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 22, 2023 10:13 PM
 * Purpose:  Calculating inflation on items
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
    float current, old, diff, rate; //Current Price, Old Price, Difference in price, Inflation rate
    char aga;                       
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do{
        cout<<"Enter current price:"<<endl;     //Determining Values of Item
        cin>>current;
        cout<<"Enter year-ago price:"<<endl;
        cin>>old;

        diff=current-old;                       //Calculating the difference
        rate=(diff/old)*100;                    //Calculating the inflation rate
        
        cout<<"Inflation rate: "<<fixed<<showpoint<<setprecision(2)<<rate<<"%"<<endl;
        cout<<endl;
        
        cout<<"Again:"<<endl;                   //If the user wants to calculate again
        cin>>aga;
        if(aga=='y'||aga=='Y'){
            cout<<endl;
        }
    }while (aga=='y'||aga=='Y');
    //Display the outputs

    //Exit stage right or left!
    return 0;
}