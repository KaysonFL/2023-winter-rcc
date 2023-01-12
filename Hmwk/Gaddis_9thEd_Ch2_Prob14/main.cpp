/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 11, 2023, 12:14 AM
 * Purpose: Distance per Tank of Gas
 */

//System Libraries
#include <iostream> //Input Output Library
using namespace std;


int main(int argc, char** argv) {
   
    float Gal, TDist, TGal, HDist, HGal; 
    //Gallons, Town Distance/Miles per gal, Highway Distance/Miles per gal
    
    Gal=20, TGal=23.5, HGal=28.9;
    TDist=TGal*Gal, HDist=Gal*HGal;
    
    
    //Display Inputs/Outputs
    cout<<"In a town, a car with a 20 gallon gas tank can drive "
            <<TDist<<" miles per gallon"<<endl;
    cout<<"On a highway, a car with a 20 gallon gas tank can drive "
            <<HDist<<" miles per gallon"<<endl;
    
    return 0;
}

