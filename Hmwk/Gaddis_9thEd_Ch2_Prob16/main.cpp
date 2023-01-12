/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 9, 2023, 4:02 AM
 * Purpose: Create a Diamond Pattern
 */

//System Libraries
#include <iostream> //Input Output Library
using namespace std;


int main(int argc, char** argv) {
   
    char lt;  //Letter to create the Diamond Pattern
    
    cout<<"Type in a letter to compose a Diamond Pattern"<<endl;
    cout<<"Use characters a-z or A-Z"<<endl;
    cin>>lt;
    
    cout<<"Our Diamond using letter "<<lt<<endl;
    cout<<"   "<<lt<<endl;
    cout<<"  "<<lt<<lt<<lt<<endl;
    cout<<" "<<lt<<lt<<lt<<lt<<lt<<endl;
    cout<<lt<<lt<<lt<<lt<<lt<<lt<<lt<<endl;
    cout<<" "<<lt<<lt<<lt<<lt<<lt<<endl;
    cout<<"  "<<lt<<lt<<lt<<endl;
    cout<<"   "<<lt<<endl;
    return 0;
}

