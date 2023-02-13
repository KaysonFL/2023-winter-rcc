/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on February 2, 2023 7:20 AM
 * Purpose: Card-Jitsu
 */

//System Libraries
#include <iostream> //Input Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void instr();
//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    char inst;
    //Initialize Variables
    
    //Map/Process the Inputs -> Outputs
    cout<<"Welcome to Card-Jitsu!"<<endl;
    cout<<"To view the games instructions press I."<<endl<<
            "To continue to the game press any key."<<endl;
    cin>>inst;
    
    //Beginning of Instructions
    if (inst=='I'||inst=='i'){
      instr();
      }
    else{
        
    }
    //End of Instructions
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void instr(){
    cout<<"How to play Card-Jitsu:"<<endl
          <<"Card-Jitsu is a card game that focuses on three elements: " 
            "Fire, Snow, and Water."<<endl
          <<"Each card contains an element and a number 1-12."<<endl
          <<"Fire beats Snow, Snow beats Water, and Water beating Fire."<<endl
          <<"If both players happen to choose the same element,"
            " the card with the higher number will win."<<endl
          <<"First to three wins is the winner."<<endl;
}