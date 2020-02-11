/* 
 * Author: Christopher Mathis
 * Created on February 9, 2020
 * Purpose: DMV Exams
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void wrong(char[], char[], int);
int match(char[], char[], int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    const int SIZE=20;
    char correct[]={'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D', 'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B'};
    char student[SIZE];
    int result;
    
    //Initialize Variables
    cout<<"Enter the student's test answers:\n";
    for(int i=0; i<SIZE; i++){//for loop to get student's answers, store in array
        cin>>student[i];
    }
    
    //Process or map Inputs to Outputs
    result=match(correct, student, SIZE);//calculate the result of the exam
    
    if(result>=15){//if statement to see if they passed
        cout<<"The student passed.\n";
    }
    else{//else statement to output they failed
        cout<<"The student failed.\n";
    }
    
    cout<<"There were "<<result<<" correct answers.\n";
    cout<<"There were "<<SIZE-result<<" incorrect answers.\n";
    cout<<"Incorrect questions:\n";
    wrong(correct, student, SIZE);//output incorrect questions 
    
    //Display Outputs
    
    //Exit stage right!
    return 0;
}
void wrong(char a[], char b[], int c){
    for(int i=0; i<c; i++){//for loop to output incorrect questions
        if(b[i]!=a[i]){
            cout<<i+1<<endl;
        }
    }
}

int match(char a[], char b[], int c){
    int correct=0;
    for(int i=0; i<c; i++){//for loop to see how many questions were correct
        if(b[i]==a[i]){
            correct++;
        }
    }
    return correct++;
}