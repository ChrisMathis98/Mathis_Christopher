/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on January 15, 2020, 12:15 AM
 * Purpose:  Grade With Switch Statement
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>  //Random library
#include <ctime>    //Set for time
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    unsigned char grade, score;
    //Input or initialize values Here
    score=rand()%51+50;//[50,100]
    //Process/Calculations Here
    switch(score/10){
            case 10:
            case 9:grade='A';break;
            case 8:grade='B';break;
            case 7:grade='C';break;
            case 6:grade='D';break;
            default:grade='F';
    }
    //Output Located Here
    cout<<"With a score of "<<
            static_cast<int>(score)<<" the Grade = "<<grade<<endl;
    //Exit
    return 0;
}

