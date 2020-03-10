/* 
 * Author: Christopher Mathis
 * Created on January 21, 2020
 * Purpose: Find sums using loops
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
    float num,sum;
    
    //Initialize Variables
    cout<<"Enter a positive integer value:\n";
    cin>>num;
    
    //Process or map Inputs to Outputs
    if(num<0){//if inputed value is less than 0 then display message and have them reenter a value
        cout<<"Invalid entry, Reenter:\n";
        cin>>num;
    }
    
    for(int i=1;i<=num;i++){//if inputed value is positive then the loop will calculate the sum
        sum+=i;
    }
    //Display Outputs
    cout<<"The sum of all the integers from 1 to "<<fixed<<setprecision(0)<<num<<" is "<<fixed<<setprecision(0)<<sum;

    //Exit stage right!
    return 0;
}