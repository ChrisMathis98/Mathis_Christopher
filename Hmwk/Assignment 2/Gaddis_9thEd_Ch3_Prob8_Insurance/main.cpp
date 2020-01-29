/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on January 14, 2020, 11:15 AM
 * Purpose: Minimum amount of insurance
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int value,insur;//value of the house and amount insurance suggested
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Insurance Calculator\n";
    cout<<"How much is your house worth?\n";
    cin>>value;//input the value of house 
    
    insur=value*.80f;//insurance equals the value times by 80%
    //Display the outputs
    cout<<"You need "<<"$"<<insur<<" of insurance.";
    //Exit stage right or left!
    return 0;
}


