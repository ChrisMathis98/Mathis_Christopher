/* 
 * Author: Christopher Mathis
 * Created on January 20, 2020
 * Purpose: Determine which number is greater using ternary operator
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int num1,num2,large;//num1 and num2 are to be inputed, large is to determine which number is larger
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Enter a number:\n";
    cin>>num1;
    cout<<"Enter a number:\n";
    cin>>num2;
    
    large=(num1<num2)?num2:num1;//determines which number is larger
    
    //Display Outputs
    cout<<large<<" is larger";
    //Exit stage right!
    return 0;
}