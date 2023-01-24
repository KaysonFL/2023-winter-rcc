/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 18, 2023, 9:09 PM
 * Purpose:  Bank Charges
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
    int checks, lowfee,    //Number of Checks and Min Balance Fee
          autfee=10; //Automatic Bank Fee
    float Bal, Chkfee, Sum, finfee; //Balance, Check Fee, New Balance, final check fee
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>Bal>>checks;
    
    if (Bal<0){
        cout<<"Account is Overdrawn."<<endl; //Cannot accept Negative balance
    }
    if (checks<0){
        cout<<"Enter amount greater than 0."<<endl; //Cannot have negative checks
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

    //Exit stage right or left!
    return 0;
}