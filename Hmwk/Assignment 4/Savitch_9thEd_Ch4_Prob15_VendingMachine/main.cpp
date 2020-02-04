/* 
 * Author: Christopher Mathis
 * Created on January 21, 2020
 * Purpose: Simulate a vending machine
 */

//System Libraries
#include <iostream>  
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float nick,dime,qrt,doll,amt;
    int choice;
    
    //Initialize or input i.e. set variable values
    do{
    cout<<"List of coins:\n";
    cout<<"1. Nickel\n";
    cout<<"2. Dime\n";
    cout<<"3. Quarter\n";
    cout<<"4. Dollar\n";
    cout<<"Enter number for coin:\n"<<endl;
    
    switch(choice){
        case 1: nick*.05;break;
        case 2: dime*.10;break;
        case 3: qrt*.25;break;
        case 4: doll*1.00;break;
        default: cout<<"Invalid entry, Reenter:";
    }
    //Map inputs -> outputs
    cin>>choice;
    amt=nick+dime+qrt+doll;
    cout<<"Current amount: $"<<amt<<endl;
    
    if(amt>3.50){
        cout<<"Enjoy your deep-fried twinkie\n";
    }
    }
    while(amt<3.50){
        cout<<endl;
    }
}
    //Display the outputs
    
    
    //Exit stage right or left!
    return 0;
}