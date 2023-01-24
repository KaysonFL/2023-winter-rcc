/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 18, 2023, 2:49 AM
 * Purpose:  Sorting Names
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string n1, n2, n3;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>n1>>n2>>n3;
    
    if (n1<n2&&n2<n3){
        cout<<n1<<endl<<n2<<endl<<n3;
    }
    if (n2<n3&&n3<n1){
        cout<<n2<<endl<<n3<<endl<<n1;
    }
    if (n3<n1&&n1<n2){
        cout<<n3<<endl<<n1<<endl<<n2;
    }
    if (n1<n3&&n3<n2){
        cout<<n1<<endl<<n3<<endl<<n2;
    }
    if (n3<n2&&n2<n1){
        cout<<n3<<endl<<n2<<endl<<n1;
    }
    //if (n3<n1)
    //Display the outputs

    //Exit stage right or left!
    return 0;
}