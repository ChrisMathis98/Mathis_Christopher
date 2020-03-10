/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on January 8, 2020, 6:00 PM
 * Purpose: Restaurant Bill
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
    float tax,tip,total;//
    
    //Initialize Variables 
    float meal=88.67;//meal before tax is $88.67
    
    //Process or map Inputs to Outputs
    tax=.0675 * meal;
    tip=.2 * (meal + tax);
    total=meal + tax + tip;
    
    //Display Outputs
    cout<<"Meal cost is $"<<meal<<endl;
    cout<<"Tax amount is $"<<tax<<endl;
    cout<<"Tip amount is $"<<tip<<endl;
    cout<<"Total bill is $"<<total<<endl;
    
    //Exit stage Right!
    return 0;
}