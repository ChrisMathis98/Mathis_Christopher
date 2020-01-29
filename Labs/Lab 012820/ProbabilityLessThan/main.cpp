/* 
 * Author: Christopher Mathis
 * Created: 
 * Purpose: ShootOut
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
float rndProb();//random number between [0,1]
bool isLess(float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    int cnt,nLoops;
    float prob=1.0/3.0;
    cnt=0;
    nLoops=10000000;
    for(int i=1;i<=nLoops;i++){
        cnt+=isLess(prob);
    }
    cout<<"prob = "<<prob*100<<"%   Simulated prob = "<<100.0*cnt/nLoops<<"%";
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    //Display Outputs
    
    //Exit stage right!
    return 0;
}
bool isLess(float prob){
    if(prob>=rndProb())return true;
    return false;
}
float rndProb(){
    return 1.0*rand()/(pow(2,31)-1);
}