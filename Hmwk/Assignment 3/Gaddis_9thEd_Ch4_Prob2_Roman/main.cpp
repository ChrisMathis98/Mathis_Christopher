/* 
 * Author: Christopher Mathis
 * Created on January 21, 2020
 * Purpose: Convert numeric digits to roman numerals
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
    int num;
    
    //Initialize Variables
    cout<<"Enter a number between 1 and 10:\n";
    cin>>num;//number to be inputed
    //Process or map Inputs to Outputs
    if(num<1 || num>10){//if statement to make sure the inputed number is betwween 1 and 10
        cout<<"Entered number is not valid, reenter number:\n";//error message if inputed number is outside [1,10]
        cin>>num;//input number that is within range [1,10]
    }
        switch(num){//switch statement to display correct conversion from digit to numerals
        case 1:cout<<"1 is I in Roman numerals";break;
        case 2:cout<<"2 is II in Roman numerals";break;
        case 3:cout<<"3 is III in Roman numerals";break;
        case 4:cout<<"4 is IV in Roman numerals";break;
        case 5:cout<<"5 is V in Roman numerals";break;
        case 6:cout<<"6 is VI in Roman numerals";break;
        case 7:cout<<"7 is VII in Roman numerals";break;
        case 8:cout<<"8 is VIII in Roman numerals";break;
        case 9:cout<<"9 is IX in Roman numerals";break;
        case 10:cout<<"10 is X in Roman numerals";break;
        }
    //Display Outputs

    //Exit stage right!
    return 0;
}