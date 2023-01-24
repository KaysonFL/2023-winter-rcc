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
    float lit, miles, mpg1, mpg2, LTG=0.264179; //miles per gallon, Liters to gallons
    char aga; 
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do{
        cout<<"Car 1"<<endl;                                //Car 1 Information
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>lit;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles;
        cout<<"miles per gallon: ";
        mpg1=miles/(lit*LTG);
        cout<<setprecision(2)<<fixed<<mpg1<<endl;
        cout<<endl;
        cout<<"Car 2"<<endl;                                //Car 2 Information
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>lit;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles;
        cout<<"miles per gallon: ";
        mpg2=miles/(lit*LTG);
        cout<<setprecision(2)<<fixed<<mpg2<<endl;
        cout<<endl;
        
    if (mpg1>mpg2){                                         //Output if Car 1 is more efficient
        cout<<"Car 1 is more fuel efficient"<<endl;
        cout<<endl;
    }
    if (mpg2>mpg1){                                         //Output if Car 2 is more efficient
        cout<<"Car 2 is more fuel efficient"<<endl;
        cout<<endl;
    }
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