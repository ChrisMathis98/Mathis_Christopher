/* 
 * Author: Christopher Mathis
 * Created on February 9, 2020
 * Purpose: Comparing Number of Searches
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
int selection(int[], int, int, int);
int bubble(int[], int, int, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    int arr1 []={
            81,36,37,85,52,70,38,55,31,37,
            27,58,32,40,99,79,92,31,32,64,
            92,35,85,66,27,67,23,11,91,88,
            17,18,71,49,13,82,68,82,23,12
    };
    int arr2 []={
            81,36,37,85,52,70,38,55,31,37,
            27,58,32,40,99,79,92,31,32,64,
            92,35,85,66,27,67,23,11,91,88,
            17,18,71,49,13,82,68,82,23,12
    };
    //Declare Variable Data Types and Constants
    int start, end;
    
    //Initialize Variables
    cout<<"Enter the starting location to sort:\n";
    cin>>start;
    cout<<"Enter the ending location to sort:\n";
    cin>>end;
    
    //Process or map Inputs to Outputs
    
    //Display Outputs
    cout<<"Selection Sort "<<selection(arr1, 20, start, end)<<endl;
    cout<<"Bubble Sort "<<bubble(arr2, 20, start, end);
    
    //Exit stage right!
    return 0;
}

int selection(int a[], int b, int s, int e){
    int counter=1;
    int min, index;
    for(s; s<e; s++){
        min=a[s];
        index=s;
        for(int i=s+1; i<e; i++){
            if(a[i]<min){
                min=a[index];
                index=i;
            }
        }
        if(index==s) continue;
        a[index]=a[s];
        a[s]=min;
        counter++;
    }
    return counter;
}

int bubble(int a[], int b, int s, int e){
    int counter=1;
    bool swapped;
    int temp;
    do{
        swapped=false;
        for(s; s<e-1; s++){
            if(a[s]>a[s+1]){
                temp=a[s];
                a[s]=a[s+1];
                a[s+1]=temp;
                swapped=true;
                counter++;
            }
        }
    }while(swapped);
    return counter;
}