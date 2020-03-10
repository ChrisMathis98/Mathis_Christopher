/* 
 * File:   main.cpp
 * Author: CHristopher Mathis
 * Created on January 14, 2020, 12:30 PM
 * Purpose:  Random Number
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    int rnd1to6;
    int rnd3to3;
    int rndBegtoEnd;//random number from beg to end
    int beg,end;
    //Input or initialize values Here
    rnd1to6=rand()%6+1;
    rnd3to3=rand()%7-3;
    beg=10;
    end=99;
    rndBegtoEnd=rand()%(end-beg+1)+beg;
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Random Number in range of 1 to 6 = "<<rnd1to6<<endl;
    cout<<"Random Number in range of -3 to 3 = "<<rnd3to3<<endl;
    cout<<"Random Number in range of "<<beg
            <<" to "<<end<<" = "<<rndBegtoEnd<<endl;
    //Exit
    return 0;
}

