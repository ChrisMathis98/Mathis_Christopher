/* 
 * Author: Christopher Mathis
 * Created: January 29, 2020
 * Purpose: Convert Date to Day
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void read(unsigned char&, unsigned char&, unsigned short&);
bool isLeap(unsigned short);
int getCenturyValue(int);
int getYearValue(int);
int getMonthValue(int,int);
string dayofWeek(int,int,int);
bool validDate(int,int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    unsigned char nMnth, nDay;
    unsigned short nYear;
    
    //Initialize Variables
    read(nMnth, nDay, nYear);
    
    //Display Outputs
    if (validDate(nMnth,nDay,nYear))
    cout<<"This day fell on "<<dayofWeek(nMnth,nDay,nYear)<<endl;
    
    //Exit stage right!
    return 0;
}

bool validDate(int nMnth,int nDay,int nYear){
    if(nYear>12000){
        cout<<"Gregorian Correction Only Valid for 10,000 Years"<<endl;
        exit(EXIT_FAILURE);
    }
    switch(nMnth){
        case 1:{
                if(nDay>31)cout<<"Too Many Days in January"<<endl;
                exit(EXIT_FAILURE);
            return true;
        }
        case 2:{
                if(nDay>29){
                    cout<<"Too Many Days in February"<<endl;
                    exit(EXIT_FAILURE);
                }else if (nDay==29 &&! isLeap(nYear)){
                cout<<"Too Many Days in February"<<endl;
            exit(EXIT_FAILURE);
        }
            return true;
    }
        case 3:{
                if(nDay>31)cout<<"Too Many Days in March"<<endl;
                exit(EXIT_FAILURE);
            return true;
        }
        case 4:{
                if(nDay>30)cout<<"Too Many Days in April"<<endl;
                exit(EXIT_FAILURE);
            return true;
        }
        case 5:{
                if(nDay>31)cout<<"Too Many Days in May"<<endl;
                exit(EXIT_FAILURE);
            return true;
        }
        case 6:{
                if(nDay>31)cout<<"Too Many Days in June"<<endl;
                exit(EXIT_FAILURE);
            return true;
        }
        case 7:{
                if(nDay>31)cout<<"Too Many Days in July"<<endl;
                exit(EXIT_FAILURE);
            return true;
        }
        case 8:{
                if(nDay>31)cout<<"Too Many Days in August"<<endl;
                exit(EXIT_FAILURE);
            return true;
        }
        case 9:{
                if(nDay>30)cout<<"Too Many Days in September"<<endl;
                exit(EXIT_FAILURE);
            return true;
        }
        case 10:{
                if(nDay>31)cout<<"Too Many Days in October"<<endl;
             exit(EXIT_FAILURE);
            return true;
        }
        case 11:{
                if(nDay>30)cout<<"Too Many Days in November"<<endl;
                exit(EXIT_FAILURE);
            return true;
        }
        case 12:{
                if(nDay>31)cout<<"Too Many Days in December"<<endl;
                exit(EXIT_FAILURE);
            return true;
        }
        default: return false;
    }
}

string dayofWeek(int nMnth,int nDay,int nYear){
    int day=(nDay + getMonthValue(nMnth,nYear) + getYearValue(nYear)
                  + getCenturyValue(nYear))%7;
    
    switch(day){
        case 0:return "Sunday";
        case 1:return "Monday";
        case 2:return "Tuesday";
        case 3:return "Wednesday";
        case 4:return "Thursday";
        case 5:return "Friday";
        case 6:return "Saturday";
        default: return "The Twelfth of Neveraury";
}
}

int getMonthValue(int nMnth, int nYear){
    return nMnth==1? (isLeap(nYear)?6:0):
           nMnth==2? (isLeap(nYear)?2:3):
           nMnth==3? 3:
           nMnth==4? 6:
           nMnth==5? 1:
           nMnth==6? 4:
           nMnth==7? 6:
           nMnth==8? 2:
           nMnth==9? 5:
           nMnth==10?0:
           nMnth==11?3:5;
}

int getYearValue(int nYear){
    return (nYear%100)/4+nYear%100;
}

int getCenturyValue(int nYear){
    return 2*(3-(nYear/100)%4);
}

bool isLeap(unsigned short nYear){
    return ((nYear%400) &&! ((nYear%4) ||! (nYear%100)));
}

void read(unsigned char& nMnth, unsigned char nDay, unsigned short nYear){
    //Declare Variables
    string month;
    const int SIZE=4;
    char Day(SIZE);
    
    //Read in Data
    cout<<"This Program Reads out Date to Week Day"<<endl;
    cout<<"Input the Date in this Format: \"Month Day, Year\""<<endl;
    cin>>nMnth>>nDay>>nYear;
    cout<<"Your input = "<<nMnth<<" "<<nDay<<" "<<nYear<<endl;
    
    //Convert to numbers
    if(month=="January")nMnth=1;
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
}
