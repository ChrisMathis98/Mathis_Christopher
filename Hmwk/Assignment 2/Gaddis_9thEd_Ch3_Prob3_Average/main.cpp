/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on January 14, 2020, 10:10 AM
 * Purpose:  Calculate the average of 5 numbers
 */

//System Libraries
#include <iostream>  //Input/Output Library
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
    int a,b,c,d,e;
    float avg;
    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average.\n";
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    //Map inputs -> outputs
    avg=(a+b+c+d+e)/5.0;//avg is the sum and divided by the amount of numbers
    //Display the outputs
    cout<<"The average = "<<fixed<<setprecision(1)<<showpoint<<avg;//fixing precision to be one decimal point
    //Exit stage right or left!
    return 0;
}
