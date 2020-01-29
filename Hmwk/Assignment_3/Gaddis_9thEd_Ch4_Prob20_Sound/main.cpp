/* 
 * Author: Christopher Mathis
 * Created on January 20, 2020
 * Purpose: Create a menu that calculates the time for sound to travel a distance in a certain medium 
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
    char medium;//character to be used for the menu
    float dist;//the distance to be inputed by user in feet
    
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Choose which medium the sound wave will travel in.\n";
    cout<<"1.Air\n2.Water\n3.Steel\n";
    cin>>medium;
    cout<<"Enter the distance the wave will travel:\n";
    cin>>dist;
    
    cout<<fixed<<setprecision(4);//sets the precision to 4 decimal places
    
    if(dist<0){//if they input an incorrect value, it will not display this message
        cout<<"Please enter a distance greater than zero";
    }
    else{//if they did input a correct value for distance then it continues with the selected calculation
        switch(medium){//based on the character entered, the specific calculation would take place
            case '1':cout<<"The wave will take "<<(dist/1100)<<" seconds";break;
            case '2':cout<<"The wave will take "<<(dist/4900)<<" seconds";break;
            case '3':cout<<"The wave will take "<<(dist/16400)<<" seconds";break;
            default:cout<<"You did not enter one of the available choices";break;//if they inputed an incorrect character for the menu this message will display
        }
    }
    
    //Display Outputs

    //Exit stage right!
    return 0;
}