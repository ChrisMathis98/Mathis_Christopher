/* 
 * File: main.cpp
 * Author: Christopher Mathis
 * Created February 10, 2020
 * Purpose: Arrays for Player Names
 */

//System Libraries
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    const int NAMES=2, SIZE=35;
    char players[NAMES][SIZE];
    vector<string> name;
    
    for(int k=0; k<NAMES; k++){
        cout<<"enter name "<<endl;
        string a;
        getline(cin,a);
        name.push_back(a);
        cout<<endl;
    }
    cout<<endl;
    cout<<name[0]<<endl;
    cout<<name[1]<<endl;
    cout<<endl;
    
    for(int i=0; i<NAMES; i++){
        cout<<"Enter Name For Player "<<i+1<<endl;
        cin>>players[i];
    }
    
    cout<<endl;
    cout<<players[0]<<endl;
    cout<<players[1]<<endl;
    cout<<endl;
    
    for(int j=0; j<NAMES; j++){
        cout<<players[j]<<endl;
    }
    
    //Exit stage right!
    return 0;
}