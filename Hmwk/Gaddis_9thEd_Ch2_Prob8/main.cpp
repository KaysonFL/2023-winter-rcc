/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 10, 2023, 10:27 PM
 * Purpose: Displaying a total purchase
 */

//System Libraries
#include <iostream> //Input Output Library
using namespace std;


int main(int argc, char** argv) {
    
    //Declare Variables
    float item1=15.95, item2=24.95, item3=6.95,//Price of 5 items, Sales Tax Amt
          item4=12.95, item5=3.95, STax=0.07,  //SubTot=price before tax
          SubTot, TaxAmt, FinTot;              //TaxAmt=Price of tax applied
                                               //FinTot=Total after tax
    
    //Map/Process the Inputs -> Outputs
    SubTot=item1+item2+item3+item4+item5,     //To Find Price before tax
    TaxAmt=SubTot*STax,        //To find the amount of tax being applied
    FinTot=SubTot+TaxAmt;           //To find the total price with tax
    
    
    cout<<"Today's Purchase"<<endl; //Using a basic receipt template
    cout<<"Item 1: $"<<item1<<endl;
    cout<<"Item 2: $"<<item2<<endl;
    cout<<"Item 3: $"<<item3<<endl;
    cout<<"Item 4: $"<<item4<<endl;
    cout<<"Item 5: $"<<item5<<endl;
    cout<<"------------------"<<endl; //Creating space so it's not as cluttered
    cout<<"Sub Total: $"<<SubTot<<endl;
    cout<<"Tax:       $"<<TaxAmt<<endl;
    cout<<"Total:     $"<<FinTot<<endl;
    
    return 0;
}

