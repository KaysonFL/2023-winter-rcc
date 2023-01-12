/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 9, 2023, 2:21 AM
 * Purpose: Determine Annual Pay
 */

//System Libraries
#include <iostream> //Input Output Library
using namespace std;

int main(int argc, char** argv) {
        
    
    float payAmt, payPer,annPay; //Employees pay rate, pay period, and annual pay
    
    payAmt = 2200.0, payPer = 26, annPay = payAmt*payPer;
    
    cout<<"If an employee earns $2200 per pay period and has 26 pay periods, "
            "the employees total annual pay is $"<<annPay<<endl;
    
    return 0;
}

