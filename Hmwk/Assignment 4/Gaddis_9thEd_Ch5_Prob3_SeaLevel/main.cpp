/* 
 * Author: Christopher Mathis
 * Created on January 21, 2020
 * Purpose: Table displays the sea levels for the future
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
    float rise;//the inputed value of sea level rising
    
    //Initialize Variables
    cout<<"Enter how many millimeters the ocean is rising per year:\n";
    cin>>rise;
    
    //Process or map Inputs to Outputs
    cout<<"Year\tRise(mm)\n";//header for table
    for(int i=1; i<=30; i++){//for loop to display the distance the sea level will rise (using today as control) at a given year later [1,30]
        cout<<i<<"\t"<<fixed<<setprecision(1)<<rise*i<<endl;
    }
    
    //Display Outputs
    
    
    //Exit stage right!
    return 0;
}