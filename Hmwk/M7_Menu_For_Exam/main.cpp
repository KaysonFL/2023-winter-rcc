/* 
 * File:   main.cpp
 * Author: Kayson  Lopez
 * Created on January 28, 2023 7:43 PM
 * Purpose:  Menu to be used in the Midterm, future homework and the Final
 *           Add System Libraries and Functions as needed.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:{
                //Declare all Variables Here
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    //Draw the shape
    if(x>=1&&x<50){ //x must be between 1 and 50
        
        if (shape=='x'||shape=='X'){        //Execute X Shape
        
            if (x%2 == 1){                  //Condition: If x is Odd
            for (int i = x; i >= 1; i--) {

            for (int j = x; j >= 1; j--) {  
            if (j == i || j == (x + 1 - i))
                cout << j;
            else
                cout << " ";
                }
                cout << endl;
            }
            }  
            if (x%2 == 0){                  //Condition: If x is Even
            for (int i = x; i >= 1; i--) { 

            for (int j = 1; j <= x; j++) {
            if (j == i || j == (x + 1 - i))
                cout << j;
            else
                cout << " ";
                }
                cout << endl;
            }
            }
    }
    
        if (shape=='f'||shape=='F'){
            
            if (x%2 == 0){                  //Condition: If x is Odd
            for (int i = x; i >= 1; i--) { 

            for (int j = 1; j <= x; j++) {  
            if (j == i )
                cout << i;
            else
                cout << " ";
                }
                cout << endl;
            }
            }
            if (x%2 == 1){                  //Condition: If x is Even
            for (int i = 1; i <= x; i++) {
                
            for (int j = x; j >= 1; j--) {   
            if (j == i )
                cout << i;
            else
                cout << " ";
                }
                cout << endl;
            }
            }
    }
    
        if (shape == 'b' || shape == 'B'){
            
            if (x%2 == 1){                  //Condition: If x is Odd
            for (int i = x; i >= 1; i--) {

                for (int j = x; j >= 1; j--) {  
                if (j == i)
                    cout << i;
                else 
                    cout << " ";
                    }
                    cout << endl;
            }
            }
            if (x%2 == 0){                  //Condition: If x is Even
            for (int i = 1; i <= x; i++) {

                for (int j = 1; j <= x; j++) {  
                if (j == i)
                    cout << i;
                else 
                    cout << " ";
                }

                cout << endl;
            }
            }
        
}
}
            };break;
            
            
    case 2:{//Declare all Variables Here
    char num[4];
    string output[4];
    string first, second;//First=Number Second=Symbol
           
 
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin >> num;
    
    //Histogram Here
    for (int i=0; i < 4; i++) {
        first = num[i];
        short ascii_value = num[i];
        short number = num[i] - '0';
    if (ascii_value >= 48 && ascii_value <= 57) {
       for (int j = number-1 ; j>=0; j--) {
           second += "*";    
       }
       output[i] = first + " " + second;
       second = "";
   }
    else {
       second = "?";
       output[i] = first+ " " + second;
       second = "";
 }
 }
    //Outputs
    cout<<output[3]<<endl;
    cout<<output[2]<<endl;
    cout<<output[1]<<endl;
    cout<<output[0]<<endl;
    };break;
    
            case 3: {
//Declare all Variables Here
    int number;
    int n1000s,n100s,n10s,n1s;
    string eng;//English Check
    
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    eng="";
    
    //Process/Calculations Here
    n1000s=number/1000;  //Determine # 1000'S
    number-=n1000s*1000; //Subtract from the Original
    n100s=number/100;    //Repeat process for all digits
    number-=n100s*100;
    n10s=number/10;    //Repeat process for all digits
    number-=n10s*10;
    n1s=number;
    
    //Output the #1000's in English Check value
    if(n1000s==3)eng+="Three Thousand ";
    if(n1000s==2)eng+="Two Thousand ";
    if(n1000s==1)eng+="One Thousand ";

    //Output the #100's in English Check value
    if(n100s==9)eng+="Nine Hundred ";
    if(n100s==8)eng+="Eight Hundred ";
    if(n100s==7)eng+="Seven Hundred ";
    if(n100s==6)eng+="Six Hundred ";
    if(n100s==5)eng+="Five Hundred ";
    if(n100s==4)eng+="Four Hundred ";
    if(n100s==3)eng+="Three Hundred ";
    if(n100s==2)eng+="Two Hundred ";
    if(n100s==1)eng+="One Hundred ";
    
    //Output the #10's in English Check value
    if(n10s==9)eng+="Ninety ";
    else if(n10s==8)eng+="Eighty ";
    else if(n10s==7)eng+="Seventy ";
    else if(n10s==6)eng+="Sixty ";
    else if(n10s==5)eng+="Fifty ";
    else if(n10s==4)eng+="Forty ";
    else if(n10s==3)eng+="Thirty ";
    else if(n10s==2)eng+="Twenty ";
    else eng+="";
        
    //Output the #10's if they are less than Twenty    
    if(n10s==1){
        if(n1s==9)eng+="Nineteen ";
        if(n1s==8)eng+="Eighteen ";
        if(n1s==7)eng+="Seventeen ";
        if(n1s==6)eng+="Sixteen ";
        if(n1s==5)eng+="Fifteen ";
        if(n1s==4)eng+="Fourteen ";
        if(n1s==3)eng+="Thirteen ";
        if(n1s==2)eng+="Twelve ";
        if(n1s==1)eng+="Eleven ";
    }
    else{    
    //Output the #10's in English Check value
    if(n1s==9)eng+="Nine ";
    if(n1s==8)eng+="Eight ";
    if(n1s==7)eng+="Seven ";
    if(n1s==6)eng+="Six ";
    if(n1s==5)eng+="Five ";
    if(n1s==4)eng+="Four ";
    if(n1s==3)eng+="Three ";
    if(n1s==2)eng+="Two ";
    if(n1s==1)eng+="One "; }
    
          
    cout<<eng<<"and no/100's Dollars"<<endl;
    
            };break;
            case 4: {
                //Declare Variables
    char pack; //Package chosen by customer
    float hours, cost, save, //Hours and Cost per month
          pkA=16.99, pkB=26.99, pkC=36.99; //Packages and Cost
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>pack>>hours;
    
    if(pack=='A'||pack=='a'){    
        if (hours<=10){                 //Calculate Cost for 10 Hours & Under
            cost=pkA;
            save=0.00;
        cout<<"$"<<setw(5)<<cost<<" A $"<<fixed<<setprecision(2)<<save<<endl;
        }
        if (hours<=30&&hours>10){        //Calculate Cost >10 & <30
            cost=pkA+((hours-10)*.95);
            save=pkB-cost;
            //save=0;
        cout<<"$"<<setw(5)<<cost<<" A $"<<fixed<<setprecision(2)<<save<<endl;
        }
        if (hours>30){                  //Calculate Cost >30
            cost=10*.95;
            cost+=pkA+((hours-20)*.85);
            save=cost-pkC;
        cout<<"$"<<setw(5)<<cost<<" C $"<<fixed<<setprecision(2)<<save<<endl;
        }       
    }
    if (pack=='B'||pack=='b'){
        if (hours<=20){                 //Calculate Cost for 10 Hours & Under
            cost=pkB;
            save=0.00;
        cout<<"$"<<setw(5)<<cost<<" B $"<<fixed<<setprecision(2)<<save<<endl;
        }
        if (hours<=30&&hours>20){        //Calculate Cost >10 & <30
            cost=pkB+((hours-10)*.74);
            save=pkC-cost;
        cout<<"$"<<setw(5)<<cost<<" B $"<<fixed<<setprecision(2)<<save<<endl;
        }
        if (hours>30){                  //Calculate Cost >30
            cost=10*.74;
            cost+=pkB+((hours-30)*.64);
            save=cost-pkC;
        cout<<"$"<<setw(5)<<cost<<" C $"<<fixed<<setprecision(2)<<save<<endl;
        }       
    }
    if (pack=='C'||pack=='c'){
            cost=pkC;
            save=0;
        cout<<"$"<<setw(5)<<cost<<" C $"<<fixed<<setprecision(2)<<save<<endl;
    }
            


            };break;
        case 5:  {
                //Declare all Variables Here
    float payRate, grspay;
    unsigned short hrsWrkd;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    if(hrsWrkd<=20){
        grspay=payRate*hrsWrkd;
        
    }
    if(hrsWrkd<=40&&hrsWrkd>20){
        grspay=payRate*20;
        grspay+=payRate*((hrsWrkd-20)*1.5);
        
    }
    if (hrsWrkd>40){
        grspay=payRate*(hrsWrkd-40)*2;
        grspay+=payRate*20*1.5;
        grspay+=payRate*20;
    
    }
    
    //Output the check
    cout<<"$"<<fixed<<setprecision(2)<<grspay<<endl;
        };break;
            case 6: {
                //Declare all Variables Here
    int  term, nTerms;
    float x, fx, expo ;
   
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nTerms;
    
    expo=0;
    term=0;
    for(int i=1;term<nTerms;i+=2){
        int nFact=1;
        term++;
        for(int j=1;j<=i;j++){
            nFact*=j;
        }
        if(term%2==1){
           expo=expo+(x/nFact);
        }
        else{
            expo=expo-(x/nFact);
            fx=x*x*x;
        }
    }
    cout<<fixed<<setprecision(6)<<expo<<endl;
            };break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
    
}

void problem2(){
    
}

void problem3(){
    
}

void problem4(){
    
}

void problem5(){
    
}

void problem6(){
    
}