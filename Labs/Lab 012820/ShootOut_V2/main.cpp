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
    int cntA,cntB,cntC,nShtOts;
    
    //Initialize Variables
    aAlive,bAlive,cAlive=true;
    aProb=1.0/3.0;
    bProb=1.0/2.0;
    cProb=1.0;
    cntA=cntB=cntC=0;
    nShtOts=1000000;
    
    //Play the shoot out
    for(int shtOut=1;shtOut<=nShtOts;shtOut++){
        aAlive=bAlive=cAlive=true;
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
        cntA+=aAlive;
        cntB+=bAlive;
        cntC+=cAlive;
    }
    
    //Output the winner
    cout<<"Aaron Lives "<<100.0*cntA/nShtOts<<"%"<<endl;
    cout<<"Bob Lives "<<100.0*cntB/nShtOts<<"%"<<endl;
    cout<<"Charlie Lives "<<100.0*cntC/nShtOts<<"%"<<endl;
    
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