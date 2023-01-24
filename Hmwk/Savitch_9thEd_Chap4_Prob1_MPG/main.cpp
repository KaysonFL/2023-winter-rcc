/* 
 * File:   
 * Author: Kayson Lopez
 * Created on January 22, 2023
 * Purpose:  MPG Conversion
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
    float lit, miles, mpg, LTG=0.264179; //miles per gallon, Liters to gallons
    char aga; 
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do{
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>lit;
        cout<<endl;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles;
        cout<<endl;
        cout<<"miles per gallon:"<<endl;
        mpg=miles/(lit*LTG);
        cout<<setprecision(2)<<fixed<<mpg<<endl;
        cout<<"Again:"<<endl;
        cin>>aga;
        
    if(aga=='y'){
        cout<<endl;
        }
    }while(aga=='y');
    //Display the outputs

    //Exit stage right or left!
    return 0;
}