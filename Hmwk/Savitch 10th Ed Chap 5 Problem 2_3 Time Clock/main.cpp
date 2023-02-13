/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 31, 2023 12:45 PM
 * Purpose:  Time Clock
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void AftWt(int, int, char, int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed    //if minutes >60; hours++ maybe???
    
    //Declare Variables
    int hrs, mins, wait;
    char ampm, run;
    
    //Initialize or input i.e. set variable values
    do{
    cin>>hrs>>mins>>ampm>>wait>>run;
    cout<<"Enter hour:"<<endl<<endl;
    cout<<"Enter minutes:"<<endl<<endl;                     //Prompting User for Inputs
    cout<<"Enter A for AM, P for PM:"<<endl<<endl;
    cout<<"Enter waiting time:"<<endl<<endl;
    
    AftWt(hrs, mins, ampm, wait);
    cout<<"Again:"<<endl;
    if(run=='y'|run=='Y')
    cout<<endl;
    }while(run=='y'||run=='Y');
    
    //Map inputs -> outputs

    
    //Display the outputs
    
    //Exit stage right or left!
    return 0;
}
void AftWt(int hrs, int mins, char ampm, int wait){
    cout<<"Current time = ";
    if (hrs < 10){
        cout<<"0";
    }
    cout<<hrs<<":";
    if (mins < 10){
        cout<<"0";
    }
    cout<<mins;
    if (ampm == 'P'){
        cout<<" PM\n";
    }
    else if (ampm == 'A'){
        cout<<" AM\n";
    }
    int timeInMin = (hrs * 60) + mins;
    if ((timeInMin + wait) >= 719){
        ampm = (ampm == 'A') ? ('P') : ('A');
    }
    wait = timeInMin + wait;
    int newHrs = wait / 60;
    int newMins = wait % 60;
    if (wait > 779){
        wait = 60;
    }
    newHrs = (newHrs > 12) ? (newHrs - 12) : (newHrs);
    cout<<"Time after waiting period = ";
    if (newHrs < 10){
        cout<<"0";
    }
    cout<<newHrs<<":";
    if (newMins < 10){
        cout<<"0";
    }
    cout<<newMins;
    if (ampm == 'P'){
        cout<<" PM\n"<<endl;
    }
    else if (ampm == 'A'){
        cout<<" AM\n"<<endl;
    }
}