/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on February 6, 2020
 * Purpose: Mark Sort
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void fillAry(int [], int);
void prntAry(int [], int, int);
void swap1(int&,int&);
void swap2(int&,int&);
void lstMin(int [], int, int);
void markSrt3(int [], int);
void markSrt1(int [], int);
void cpyAry(int[], int[], int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    const int SIZE=100000;
    int array[SIZE];
    int brray[SIZE];
    
    //Input or initialize values Here
    fillAry(array,SIZE);
    cpyAry(brray,array,SIZE);
            
    //Process/Calculations Here
    int beg=time(0);
    markSrt1(array,SIZE);
    int end=time(0);
    cout<<"The Total Time For 1 Function Sort "<<end-beg<<" secs"<<endl;
    
    beg=time(0);
    markSrt3(brray,SIZE);
    end=time(0);
    cout<<"The Total Time For 3 Function Sort "<<end-beg<<" secs"<<endl;
    
    //Output Located Here
    //prntAry(array,SIZE,10);
    
    //Exit
    return 0;
}
void cpyAry(int a[], int b[], int n){
    for(int i=0; i<n; i++){
        a[i]=b[i];
    }
}
void markSrt1(int a[], int n){
    for(int j=0; j<n-1; j++){
        for(int i=j+1; i<n; i++){
            if(a[j]>a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
void markSrt3(int a[], int n){
    for(int i=0; i<n-1; i++){
        lstMin(a,n,i);
    }
}
void lstMin(int a[], int n, int pos){
    for(int i=pos+1; i<n; i++){
        if(a[pos]>a[i])swap1(a[pos],a[i]);
    }
}
void swap2(int&a,int&b){
    a=a^b;
    b=a^b;
    a=a^b;
}
void swap1(int&a,int&b){
    int temp=a;
    a=b;
    b=temp;
}
void prntAry(int a[],int n, int perLine){
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
        if((i%perLine)==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
void fillAry(int a[],int n){
    for(int i=0; i<n; i++){
        a[i]=rand();
    }
}