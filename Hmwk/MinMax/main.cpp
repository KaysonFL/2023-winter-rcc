/* 
 * Author: Kayson Lopez
 * Created on January 31, 2023 10:30 PM
 * Purpose:  Find the Minimum and Maximum of 3 integers
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num[3], min, max,
        size=sizeof(num)/sizeof(num[0]);
        
    //Initialize Variables
    min=0;
    max=0;
    for(int i=0;i<size;i++)
        cin>>num[i];
    //Process/Map inputs to outputs
    minmax(num[0], num[1], num[2], min, max);
    cout<<"Input 3 numbers"<<endl;
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<< max;
    //Output data
    
    //Exit stage right!
    return 0;
}
void minmax(int num1, int num2, int num3, int& min, int& max){
    for(int i = 0; i < 3; i ++){
        
        if( num1 >= num2 && num1 >= num3 )          //Determine Maximum Number
            max = num1;
        else if( num2 >= num1 && num2 >= num3 )
            max = num2;
        else if( num3 >= num1 && num3 >= num2 )
            max = num3;
        
        
        if( num1 <= num2 && num1 <= num3 )          //Determine Minimum Number
            min = num1;
        else if( num2 <= num1 && num2 <= num3 )
            min = num2;
        else if( num3 <= num1 && num3 <= num2 )
            min = num3;
    }
}