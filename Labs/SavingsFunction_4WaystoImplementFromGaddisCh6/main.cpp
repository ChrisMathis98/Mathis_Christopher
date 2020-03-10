/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on January 27, 2020
 * Purpose: 4 ways to write a function
 */

//System Libraries Here
#include <iostream>
#include <cmath>//math library
#include <iomanip>//format library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float CNVPERC=100.0;//Conversion to percent

//Function Prototypes Here
float save1(float,float,int);//Using pow
float save2(float,float,int);//Using exp, log
float save3(float,float,int);//Using for loops
float save4(float,float,int);
float save5(float,float,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float presVal,//Present value in dollars
          intRate;//Interest rate in decimal
    int numCmpd;//Number of compound periods in years
    
    //Input or initialize values Here
    presVal=100.0;//$100
    intRate=6;//6%
    
    //Process/Calculations Here
    numCmpd=72/intRate;//Rule of 72 => FV~2*PV
    intRate/=CNVPERC;//Convert percent to decimal
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present Value = $"<<setw(7)<<presVal<<endl;
    cout<<"Interest Rate =  "<<setw(7)<<intRate*100<<"%"<<endl;
    cout<<"Compounding   =  "<<setw(4)<<numCmpd<<" Yrs"<<endl;
    cout<<"Savings 1     = $"<<setw(7)
            <<save1(presVal,intRate,numCmpd)<<endl;
    cout<<"Savings 2     = $"<<setw(7)
            <<save2(presVal,intRate,numCmpd)<<endl;
    cout<<"Savings 3     = $"<<setw(7)
            <<save3(presVal,intRate,numCmpd)<<endl;
    cout<<"Savings 4     = $"<<setw(7)
            <<save4(presVal,intRate,numCmpd)<<endl;
    cout<<"Savings 5     = $"<<setw(7)
            <<save5(presVal,intRate,numCmpd)<<endl;
    
    //Exit
    return 0;
}

//00000001111111111222222222233333333334444444444555555555566666666667777777777
//34567890123456789012345678901234567890123456789012345678901234567890123456789
//              Savings Function Version 1
//Inputs:
//      pv-> Present Value in Dollars
//      i->  Interest Rate in decimal
//      n->  Number of Compounding periods in years
//00000001111111111222222222233333333334444444444555555555566666666667777777777
//34567890123456789012345678901234567890123456789012345678901234567890123456789
float save1(float pv,float i,int n){
    return pv*pow(1+i,n);
}

//00000001111111111222222222233333333334444444444555555555566666666667777777777
//34567890123456789012345678901234567890123456789012345678901234567890123456789
//              Savings Function Version 2
//Inputs:
//      pv-> Present Value in Dollars
//      i->  Interest Rate in decimal
//      n->  Number of Compounding periods in years
//00000001111111111222222222233333333334444444444555555555566666666667777777777
//34567890123456789012345678901234567890123456789012345678901234567890123456789
float save2(float pv,float i,int n){
    return pv*exp(n*log(1+i));
}

//00000001111111111222222222233333333334444444444555555555566666666667777777777
//34567890123456789012345678901234567890123456789012345678901234567890123456789
//              Savings Function Version 3
//Inputs:
//      pv-> Present Value in Dollars
//      i->  Interest Rate in decimal
//      n->  Number of Compounding periods in years
//00000001111111111222222222233333333334444444444555555555566666666667777777777
//34567890123456789012345678901234567890123456789012345678901234567890123456789
float save3(float pv,float i,int n){
    float fv=pv;
    for(int j=1;j<=n;j++){
        fv*=(1+i);
    }
    return fv;
}

//00000001111111111222222222233333333334444444444555555555566666666667777777777
//34567890123456789012345678901234567890123456789012345678901234567890123456789
//              Savings Function Version 4
//Inputs:
//      pv-> Present Value in Dollars
//      i->  Interest Rate in decimal
//      n->  Number of Compounding periods in years
//00000001111111111222222222233333333334444444444555555555566666666667777777777
//34567890123456789012345678901234567890123456789012345678901234567890123456789
float save4(float pv,float i,int n){
    for(int j=1;j<=n;j++){
        pv*=(1+i);
    }
    return pv;
}

//00000001111111111222222222233333333334444444444555555555566666666667777777777
//34567890123456789012345678901234567890123456789012345678901234567890123456789
//              Savings Function Version 5
//Inputs:
//      pv-> Present Value in Dollars
//      i->  Interest Rate in decimal
//      n->  Number of Compounding periods in years
//00000001111111111222222222233333333334444444444555555555566666666667777777777
//34567890123456789012345678901234567890123456789012345678901234567890123456789
float save5(float pv,float i,int n){
    if(n<=0)return pv;
    return save5(pv,i,n-1)*(1+i);
}