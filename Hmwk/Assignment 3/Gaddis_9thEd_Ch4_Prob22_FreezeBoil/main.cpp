/* 
 * Author: Christopher Mathis
 * Created on January 20, 2020
 * Purpose: Create program that reports freezing and boiling points for given temperature
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
    int temp;//inputed temp by user
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Enter a temperature:\n";
    cin>>temp;
    
    //if statements for the program to go through and see which statments will be displayed
    if(temp<=-173) cout<<"Ethyl alcohol will freeze\n";
    if(temp<=-38) cout<<"Mercury will freeze\n";
    if(temp<=-362) cout<<"Oxygen will freeze\n";
    if(temp<=32) cout<<"Water will freeze\n";
    if(temp>=172) cout<<"Ethyl alcohol will boil\n";
    if(temp>=676) cout<<"Mercury will boil\n";
    if(temp>=-306) cout<<"Oxygen will boil\n";
    if(temp>=212) cout<<"Water will boil\n";
    
    //Display Outputs

    //Exit stage right!
    return 0;
}