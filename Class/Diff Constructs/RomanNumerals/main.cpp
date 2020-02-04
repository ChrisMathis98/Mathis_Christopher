/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on January 15, 2020, 11:10 AM
 * Purpose:  Roman Numeral Conversion
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned char n2Cnvrt;
    //Input or initialize values Here
    cout<<"This program converts Arabic to Roman Numerals\n";
    cout<<"Input a number between 1 - 3000\n";
    cin>>n2Cnvrt;
    if(n2Cnvrt>=1&&n2Cnvrt<=3000){
    //Determine 1000's, 100's, 10's, 1's
        unsigned char n1,n10,n100,n1000;
        n1000=n2Cnvrt/1000;
        n100=(n2Cnvrt-n1000*1000)/100;
        n10=(n2Cnvrt-n1000*1000-n100*100)/10;
        n1=n2Cnvrt%10;
        
    //Output the number of 1000's in roman numerals
        switch(n1000){
            case 3:cout<<'M';
            case 2:cout<<'M';
            case 1:cout<<'M';
        }
    //Output the number of 100's
        cout<<(n100==9?"CM":
               n100==8?"DCCC":
               n100==7?"DCC":
               n100==6?"DC":
               n100==5?"D":
               n100==4?"CD":
               n100==3?"CCC":
               n100==2?"CC":
               n100==1?"C":"");
                                   
    //Output the number of 10
        if(n10==9)cout<<"XC";
        if(n10==8)cout<<"LXXX";
        if(n10==7)cout<<"LXX";
        if(n10==6)cout<<"LX";
        if(n10==5)cout<<"L";
        if(n10==4)cout<<"XL";
        if(n10==3)cout<<"XXX";
        if(n10==2)cout<<"XX";
        if(n10==1)cout<<"X";
        
    //Output the number of 1's
        if(n1==9)cout<<"IX";
        else if(n1==8)cout<<"VIII";
        else if(n1==7)cout<<"VII";
        else if(n1==6)cout<<"VI";
        else if(n1==5)cout<<"L";
        else if(n1==4)cout<<"IV";
        else if(n1==3)cout<<"III";
        else if(n1==2)cout<<"II";
        else if(n1==1)cout<<"I";
        
    //Reiterate the input value
        cout<<" = "<<n2Cnvrt<<endl;
        //Exit
    
    }else{
        cout<<"You have problems following Directions\n";
        cout<<"come back when you decide to comply"<<endl;
    }
    return 0;
}

