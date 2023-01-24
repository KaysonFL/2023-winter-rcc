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
    cout<<"0 To run Problem Gaddis Sum of Numbers"<<endl;
    cout<<"1 To run Problem Gaddis Pennies for Pay"<<endl;
    cout<<"2 To run Problem Gaddis Min Max"<<endl;
    cout<<"3 To run Problem Gaddis Square Display"<<endl;
    cout<<"4 To run Problem Gaddis Pattern Display"<<endl;
    cout<<"5 To run Problem Savtich Fuel Efficiency"<<endl;
    cout<<"6 To run Problem Savtich Inflation"<<endl;
    cout<<"7 To run Problem Savtich Estimated Cost"<<endl;
    cout<<"8 To run Problem Savtich Miles Per Gallon"<<endl;
    cin>>chose;
    
    //Map/Process the Inputs -> Outputs
    switch(chose){
        case '0':{
           //Declare Variables
    int num1,num2,num3;
    //Initialize or input i.e. set variable values
    num1=0;
    num2=1;
    cin>>num3;
    //Map inputs -> outputs
    if (num3>0){
        for(int i=0; i<num3; i++){
            num1+=num2;
            num2+=1;
        }
        cout<<"Sum = "<<num1;
    }
            break;
        }
        case '1':{
            //Declare Variables
    int penny=1, prft=0, days;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin>>days;
    
    if(days<1){
        cout<<"Days cannot be less than 1"<<endl;
    }
    else{
        for(int i=0; i<days; i++){
            prft+=penny;
            penny*=2;
        }
        cout<<"Pay = $"<<setw(4)<<fixed<<setprecision(2)<<prft*0.01;
    }
            break;
        }
        case '2':{
            //Declare Variables
    int num, min, max;
    const int EndVal=-99;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin>>num;
    min=max=num;
    while(num != EndVal){
        if (num<min){
            min=num;
        }
        if (num>max){
            max=num;
        }
        cin>>num;
    }
    //Display the outputs
    cout<<"Smallest number in the series is "<<min<<endl;
    cout<<"Largest  number in the series is "<<max;
            break;
        }
        case '3':{
            //Declare Variables
    int input;
    char letter;
    //Initialize or input i.e. set variable values
    cin>>input>>letter;
    //Map inputs -> outputs
    
    //Display the outputs
    if (input>15||input<=0){
        cout<<"Number must be between 0 and 15.";
    }
    for (int i=0; i<input; i++){
        for (int j=1; j<=input; j++){
            cout<<letter;
        }
        if(i<input-1){
            cout<<endl;
        }
    }
            }
            break;
            
        case '4':{
            //Declare Variables
    int input;
    //Initialize or input i.e. set variable values
    cin>>input;
    //Map inputs -> outputs
    for (int i=0;i<input;i++){
        
        for(int j=0;j<=i;j++){
            cout<<"+";
        }
        cout<<endl;
        if(i!=input){
            cout<<endl;
        }
       
    }
    for (int i=0;i<input;i++){
        
        for(int j=input;j>i;j--){
            cout<<"+";
        }
        
        if(i!=input-1){
            cout<<endl;
            cout<<endl;
        }
    }
                }
            break;
            
        case '5':{
            //Declare Variables
    float lit, miles, mpg1, mpg2, LTG=0.264179; //miles per gallon, Liters to gallons
    char aga; 
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do{
        cout<<"Car 1"<<endl;                                //Car 1 Information
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>lit;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles;
        cout<<"miles per gallon: ";
        mpg1=miles/(lit*LTG);
        cout<<setprecision(2)<<fixed<<mpg1<<endl;
        cout<<endl;
        cout<<"Car 2"<<endl;                                //Car 2 Information
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>lit;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles;
        cout<<"miles per gallon: ";
        mpg2=miles/(lit*LTG);
        cout<<setprecision(2)<<fixed<<mpg2<<endl;
        cout<<endl;
        
    if (mpg1>mpg2){                                         //Output if Car 1 is more efficient
        cout<<"Car 1 is more fuel efficient"<<endl;
        cout<<endl;
    }
    if (mpg2>mpg1){                                         //Output if Car 2 is more efficient
        cout<<"Car 2 is more fuel efficient"<<endl;
        cout<<endl;
    }
        cout<<"Again:"<<endl;
        cin>>aga;
        
    if(aga=='y'){
        cout<<endl;
        }
    }while(aga=='y');
        }
        break;
        
        case '6':{
        //Declare Variables
    //Declare Variables
    float current, old, diff, rate; //Current Price, Old Price, Difference in price, Inflation rate
    char aga;                       
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do{
        cout<<"Enter current price:"<<endl;     //Determining Values of Item
        cin>>current;
        cout<<"Enter year-ago price:"<<endl;
        cin>>old;

        diff=current-old;                       //Calculating the difference
        rate=(diff/old)*100;                    //Calculating the inflation rate
        
        cout<<"Inflation rate: "<<fixed<<showpoint<<setprecision(2)<<rate<<"%"<<endl;
        cout<<endl;
        
        cout<<"Again:"<<endl;                   //If the user wants to calculate again
        cin>>aga;
        if(aga=='y'||aga=='Y'){
            cout<<endl;
        }
    }while (aga=='y'||aga=='Y');
        }
        break;
        
        case '7':{
            //Declare Variables
    float current, old, diff, rate; //Current Price, Old Price, Difference in price, Inflation rate
    float year1, year2;
    char aga;                       
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do{
        cout<<"Enter current price:"<<endl;     //Determining Values of Item
        cin>>current;
        cout<<"Enter year-ago price:"<<endl;
        cin>>old;

        diff=current-old;                       //Calculating the difference
        rate=(diff/old);                        //Calculating the inflation rate
        
        cout<<"Inflation rate: "<<fixed<<showpoint<<setprecision(2)<<rate*100<<"%"<<endl;
        cout<<endl;
        
        year1=rate*current+current;
        cout<<"Price in one year: $"<<year1<<endl;
        
        year2=rate*year1+year1;
        cout<<"Price in two year: $"<<year2<<endl;
        cout<<endl;
        
        cout<<"Again:"<<endl;                   //If the user wants to calculate again
        cin>>aga;
        if(aga=='y'||aga=='Y'){
            cout<<endl;
        }
    }while (aga=='y'||aga=='Y');
        }
        break;
        case '8':{
            //Declare Variables
    float lit, miles, mpg, LTG=0.264179; //miles per gallon, Liters to gallons
    char aga; 
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do{
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>lit;
        cout<<endl;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles;
        cout<<endl;
        cout<<"miles per gallon:"<<endl;
        mpg=miles/(lit*LTG);
        cout<<setprecision(2)<<fixed<<mpg<<endl;
        cout<<"Again:"<<endl;
        cin>>aga;
        
    if(aga=='y'){
        cout<<endl;
        }
    }while(aga=='y');
        } 
        break;
                
    }
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}