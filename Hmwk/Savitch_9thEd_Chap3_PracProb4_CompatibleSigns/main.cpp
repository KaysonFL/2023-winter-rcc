/* 
 * File:   main.cpp
 * Author: Kayson Lopez
 * Created on January 18, 2023, 10:30 PM
 * Purpose:  Compatibility chart
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string sign1, sign2, first, second;

    //Initialize Variables
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
    cin >> sign1 >> sign2;

    //Map inputs -> output
    
    first = (sign1 == "Aries"  || sign1 == "Leo"     || sign1 == "Sagittarius")   ? "Fire" : //Determines type of sign
            (sign1 == "Taurus" || sign1 == "Virgo"   || sign1 == "Capricorn")     ? "Earth":
            (sign1 == "Gemini" || sign1 == "Libra"   || sign1 == "Aquarius")      ? "Air"  : "Water";
    
    second = (sign2 == "Aries"  || sign2 == "Leo"     || sign2 == "Sagittarius")   ? "Fire" : //Determines type of sign
            (sign2 == "Taurus" || sign2 == "Virgo"   || sign2 == "Capricorn")     ? "Earth":
            (sign2 == "Gemini" || sign2 == "Libra"   || sign2 == "Aquarius")      ? "Air"  : "Water";

    //Display Output
    
    first == second
        ? cout << sign1 << " and " << sign2 << " are compatible " << first << " signs."
        : cout << sign1 << " and " << sign2 << " are not compatible signs.";
    

    //Exit stage right or left!
    return 0;
}

