/* 
 * Author: Kayson Lopez
 * Created on January 31, 2023 11:16 PM 
 * Purpose:  Collatz Sequence
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Function Prototype
float psntVal(float, float, int);
//Execution begins here at main 
int main(int argc, char** argv){
    //Declare Variables
    int years; 
    float rate,future; //Annual Rate and Future Value
    //Initialize Variables
    
    //Map/Process the Inputs -> Outputs
    cout<<"This is a Present Value Computation"<<endl;
    cout<<"Input the Future Value in Dollars"<<endl;
    cin>>future;
    cout<<"Input the Number of Years"<<endl;
    cin>>years;
    cout<<"Input the Interest Rate %/yr"<<endl;
    cin>>rate;
    rate=rate*0.01;
   
    //Display Inputs/Outputs
    cout<<"The Present Value = $"<<fixed<<setw(6)<<setprecision(2)<<showpoint<<psntVal(future,rate,years);
    
    //Exit the Program
    return 0;
}
float psntVal(float future, float rate, int years){   
    float p;//This is the present Value
    p=future/pow(1+rate,years);
    return p;
}
