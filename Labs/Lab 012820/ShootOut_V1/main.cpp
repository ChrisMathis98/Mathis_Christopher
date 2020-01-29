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
    bool aAlive,bAlive,cAlive;
    float aProb,bProb,cProb;
    
    //Initialize Variables
    aAlive,bAlive,cAlive=true;
    aProb=1.0/3.0;
    bProb=1.0/2.0;
    cProb=1.0;
    
    //Play the shoot out
    do{
        if(aAlive){
            if(cAlive)cAlive=!isLess(aProb);
            else if(bAlive)bAlive=!isLess(aProb);
        }
        if(bAlive){
            if(cAlive)cAlive=!isLess(bProb);
            else if(aAlive)aAlive=!isLess(bProb);
        }
        if(cAlive){
            if(bAlive)bAlive=!isLess(cProb);
            else if(aAlive)aAlive=!isLess(cProb);
        }
    }while(aAlive+bAlive+cAlive>1);
    
    //Output the winner
    cout<<"Aaron is "<<(aAlive?"Alive":"Dead")<<endl;
    cout<<"Bob is "<<(bAlive?"Alive":"Dead")<<endl;
    cout<<"Charlie is "<<(cAlive?"Alive":"Dead")<<endl;
    
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