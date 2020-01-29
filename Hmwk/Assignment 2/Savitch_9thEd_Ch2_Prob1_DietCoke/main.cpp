/* 
 * Author: Christopher Mathis
 * Date: January 14, 2020, 11:30 AM
 * Purpose: Dieters Dilemma 
 */

//System Libraries - Post Here
#include <iostream>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.
const float CNVGRMS=453.592;//grams per lb
//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    float wDsrd,
          mMouse,
          mKmse,
          mSoda,
          cnSint8;
    int nCans;//number of cans that can be consumed
    //Initialize or input data here
    mMouse=35;//mass of mouse
    mKmse=5;//mass to kill mouse
    mSoda=350;//mass of soda pop
    cnSint8=1e-3f;//concentration of soda pop
    //Display initial conditions, headings here
    cout<<"Program to calculate the limit of Soda Pop Consumption.\n";
    cout<<"Input the desired dieters weight in lbs.\n";
    cin>>wDsrd;
    //Process inputs  - map to outputs here
    nCans=wDsrd*CNVGRMS*mKmse/(mMouse*mSoda*cnSint8);
    //Format and display outputs here
    cout<<"The maximum number of soda pop cans\n";
    cout<<"which can be consumed is "<<nCans<<" cans";
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}


