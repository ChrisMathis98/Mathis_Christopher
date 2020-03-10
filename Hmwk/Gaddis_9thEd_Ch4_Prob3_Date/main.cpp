/* 
 * Author: Christopher Mathis 
 * Created on January 20, 2020
 * Purpose: To determine if the date is magic or not
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
    int month,day,year;//the month, day and year in numeric digits
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Enter a month:\n";
    cout<<"Enter a day:\n";
    cout<<"Enter a year:\n";
    cin>>month>>day>>year;//input the date
    
    if(year==month*day){//if the two digits multiplies equal the year then it will display the first message
        cout<<"The date is magic";
    }
    else{//if they do not equal the year then display this message
        cout<<"The date is not magic";
    }
    
    //Display Outputs

    //Exit stage right!
    return 0;
}