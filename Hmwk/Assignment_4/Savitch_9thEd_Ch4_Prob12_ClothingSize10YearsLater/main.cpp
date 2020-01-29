/* 
 * Author: Christopher Mathis
 * Created on January 21, 2020
 * Purpose: Calculate clothing sizes after 10 years
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
    float hght,wght,hat,jckt,jckt2,wast,wast2;
    char choice;
    
    //Initialize or input i.e. set variable values
    do{
    cout<<"Enter height(inches):\n"<<endl;
    cin>>hght;
    cout<<"Enter Weight(pounds):\n"<<endl;
    cin>>wght;
    cout<<"Enter age:\n"<<endl;
    cin>>age;
    
    //Map inputs -> outputs
    hat=(wght/hght)*2.9;
    jckt=(hght*wght)/288;
    wast=wght/5.7;
    
    if((age+10)>30){//if statement to find the jacket size 10 years later
        jckt2=jckt+((((age+10)-30)/10)*0.125);
    }
    if(age>30){
        jckt+=((age-30)/10)*0.125;
    }
    if((age+10)>28){//if statement to find waist size 10 years later
        wast2=wast+((((age+10)-28)/2)*0.1);
    }
    if(age>28){
        wast+=((age-28)/2)*0.1;
    }
    
    //Display the outputs
    cout<<fixed<<setprecision(1);
    cout<<"Hat size = "<<hat<<endl;
    cout<<"Jacket size = "<<jckt<<endl;
    cout<<"Jacket size in 10 years = "<<jckt2<<endl;
    cout<<"Waist size = "<<wast<<endl;
    cout<<"Waist size in 10 years = "<<wast2<<endl<<endl;
    cout<<"Run again:\n";
    cin>>choice;
    if(choice == 'Y' || choice == 'y'){
        cout<<endl;
    }
    }
    while(choice == 'Y' || choice == 'y');
    
    //Exit stage right or left!
    return 0;
}