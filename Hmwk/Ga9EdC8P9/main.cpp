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
int selection(int[], int, int);
int bubble(int[], int, int);

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
    cout<<"Selection Sort "<<selection(arr1, start, end)<<endl;
    cout<<"Bubble Sort "<<bubble(arr2, start, end);
    
    //Exit stage right!
    return 0;
}

int selection(int a[], int start, int end){
    int counter=0;
    int val, min;
    for(int i=start; i<end-1; i++){
        min=i;
        val=a[i];
        
        for(int index=i+1; index<end; index++){
            if(a[index]<val){
               val=a[i];
               min=index;
            }
        }
       counter++;
       swap(a[min], a[i]);
    }
    return counter;
}

int bubble(int a[], int start, int end){
    int index;
    int counter=0;
    
    for(int i=end-1; i>0; i--){
        for(index=start; index<i; index++){
            if(a[index]>a[index+1]){
                counter++;
                swap(a[index], a[index+1]);
            }
        }
    }
    return counter;
}