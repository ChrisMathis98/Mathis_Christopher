/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on January 8, 2020, 7:20 PM
 * Purpose: Land Calculations
 */

//System Libraries
#include <iostream>
using namespace std;


//User Libraries

//Global Constants - No Global Constants
//Only Universal Constants, Math, Physics, Conversions
const float ACRE=43560;//1 acre is 43560 sqft
// Function Prototypes

//Execution BEgins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //DeclareVariable Data Types and Constants 
    float land;//how large the plot of land is
    float acres;//the number of acres we want to know
    
    //Initialize Variables 
    land=391876;
    
    //Process or map Inputs to Outputs
    acres=land/ACRE;
    
    //Display Outputs
    cout<<land<<" sqft = "<<acres<<" acres.\n";
    
    //Exit stage Right!
    return 0;
}