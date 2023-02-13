/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on February 5, 2023 10:20 AM
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
    string card1,card2,card3,card4,card5; //Cards players will select from
    string file1, file2;    //Files containing the cards
    
    //Initialize Variables
    nCards=36;
    vC1=rand()%nCards+1;
    //Initialize File Parameters
    file1="card.dat";
    input.open(file1.c_str(),ios::in);
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
    
    //Display Outputs of Player 1 Cards
    cout<<setw(4)<<card1
        <<setw(4)<<card2
        <<setw(4)<<card3
        <<setw(4)<<card4
        <<setw(4)<<card5<<endl;
    cin>>player1;
       
    input.close();
    
    //Player 2 Deck of Cards!
    cout<<"Player 2:";
    file2="card2.dat";
    input.open(file1.c_str(),ios::in);
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
    string cardIn2;
    for(int card=1;card<=nCards;card++){
        input>>cardIn2;
        if(vC1==card)card1=cardIn2;
        if(vC2==card)card2=cardIn2;
        if(vC3==card)card3=cardIn2;
        if(vC4==card)card4=cardIn2;
        if(vC5==card)card5=cardIn2;
    }
    
    //Display Outputs
    cout<<setw(4)<<card1
        <<setw(4)<<card2
        <<setw(4)<<card3
        <<setw(4)<<card4
        <<setw(4)<<card5<<endl;
    
    cin>>player2;
    first=(player1=="F1"||player1=="F2"||player1=="F2"||player1=="F3"||
           player1=="F4"||player1=="F5"||player1=="F6"||player1=="F7"||
           player1=="F8"||player1=="F9"||player1=="F10"||player1=="F11"||player1=="F12")?"Fire":
          (player1=="S1"||player1=="S2"||player1=="S2"||player1=="S3"||
           player1=="S4"||player1=="S5"||player1=="S6"||player1=="S7"||
           player1=="S8"||player1=="S9"||player1=="S10"||player1=="S11"||player1=="F12")?"Snow":"Water";
            
    second=(player2=="F1"||player2=="F2"||player2=="F2"||player2=="F3"||
           player2=="F4"||player2=="F5"||player2=="F6"||player2=="F7"||
           player2=="F8"||player2=="F9"||player2=="F10"||player2=="F11"||player2=="F12")?"Fire":
          (player2=="S1"||player2=="S2"||player2=="S2"||player2=="S3"||
           player2=="S4"||player2=="S5"||player2=="S6"||player2=="S7"||
           player2=="S8"||player2=="S9"||player2=="S10"||player2=="S11"||player2=="S12")?"Snow":"Water";
    //Display the Winner!
    
    //SNOW VS FIRE STARTS HERE
    if(first=="Fire"&&second=="Snow"){
        cout<<first<<" melts "<<second<<endl<<
                "Player 1 Wins.";
    }
    else if (first=="Snow"&&second=="Fire"){
        cout<<second<<" melts "<<first<<endl<<
                "Player 2 Wins.";
    }//Snow vs Fire Ends Here
    
    //FIRE VS WATER STARTS HERE
    if(first=="Water"&&second=="Fire"){
        cout<<first<<" extinguishes "<<second<<endl<<
                "Player 1 Wins.";
    }
    else if (first=="Fire"&&second=="Water"){
        cout<<second<<" extinguishes "<<first<<endl<<
                "Player 2 Wins.";
    }//Fire Vs Water Ends Here
    
    //SNOW VS WATER STARTS HERE
    if(first=="Snow"&&second=="Water"){
        cout<<first<<" freezes "<<second<<endl<<
                "Player 1 Wins.";
    }
    else if (first=="Water"&&second=="Snow"){
        cout<<second<<" freezes "<<first<<endl<<
                "Player 2 Wins.";
    }//Snow vs Water Ends Here
    
    //If Players Choose the same element:
    if (first=="Fire"&&second=="Fire"){
        cout<<"Draw.";
    }
    if (first=="Snow"&&second=="Snow"){
        cout<<"Draw.";
    }
    if (first=="Water"&&second=="Water"){
        cout<<"Draw.";
    }
    
    return 0;
}

