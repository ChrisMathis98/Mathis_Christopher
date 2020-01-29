/* 
 * Author: Christopher Mathis
 * Created on January 21, 2020
 * Purpose: Use loops to calculate distance traveled per hour 
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
    int speed,hours;
    
    //Initialize Variables
    cout<<"What is the speed of the vehicle in mph?\n";
    cin>>speed;//enter speed in mph
    cout<<"How many hours has it traveled?\n";
    cin>>hours;//enter amount of hours traveled
    
    //Process or map Inputs to Outputs
    cout<<"Hour   Distance Traveled\n";
    for(int i=1; i<=hours; i++){//for loop to calculate the amount of miles traveled for each hour traveled
        cout<<i<<fixed<<setw(15)<<i*speed<<endl;
    }
    
    //Display Outputs
    
    
    //Exit stage right!
    return 0;
}