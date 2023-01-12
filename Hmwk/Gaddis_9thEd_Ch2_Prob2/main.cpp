/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 9, 2023, 1:03 AM
 * Purpose: Sales Prediction
 */

//System Libraries
#include <iostream> //Input Output Library
using namespace std;

int main(int argc, char** argv) {
    
    float TotSls , EtPrct, EtSls; //Total Sales, East % of sales, East $ sales
    
    TotSls = 8.6e6f, EtPrct = 0.58;
    
    EtSls = TotSls * EtPrct;
    
    cout<<"If a company makes $8.6 million in sales and the East division "
            "generates 58%, then the East division will generate $ "<<EtSls<<endl;
    
    return 0;
}

