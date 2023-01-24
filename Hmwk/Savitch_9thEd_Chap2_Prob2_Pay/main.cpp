/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 16, 2023, 10:56 PM
 * Purpose:  Calculate Annual Pay
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>  //Fomatting Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    short Salary; //Initial Salary 
    float RetPay, AnnSal, //Retroactive Pay, New Annual Salary
          MonSal, inc=0.076; //New Monthly Salary & Pay Increase in Decimal
    
    //Initialize or input i.e. set variable values
    cout<<"Input previous annual salary."<<endl;
    cin>>Salary;
    //Map inputs -> outputs
    RetPay=inc*((Salary+AnnSal)/2.0);
    AnnSal=Salary+(Salary*inc);
    MonSal=AnnSal/12;
    
    //Display the outputs
    cout<<"Retroactive pay"<<setw(7)<<"= $"<<fixed<<setprecision(2)<<setw(7)<<RetPay<<endl;
    cout<<"New annual salary"<<setw(5)<<"= $"<<fixed<<setprecision(2)<<setw(7)<<AnnSal<<endl;
    cout<<"New monthly salary"<<setw(4)<<"= $"<<fixed<<setprecision(2)<<setw(7)<<MonSal;
    
    //Exit stage right or left!
    return 0;
}