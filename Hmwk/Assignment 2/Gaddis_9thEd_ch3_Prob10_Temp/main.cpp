/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on January 14, 2020, 11:30 AM
 * Purpose: Converts temp from fahrenheit ro celsius
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float degFahr,degCels;//degrees fahrenheit and degrees celsius
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Temperature Converter\n";
    cout<<"Input Degrees Fahrenheit\n";
    cin>>degFahr;//input the degrees in fahrenheit
    
    degCels=5*(degFahr-32)/9;//conversion for fahrenheit to celsius
    //Display the outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<degFahr<<" Degrees Fahrenheit = "<<degCels<<" Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}


