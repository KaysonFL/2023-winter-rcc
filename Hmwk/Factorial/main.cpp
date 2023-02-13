/* 
 * File: main.cpp
 * Author: Kayson Lopez
 * Created on January 30, 2:12  PM
 * Purpose:  Calculating factorials using a function
 */
 
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n, fact=1;
    //Initialize Variables
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
    cout<<"Input the number for the function."<<endl;
    cin>>n;
    fact=fctrl(n);
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<n<<"! = "<<fact;
    //Exit stage right!
    return 0;
}
int fctrl(int n){
    
    for(int i=1;i<=n;i++){
        return n*fctrl(n-1);
    }
    
}