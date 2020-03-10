/* 
 * Author: Christopher Mathis
 * Date: January 16, 2020, 11:00 AM
 * Purpose: Calculates new pay after raise
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    float pSal,rPay,nASal,nMSal;
    //Initialize or input data here
    
    //Display initial conditions, headings here
    cout<<"Input previous annual salary.\n";
    cin>>pSal;//input previous annual salary
    //Process inputs  - map to outputs here
    rPay=((pSal/12)*.076)*6;//calculate retroactive pay
    nASal=(pSal*.076)+pSal;//calculate new annual salary
    nMSal=nASal/12;//calculate new monthly salary
    //Format and display outputs here
    cout<<fixed;//setting the width and precision of the calculated values
    cout<<"Retroactive pay    = $"<<setw(7)<<setprecision(2)<<rPay<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<setprecision(2)<<nASal<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<setprecision(2)<<nMSal;
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}


