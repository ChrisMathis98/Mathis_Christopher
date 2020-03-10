/* 
 * Author: Christopher Mathis
 * Created on Februrary 9, 2020
 * Purpose: Searching Array of Strings
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
string search(string[], int, string);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    const int NUM_NAMES=20;
	string names[NUM_NAMES]={"Collins, Bill", "Smith, Bart", "Allen, Jim",
							 "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
							 "Taylor, Terri", "Johnson, Jill",
							 "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
							 "James, Jean", "Weaver, Jim", "Pore, Bob",
							 "Rutherford, Greg", "Javens, Renee",
							 "Harrison, Rose", "Setzer, Cathy",
							 "Pike, Gordon", "Holland, Beth" };
	string name;
    //Initialize Variables
    cout<<"Enter a name to search for:\n";
    getline(cin,name);
    
    //Process or map Inputs to Outputs
    search(names, NUM_NAMES, name);
    
    //Display Outputs

    //Exit stage right!
    return 0;
}

string search(string a[], int size, string name){
    bool found=false;
    for(int i=0; i<size; i++){
        if(name==a[i]){
            found=true;
            cout<<"The name was found";
        }
    }
    if(!found) cout<<"The name was not found";
}