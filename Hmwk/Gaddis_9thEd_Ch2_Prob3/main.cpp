/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 5, 2023, 4:45 AM
 * Purpose: Program that computes sales tax
 */

//System Libraries
#include <iostream> //Input Output Library
using namespace std;


int main(int argc, char** argv) {
    
    
    float Prch, StTax, CtTax, TotTax ;
    
    Prch=95.0f, StTax=0.02f, CtTax=0.04f, TotTax=StTax+CtTax ;
    
    cout<<"If the State Tax is 2% and County Tax is 4% then a $95 purchase"
            " will have a total sales tax of $"<<Prch*TotTax<<endl;
    
    return 0;
}

