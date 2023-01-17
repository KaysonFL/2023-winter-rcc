/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 12, 2023, 11:56 PM
 * Purpose: Calculating military budget
 */

//System Libraries
#include <iostream> //Input Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    float milBdgt, fedBdgt, mlPrcnt;
    
    //Initialize Variables
    milBdgt=7.77e11f;   //Military Budget = 777 Billion
    fedBdgt=6.272e12f;  //Federal Budget = 6.272 Trillion
    mlPrcnt=(milBdgt/fedBdgt)*100; //Percentage of Mil Budget
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout<<"The Federal Budget is $6.272 Trillion and the Military"
            <<" Budget is $777 Billion."<<endl;
    cout<<"How much percent of the Federal Budget is used on the "
            <<"Military?"<<endl;
    cout<<endl;
    cout<<"In order to solve this we must divide the Military Budget by the"
            <<" Federal Budget then multiply by 100"<<endl;
    cout<<"777 Billion divided by 6.272 Trillion then multiplied by 100 "
            <<"is roughly "<<setprecision(4)<<mlPrcnt<<"%."<<endl;
    cout<<"So now we know the Military uses "
            <<setprecision(4)<<mlPrcnt<<"% of the "<<"Federal Budget."<<endl;
    cout<<endl;
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

