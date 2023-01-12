/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 9, 2023, 3:35 AM
 * Purpose: Create a Triangle Pattern
 */

//System Libraries
#include <iostream> //Input Output Library
using namespace std;


int main(int argc, char** argv) {
   
    char lt;  //Letter to create the Triangle Pattern
    
    cout<<"Type in a letter to compose a Triangle Pattern"<<endl;
    cout<<"Use characters a-z or A-Z"<<endl;
    cin>>lt;
    
    cout<<"Our Triangle using letter "<<lt<<endl;
    cout<<"   "<<lt<<endl;
    cout<<"  "<<lt<<lt<<lt<<endl;
    cout<<" "<<lt<<lt<<lt<<lt<<lt<<endl;
    cout<<lt<<lt<<lt<<lt<<lt<<lt<<lt<<endl;
    
    return 0;
}

