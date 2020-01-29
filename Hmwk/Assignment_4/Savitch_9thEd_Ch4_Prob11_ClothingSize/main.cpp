/* 
 * Author: Christopher Mathis
 * Created on January 21, 2020
 * Purpose: Calculates the users clothing sizes
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
    int age;
    float height,weight,hat,jacket,waist;
    char choice;
    
    //Initialize or input i.e. set variable values
    do{//do while loop in order to allow the user to do the calculations how many times they want
    cout<<"Enter height(inches):\n"<<endl;
    cin>>height;
    cout<<"Enter Weight(pounds):\n"<<endl;
    cin>>weight;
    cout<<"Enter age:\n"<<endl;
    cin>>age;
    
    //Map inputs -> outputs
    hat=(weight/height)*2.9f;//the calculation for hat size
    jacket=(height*weight)/288;//the calculation for jacket size
    waist=weight/5.7f;//the calculation for waist size
    
    if (age>30){//if statement to see if you need to add 1/8 inches per 10 years after 30
        jacket+=((age-30)/10)*0.125;
    }
    if (age>28){//if statement to see if you need to add 1/10 inches per 2 years after 28 
        waist+=((age-28)/2)*0.1;
    }
    
    //Display the outputs
    cout<<fixed<<setprecision(1);
    cout<<"Hat size = "<<hat<<endl;
    cout<<"Jacket size = "<<jacket<<endl;
    cout<<"Waist size = "<<waist<<endl<<endl;
    cout<<"Run again:\n";
    cin>>choice;//user input if they want to repeat calculations
    if (choice == 'Y' || choice == 'y'){//if statement to add line break if you want to repeat
        cout<<endl;
    }
    }
    while (choice == 'Y' || choice == 'y');
    
    //Exit stage right or left!
    return 0;
}