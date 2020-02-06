/* 
 * Author: Christopher Mathis
 * Created: February 3, 2020
 * Purpose: Pulling Random Card 
 */

//System Libraries
#include <iostream>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    unsigned int pRank, pSuit, cRank, cSuit;
    
    //Initialize Variables
    pRank=rand()%13+1;
    pSuit=rand()%4+1;
    cRank=rand()%13+1;
    cSuit=rand()%4+1;
    
    //Process or map Inputs to Outputs
    cout<<"Player played ";
    switch(pRank){
        case 1:cout<<"Ace ";break;
        case 2:cout<<"Two ";break;
        case 3:cout<<"Three ";break;
        case 4:cout<<"Four ";break;
        case 5:cout<<"Five ";break;
        case 6:cout<<"Six ";break;
        case 7:cout<<"Seven ";break;
        case 8:cout<<"Eight ";break;
        case 9:cout<<"Nine ";break;
        case 10:cout<<"Ten ";break;
        case 11:cout<<"Jack ";break;
        case 12:cout<<"Queen ";break;
        case 13:cout<<"King ";break;
    }
    switch(pSuit){
        case 1:cout<<"of Clubs\n";break;
        case 2:cout<<"of Diamonds\n";break;
        case 3:cout<<"of Hearts\n";break;
        case 4:cout<<"of Spades\n";break;
    }
    cout<<"computer played ";
    switch(cRank){
        case 1:cout<<"Ace ";break;
        case 2:cout<<"Two ";break;
        case 3:cout<<"Three ";break;
        case 4:cout<<"Four ";break;
        case 5:cout<<"Five ";break;
        case 6:cout<<"Six ";break;
        case 7:cout<<"Seven ";break;
        case 8:cout<<"Eight ";break;
        case 9:cout<<"Nine ";break;
        case 10:cout<<"Ten ";break;
        case 11:cout<<"Jack ";break;
        case 12:cout<<"Queen ";break;
        case 13:cout<<"King ";break;
    }
    switch(cSuit){
        case 1:cout<<"of Clubs\n";break;
        case 2:cout<<"of Diamonds\n";break;
        case 3:cout<<"of Hearts\n";break;
        case 4:cout<<"of Spades\n";break;
    }
    
    //Display Outputs
    
    
    //Exit stage right!
    return 0;
}