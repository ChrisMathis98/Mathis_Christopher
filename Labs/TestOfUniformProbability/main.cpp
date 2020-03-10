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

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    float min, max;
    min=max=rndProb();
    for(int i=1;i<=1;i++){
        float random=rndProb();
        if(min>random)min=random;
        if(max<random)max=random;
    }
    cout<<"["<<min<<","<<max<<"]"<<endl;
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    //Display Outputs
    
    //Exit stage right!
    return 0;
}

float rndProb(){
    return 1.0*rand()/(pow(2,31)-1);
}