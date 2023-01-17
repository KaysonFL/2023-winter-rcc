/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 12, 2023, 5:49 AM
 * Purpose: Fuel Cost Optimization
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
    
    //Declare Variables         //All Inputs:
    float MPG=16,               //Miles Per Gallon 
          GasSize=22,           //Size of Gas Tank Gallons
          FGR=0.25,             //Fuel Gage Reading
          Dist1=10, Dist2=0.5,  //Distance from Station 1 and 2 miles
          PPG1=3.85, PPG2=3.95; //Price Per Gallon from each station (1 and 2)
    
    float FllTnk,               //To Fill the Tank in Gallons
          GasUse1, GasUse2,     //Gas Used to get to station in gallons
          Cost1, Cost2;         //Cost to Fill Gas Tank
    //Initialize Variables
    FllTnk=GasSize*(1-FGR);
    GasUse1=Dist1/MPG;
    GasUse2=Dist2/MPG;
    Cost1=PPG1*(FllTnk+GasUse1);
    Cost2=PPG2*(FllTnk+GasUse2);
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout<<"Which gas station is better to fill gas at?"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"Car Information:"<<endl;
    cout<<"The car in this example uses "<<MPG<<" miles per gallon."<<endl;
    cout<<"It has a gas tank size of "<<GasSize<<" gallons and takes"<<endl;
    cout<<FllTnk<<" gallons to fill the tank."<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"Station 1:"<<endl;
    cout<<"It takes "<<GasUse1<<" miles to get to this station."<<endl;
    cout<<"The price per gallon is $"<<PPG1<<"."<<endl;
    cout<<"The total cost for gas at this station is $"
            <<setprecision(4)<<Cost1<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"Station 2:"<<endl;
    cout<<"It takes "<<GasUse2<<" miles to get to this station."<<endl;
    cout<<"The price per gallon is $"<<PPG2<<"."<<endl;
    cout<<"The total cost for gas at this station is $"
            <<setprecision(4)<<Cost2<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"It's best to get gas at Station 2."<<endl;
    
    return 0;
}

