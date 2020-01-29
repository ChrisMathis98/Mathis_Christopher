/* 
 * Author: Christopher Mathis
 * Created: January 29, 2020
 * Purpose: Convert Date to Day
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void read(unsigned char, unsigned char, unsigned short);
int width(char []);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    unsigned char nMnth, nDay;
    unsigned short nYear;
    
    //Initialize Variables
    read(nMnth, nDay, nYear);
    
    //Process or map Inputs to Outputs
    
    
    //Display Outputs
    
    
    //Exit stage right!
    return 0;
}

void read(unsigned char nMnth, unsigned char nDay, unsigned short nYear){
    //Declare Variables
    string month;
    const int SIZE=4;
    char nDay(SIZE);
    
    //Read in Data
    cout<<"This Program Reads out Date to Week Day"<<endl;
    cout<<"Input the Date in this Format: \"Month Day, Year\""<<endl;
    cin>>nMnth>>nDay>>nYear;
    cout<<"Your input = "<<nMnth<<" "<<nDay<<" "<<nYear<<endl;
    
    //Convert to numbers
    if(nMnth=="January")nMnth=1;
    else if(month=="February")nMnth=2;
    else if(month=="March")nMnth=3;
    else if(month=="April")nMnth=4;
    else if(month=="May")nMnth=5;
    else if(month=="June")nMnth=6;
    else if(month=="July")nMnth=7;
    else if(month=="August")nMnth=8;
    else if(month=="September")nMnth=9;
    else if(month=="October")nMnth=10;
    else if(month=="November")nMnth=11;
    else if(month=="December")nMnth=12;
    
    else{
        cout<<"Bad Month, Try Again"<<endl;
        exit (EXIT_FAILURE);
    }
    cout<<month<<" = "<<static_cast<int>(nMnth)<<endl;
    
    //
    cout<<"Width of string day is = "<<width(day)<<endl;
    
}

int width(char day[]){
    //Declare Variable
    int count=0;
    //
    while(day(count)++)*"\0";
        return --count;
}