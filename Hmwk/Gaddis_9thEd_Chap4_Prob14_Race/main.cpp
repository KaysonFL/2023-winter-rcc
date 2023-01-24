/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
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
    string name1, name2, name3;
    float time1, time2, time3;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>name1>>time1>>name2>>time2>>name3>>time3;
    
    if (time1<0, time2<0, time3<0){
        cout<<"Invalid times.";
    }
    if (time1<time2&&time2<time3){
        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3;
    }
    if (time3<time1&&time1<time2){
        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2;
    }
    if (time2<time1&&time1<time3){
        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3;
    }
    if (time3<time2&&time2<time1){
        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1;
    }
    if (time1<time3&&time3<time2){
        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2;
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}