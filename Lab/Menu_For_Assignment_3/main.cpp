/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 22, 2023, 3:55 AM
 * Purpose:  Menu Template without Loops
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Random number functions
#include <ctime>     //Time to set Random number seed
#include <cstring>   //String Object
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    char chose;
    
    //Initialize Variables
    cout<<"This program presents a menu of options"<<endl;
    cout<<"0 To run Problem Gaddis Sort Names"<<endl;
    cout<<"1 To run Problem Gaddis Book Worm Points"<<endl;
    cout<<"2 To run Problem Gaddis Bank Charges"<<endl;
    cout<<"3 To run Problem Gaddis Race"<<endl;
    cout<<"4 To run Problem Gaddis ISP"<<endl;
    cout<<"5 To run Problem Savtich Rock Paper Scissors"<<endl;
    cout<<"6 To run Problem Savtich Compatible Signs"<<endl;
    cin>>chose;
    
    //Map/Process the Inputs -> Outputs
    switch(chose){
        case '0':{
            //Declare Variables
            string n1, n2, n3;
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            cout<<"Sorting Names"<<endl;
            cout<<"Input 3 names"<<endl;
            cin>>n1>>n2>>n3;
    
            if (n1<n2&&n2<n3){
                cout<<n1<<endl<<n2<<endl<<n3;
        }
            if (n2<n3&&n3<n1){
                cout<<n2<<endl<<n3<<endl<<n1;
        }
            if (n3<n1&&n1<n2){
                cout<<n3<<endl<<n1<<endl<<n2;
        }
            if (n1<n3&&n3<n2){
                cout<<n1<<endl<<n3<<endl<<n2;
        }
            if (n3<n2&&n2<n1){
                cout<<n3<<endl<<n2<<endl<<n1;
        }
            break;
        }
        case '1':{
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
            break;
        }
        case '2':{
            //Declare Variables
            int checks, lowfee,    //Number of Checks and Min Balance Fee
                autfee=10; //Automatic Bank Fee
            float Bal, Chkfee, Sum, finfee; 
            //Balance, Check Fee, New Balance, final check fee
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            cout<<"Monthly Bank Fees"<<endl;
            cout<<"Input Current Bank Balance and Number of Checks"<<endl;
            cin>>Bal>>checks;
    
            if (Bal<0){
            cout<<"Account is Overdrawn."<<endl;//Cannot accept Negative balance
        }
            if (checks<0){
            cout<<"Enter amount greater than 0."<<endl; 
            //Cannot have negative checks
        }
            if (checks<20){
            Chkfee=.10;
        }
            if (checks>=20&&checks<40){
            Chkfee=.08;
        }
            if (checks>=40&&checks<60){
            Chkfee=.06;
        }
            if (checks>=60){
            Chkfee=.04;
        }
    
        finfee=checks*Chkfee;
        Sum=Bal-(finfee+autfee);
        lowfee=0;
        
            if (Bal<400){
            lowfee=15;
        Sum=Bal-(finfee+lowfee+autfee);
                        }
    //Display the outputs
    cout<<"Balance"<<setw(6)<<"$"<<setw(9)<<fixed<<setprecision(2)<<Bal<<endl;
    cout<<"Check Fee"<<setw(4)<<"$"<<setw(9)<<fixed<<setprecision(2)<<finfee<<endl;
    cout<<"Monthly Fee"<<setw(2)<<"$"<<setw(9)<<fixed<<setprecision(2)<<static_cast<float>(autfee)<<endl;
    cout<<"Low Balance"<<setw(2)<<"$"<<setw(9)<<fixed<<setprecision(2)<<static_cast<float>(lowfee)<<endl;
    cout<<"New Balance"<<setw(2)<<"$"<<setw(9)<<fixed<<setprecision(2)<<Sum;
            break;
        }
        case '3':{
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
            }
            break;
            
        case '4':{
            //Declare Variables
            char pack; //Package chosen by customer
            float hours, cost, //Hours and Cost per month
                pkA=9.95, pkB=14.95, pkC=19.95; //Packages and Cost
    
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            cout<<"ISP Bill"<<endl;
            cout<<"Input Package and Hours"<<endl;
            cin>>pack>>hours;
    
            if (hours>744){
            cout<<"Invalid Hours. Please try again.";
        }
            if (pack=='A'){
            if (hours>10){
            cost=pkA+((hours-10)*2.00);
        }
            else{
            cost=pkA*hours;
        }
            }
            if (pack=='B'){
            if (hours>10){
            cost=pkB+((hours-20)*1.00);
        }
            else{
            cost=pkB*hours;
        }
            }
            if (pack=='C'){
            cost=pkC;
        }
            //Display the outputs
            cout<<"Bill = $"<<setw(6)<<cost;
                }
            break;
            
        case '5':{
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
        }
        break;
        
        case '6':{
        //Declare Variables
    string sign1, sign2, first, second;

    //Initialize Variables
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
    cin >> sign1 >> sign2;

    //Map inputs -> output
    
    first = (sign1 == "Aries"  || sign1 == "Leo"     || sign1 == "Sagittarius")   ? "Fire" : //Determines type of sign
            (sign1 == "Taurus" || sign1 == "Virgo"   || sign1 == "Capricorn")     ? "Earth":
            (sign1 == "Gemini" || sign1 == "Libra"   || sign1 == "Aquarius")      ? "Air"  : "Water";
    
    second = (sign2 == "Aries"  || sign2 == "Leo"     || sign2 == "Sagittarius")   ? "Fire" : //Determines type of sign
            (sign2 == "Taurus" || sign2 == "Virgo"   || sign2 == "Capricorn")     ? "Earth":
            (sign2 == "Gemini" || sign2 == "Libra"   || sign2 == "Aquarius")      ? "Air"  : "Water";

    //Display Output
    
    first == second
        ? cout << sign1 << " and " << sign2 << " are compatible " << first << " signs."
        : cout << sign1 << " and " << sign2 << " are not compatible signs.";
        }
        break;
        
                
    }
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}