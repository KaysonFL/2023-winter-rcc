/* 
 * Author: Kayson Lopez
 * Created on January 31, 2023 11:15 PM
 * Purpose:  Collatz Sequence with sequence output
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n,ns;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatz(n);
    
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns+1<<" steps";
    
    //Exit stage right!
    return 0;
}
int collatz(int n){
    int i=0;
    while(n!=1){
        cout<<n<<", ";
        if (n%2==0){
            n=n/2;
        }
    
    else {
        n=3*n+1;
    }
    i++;
    }
    cout<<"1"<<endl;
    return i;
}