/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 18, 2023, 7:58 PM
 * Purpose:  Book Club Points
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
    short books, points;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>books;
    if (books==0){
        points=0;
        cout<<"Books purchased ="<<setw(3)<<books<<endl;
        cout<<"Points earned   ="<<setw(3)<<points;
    }
    else if (books==1){
        points=5;
        cout<<"Books purchased ="<<setw(3)<<books<<endl;
        cout<<"Points earned   ="<<setw(3)<<points;
    }
    else if (books==2){
        points=15;
        cout<<"Books purchased ="<<setw(3)<<books<<endl;
        cout<<"Points earned   ="<<setw(3)<<points;
    }
    else if (books==3){
        points=30;
        cout<<"Books purchased ="<<setw(3)<<books<<endl;
        cout<<"Points earned   ="<<setw(3)<<points;
    }
    else if (books>=4){
        points=60;
        cout<<"Books purchased ="<<setw(3)<<books<<endl;
        cout<<"Points earned   ="<<setw(3)<<points;
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}