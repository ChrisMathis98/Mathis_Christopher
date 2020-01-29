/* 
 * Author: Christopher Mathis
 * Created on January 21, 2020
 * Purpose: Use loop to calculate calories burned
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    float cal;
    
    //Initialize Variables
    cout<<"Enter how many calories are burned per minute:\n";
    cin>>cal;//input the amount of calories burned in one minute
    
    //Process or map Inputs to Outputs
    cout<<"Min\tCalories burned\n";//display for the table
    for(int i=5;i<=30;i+=5){//for loop to finish table 
        cout<<i<<"\t"<<fixed<<setprecision(1)<<cal*i<<endl;
    }
    
    //Display Outputs
    
    
    //Exit stage right!
    return 0;
}