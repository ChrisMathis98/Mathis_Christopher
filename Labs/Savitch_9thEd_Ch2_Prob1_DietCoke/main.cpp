/* 
 * File:   main.cpp
 * Author: CHristopher Mathis
 * Created on January 14, 2020, 12:00 PM
 * Purpose:  Diet Coke 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float CNVGRMS=453.592;//grams per lb
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float wDsrd,
          mMouse,
          mKmse,
          mSoda,
          cnSint8;
    int nCans;
    //Input or initialize values Here
    wDsrd=200;
    mMouse=35;
    mKmse=5;
    mSoda=350;
    cnSint8=1e-3f;
    //Process/Calculations Here
    nCans=wDsrd*CNVGRMS*mKmse/(mMouse*mSoda*cnSint8);
    //Output Located Here
    cout<<"The dieter's desired weight = "<<wDsrd
            <<" lbs"<<endl;
    cout<<"They must not consume more than "<<nCans<<" cans"<<endl;
    cout<<"of soda pop over his lifetime"<<endl;
    //Exit
    return 0;
}

