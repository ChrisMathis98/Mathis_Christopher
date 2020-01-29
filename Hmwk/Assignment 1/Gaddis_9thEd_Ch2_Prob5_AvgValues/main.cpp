/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on January 8, 2020, 6:30 PM
 * Purpose: Average of Values
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
    float var1,var2,var3,var4,var5;//declared given variables
    float sum,avg;//declared desired variables
    
    //Initialize Variables 
    var1=28;//declared the values of variables
    var2=32;
    var3=37;
    var4=24;
    var5=33;
    
    //Process or map Inputs to Outputs
    sum=var1+var2+var3+var4+var5;//sum is the addition of the given variables
    avg=sum/5;//average is the sum divided by amount of variables
    
    //Display Outputs
    cout<<"The average value is "<<avg<<endl;
    
    //Exit stage Right!
    return 0;
}