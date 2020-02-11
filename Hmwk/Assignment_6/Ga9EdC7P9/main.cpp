/* 
 * Author: Christopher Mathis
 * Created on February 9, 2020
 * Purpose: Employee Pay
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
    const int SIZE=7;
    int empId[]={5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[SIZE];//hours worked
    float payRate[SIZE];//pay rate
    float wages[SIZE];//gross pay
    
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<fixed<<setprecision(2)<<showpoint;//set to 2 decimal points
    for(int i=0; i<SIZE; i++){//for loop to gather employee payrate and hours worked, store in arrays
        cout<<"Enter employee "<<empId[i]<<"'s pay rate:\n";
        cin>>payRate[i];
        cout<<"Enter employee "<<empId[i]<<"'s hours work:\n";
        cin>>hours[i];
        wages[i]=payRate[i]*hours[i];//calculate the gross pay
    }
    for(int j=0; j<SIZE; j++){//for loop to output gross pay for each employee 
        cout<<"Employee "<<empId[j]<<"'s gross pay $"<<wages[j]<<endl;
    }
    
    //Display Outputs

    //Exit stage right!
    return 0;
}