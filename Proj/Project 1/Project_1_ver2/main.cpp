/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on February 3, 2023 9:30 AM
 * Purpose: Card-Jitsu
 */

//System Libraries
#include <iostream> //Input Output Library
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
     srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    char con;   //Prompt players to continue to game
    string player1, player2, first, second;  //Player 1 and 2 Input         
    ifstream inp; //To read instructions from file
    string instru; //To output string of text for instructions
    unsigned short vC1,vC2,vC3,vC4,vC5;
    unsigned char nCards;   //number of cards
    fstream input;
    string card1,card2,card3,card4,card5, //Cards players will select from
            Fire, Water, Snow;
    string file1, file2;    //Files containing the cards
    
    //Initialize File Parameters
    file1="card.dat";
    input.open(file1.c_str(),ios::in);
    //Initialize Variables
    nCards=36;
    vC1=rand()%nCards+1;
    //Map/Process the Inputs -> Outputs
    cout<<"Welcome to Card-Jitsu!"<<endl;
    inp.open("Instructions.txt");
        while (inp>>instru){
            cout<<instru<<" ";}
    cout<<endl;
    cout<<"To continue to the game press any key."<<endl;
    cin>>con;
    cout<<"Player 1: ";
    //Generate Player 1 Cards
        do{
        vC2=rand()%nCards+1;
    }while(vC1==vC2);
    //Order the first 2
    if(vC1>vC2){
        unsigned short temp=vC1;
        vC1=vC2;
        vC2=temp;
    }
    //Value for Card 3
    do{
        vC3=rand()%nCards+1;
    }while(vC1==vC3||vC2==vC3);
    //Order the first 3
    if(vC2>vC3){
        unsigned short temp=vC2;
        vC2=vC3;
        vC3=temp;
    }
    if(vC1>vC2){
        unsigned short temp=vC1;
        vC1=vC2;
        vC2=temp;
    }
    //Value for Card 4
    do{
        vC4=rand()%nCards+1;
    }while(vC1==vC4||vC2==vC4||vC3==vC4);
    //Order the first 4
    if(vC3>vC4){
        unsigned short temp=vC3;
        vC3=vC4;
        vC4=temp;
    }
    if(vC2>vC3){
        unsigned short temp=vC2;
        vC2=vC3;
        vC3=temp;
    }
    if(vC1>vC2){
        unsigned short temp=vC1;
        vC1=vC2;
        vC2=temp;
    }
    //Value for Card 5
    do{
        vC5=rand()%nCards+1;
    }while(vC1==vC5||vC2==vC5||vC3==vC5||vC4==vC5);
    //Order the first 5
    if(vC4>vC5){
        unsigned short temp=vC4;
        vC4=vC5;
        vC5=temp;
    }
    if(vC3>vC4){
        unsigned short temp=vC3;
        vC3=vC4;
        vC4=temp;
    }
    if(vC2>vC3){
        unsigned short temp=vC2;
        vC2=vC3;
        vC3=temp;
    }
    if(vC1>vC2){
        unsigned short temp=vC1;
        vC1=vC2;
        vC2=temp;
    }
    
    //Pull cards from the file
    string cardIn;
    for(int card=1;card<=nCards;card++){
        input>>cardIn;
        if(vC1==card)card1=cardIn;
        if(vC2==card)card2=cardIn;
        if(vC3==card)card3=cardIn;
        if(vC4==card)card4=cardIn;
        if(vC5==card)card5=cardIn;
    }
    
    //Display Outputs
    cout<<setw(4)<<card1
        <<setw(4)<<card2
        <<setw(4)<<card3
        <<setw(4)<<card4
        <<setw(4)<<card5<<endl;
    cin>>player1;
    
    //Exit stage right!
    input.close();
    
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

