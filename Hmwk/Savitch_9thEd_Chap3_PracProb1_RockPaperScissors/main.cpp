/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 18, 2023 6:13 PM
 * Purpose:  Rock Paper Scissors
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char Player1, Player2; 
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>Player1>>Player2;
    if ((Player1=='R'||Player1=='r') && (Player2=='P'||Player2=='p')) {
        cout<<"Paper covers rock.";
    }
    else if ((Player1=='R'||Player1=='r') && (Player2=='S'||Player2=='s')){
        cout<<"Rock breaks scissors.";
    }
    else if ((Player1=='R'||Player1=='r') && (Player2=='R'||Player2=='r')){
        cout<<"Nobody wins.";
    }
    else if ((Player1=='P'||Player1=='p') && (Player2=='S'||Player2=='s')){
        cout<<"Scissors cuts paper.";
    }
    else if ((Player1=='P'||Player1=='p') && (Player2=='R'||Player2=='r')){
        cout<<"Paper covers rock.";
    }
    else if ((Player1=='P'||Player1=='p') && (Player2=='P'||Player2=='p')){
        cout<<"Nobody wins.";
    }
    else if ((Player1=='S'||Player1=='s') && (Player2=='P'||Player2=='p')){
        cout<<"Scissors cuts paper.";
    }
    else if ((Player1=='S'||Player1=='s') && (Player2=='R'||Player2=='r')){
        cout<<"Rock breaks scissors.";
    }
    else if ((Player1=='S'||Player1=='s') && (Player2=='S'||Player2=='s')){
        cout<<"Nobody wins.";
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

