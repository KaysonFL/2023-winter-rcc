/* 
 * Author: Kayson Lopez
 * Created on January 31, 2023 12:44 PM
 * Purpose:  Determine if an integer is a Prime Number
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int x;
    //Initialize Variables
    cout << "Input a number to test if Prime."<<endl;
    cin  >> x;
    //Process/Map inputs to outputs
    
    if (isPrime(x) == true){
       cout << x<< " is prime.";
    }
    if (isPrime(x) == false){
       cout << x<< " is not prime.";
    }
    
    //Output data
    
    //Exit stage right!
    return 0;
}
bool isPrime(int n){
int i;
    for(i=2; i < n/2; i++)
        if ( n% i == 0)
            return false;
    return true;
    
}