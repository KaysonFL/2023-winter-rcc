/* 
 * File: main.cpp
 * Author: Kayson Lopez
 * Date: 1/12/23
 * Purpose: More Test Output
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    float number;
    //Initialize or input data here
    
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    
    //Format and display outputs here
    cin>>number;
    cout<<setw(9)<<number
    <<fixed<<showpoint<<setprecision(1)<<setw(10)<<number
    <<fixed<<showpoint<<setprecision(2)<<setw(10)<<number<<endl;
    cin>>number;
    cout<<noshowpoint<<setprecision(0)<<setw(9)<<number
    <<fixed<<showpoint<<setprecision(1)<<setw(10)<<number
    <<fixed<<showpoint<<setprecision(2)<<setw(10)<<number<<endl;
    cin>>number;
    cout<<noshowpoint<<setprecision(0)<<setw(9)<<number
    <<fixed<<showpoint<<setprecision(1)<<setw(10)<<number
    <<fixed<<showpoint<<setprecision(2)<<setw(10)<<number<<endl;
    cin>>number;
    cout<<noshowpoint<<setprecision(0)<<setw(9)<<number
    <<fixed<<showpoint<<setprecision(1)<<setw(10)<<number
    <<fixed<<showpoint<<setprecision(2)<<setw(10)<<number;
    
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}