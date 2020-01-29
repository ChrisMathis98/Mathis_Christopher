/* 
 * Author: Christopher Mathis
 * Created on January 20, 2020
 * Purpose: Calculate the charges due to phone calls
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
    float start,fract;
    int nMin;
    
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Enter the starting time:\n";
    cin>>start;//input the start time
    cout<<"Enter the number of minutes of the call:\n";
    cin>>nMin;//input the number of minutes of the call
    
    start= static_cast<int>(start);
    fract= start - static_cast<int>(start);//the fractional component of the hours
    
    if (start>0 && start<=6 && fract>=0 && fract<0.59)
        cout<<"The charges are $"<<fixed<<setprecision(2)<<(0.05*nMin);
    else if (start>=7 && start<=18 && fract>=0 && fract<0.59)
        cout<<"The charges are $"<<fixed<<setprecision(2)<<(0.45*nMin);
    else if (start>=19 && start<=23 && fract>=0 && fract<0.59)
        cout<<"The charges are $"<<fixed<<setprecision(2)<<(0.20*nMin);
        
    //Display Outputs

    //Exit stage right!
    return 0;
}