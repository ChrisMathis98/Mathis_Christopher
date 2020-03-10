/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on January 8, 2020, 7:10 PM
 * Purpose: Miles per Gallon
 */

//System Libraries
#include <iostream>
using namespace std;


//User Libraries

//Global Constants - No Global Constants
//Only Universal Constants, Math, Physics, Conversions

// Function Prototypes

//Execution BEgins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //DeclareVariable Data Types and Constants 
    float tank,travel;//declared given variables
    float mpg;//declared desired variable 
    
    //Initialize Variables 
    tank=15;//car holds 15 gallons of gas
    travel=375;//car can travel 375 miles on full tank
    
    //Process or map Inputs to Outputs
    mpg=travel/tank;
    
    //Display Outputs
    cout<<"The Miles per Gallon for the car is "<<mpg<<endl;
    
    //Exit stage Right!
    return 0;
}