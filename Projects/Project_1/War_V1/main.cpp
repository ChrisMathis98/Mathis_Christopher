/* 
 * Author: Christopher Mathis
 * Created: February 5, 2020
 * Purpose: Project 1
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

//Execution Begins Here
int main(int argc, char** argv) {
    //Display Beginning Message Using Files
    fstream inFile;
    inFile.open("beg.dat");
    string msg;
    while(inFile>>msg){
        cout<<msg<<" ";
    }
    
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char choice;
    unsigned int pRank, pSuit, cRank, cSuit, player, comp, coin, flip;
    string cnt;
    
    //Initialize Variables
    player=comp=26;
    
    //Do-While Loop to Continue the Game
    do{
        //Random Generator To Get Card Value and Suits
        pRank=rand()%13+1;
        pSuit=rand()%4+1;
        cRank=rand()%13+1;
        cSuit=rand()%4+1;
        
        //Prompt To Flip Cards
        cout<<"To Flip The Card, Press Y.\n";
        cin>>choice;
        cout<<endl;
        
        //While Loop to Validate input
        while(choice!='Y' && choice!='y'){
        cout<<"Invalid Entry, Please Press Y To Flip The Card.\n";
        cin>>choice;
        cout<<endl;
        }
        
        //Flip Cards
        cout<<"Player Played ";
        switch(pRank){
            case 1:cout<<"Ace ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            case 10:cout<<"Ten ";break;
            case 11:cout<<"Jack ";break;
            case 12:cout<<"Queen ";break;
            case 13:cout<<"King ";break;
        }
        switch(pSuit){
            case 1:cout<<"Of Clubs.\n";break;
            case 2:cout<<"Of Diamonds.\n";break;
            case 3:cout<<"Of Hearts.\n";break;
            case 4:cout<<"Of Spades.\n";break;
        }
        
        cout<<"Computer Played ";
        switch(cRank){
            case 1:cout<<"Ace ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            case 10:cout<<"Ten ";break;
            case 11:cout<<"Jack ";break;
            case 12:cout<<"Queen ";break;
            case 13:cout<<"King ";break;
        }
        switch(cSuit){
            case 1:cout<<"Of Clubs.\n";break;
            case 2:cout<<"Of Diamonds.\n";break;
            case 3:cout<<"Of Hearts.\n";break;
            case 4:cout<<"Of Spades.\n";break;
        }
        cout<<endl;
        
        //See Who Gets the Points/Cards
        if(pRank>cRank){
        cout<<"Player Wins This Round!\n"<<endl;
        //Counters
        player++;
        comp--;
        cout<<"Player Has "<<player<<" Cards.\n";
        cout<<"Computer Has "<<comp<<" Cards.\n";
        cout<<endl;
        }
        
        if(pRank<cRank){
        cout<<"Computer Wins This Round!\n"<<endl;
        //Counters
        player--;
        comp++;
        cout<<"Player Has "<<player<<" Cards.\n";
        cout<<"Computer Has "<<comp<<" Cards.\n";
        cout<<endl;
        }
        
        if(pRank==cRank && player>4 && comp>4){
        cout<<"It's War!\n";
        cout<<"Both Place 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;
        
        //Prompt to Flip
        cout<<"To Flip The Card, Press Y.\n";
        cin>>choice;
        cout<<endl;
        
        //While Loop to Validate Input
        while(choice!='Y' && choice!='y'){
        cout<<"Invalid Entry, Please Press Y.\n";
        cin>>choice;
        cout<<endl;
        }
        
        //Random Generator To Get Card Values and Suits
        pRank=rand()%13+1;
        pSuit=rand()%4+1;
        cRank=rand()%13+1;
        cSuit=rand()%4+1;
        
        cout<<"Player Played ";
        switch(pRank){
            case 1:cout<<"Ace ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            case 10:cout<<"Ten ";break;
            case 11:cout<<"Jack ";break;
            case 12:cout<<"Queen ";break;
            case 13:cout<<"King ";break;
        }
        switch(pSuit){
            case 1:cout<<"Of Clubs.\n";break;
            case 2:cout<<"Of Diamonds.\n";break;
            case 3:cout<<"Of Hearts.\n";break;
            case 4:cout<<"Of Spades.\n";break;
        }
        
        cout<<"Computer Played ";
        switch(cRank){
            case 1:cout<<"Ace ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            case 10:cout<<"Ten ";break;
            case 11:cout<<"Jack ";break;
            case 12:cout<<"Queen ";break;
            case 13:cout<<"King ";break;
        }
        switch(cSuit){
            case 1:cout<<"Of Clubs.\n";break;
            case 2:cout<<"Of Diamonds.\n";break;
            case 3:cout<<"Of Hearts.\n";break;
            case 4:cout<<"Of Spades.\n";break;
        }
        cout<<endl;
        
        //See Who Gets The Points/Cards
        if(pRank>cRank){
            cout<<"Player Wins The War!\n"<<endl;
            //Counters
            player+=5;
            comp-=5;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
        
        if(pRank<cRank){
            cout<<"Computer Wins The War!\n"<<endl;
            //Counters
            player-=5;
            comp+=5;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
        
        if(pRank==cRank){
            cout<<"It's War Again!\n";
            cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";
            
            //Enter Heads or Tails
            cin>>flip;
            cout<<endl;
            
            //While Loop to Validate Input
            while(flip!=1 && flip!=0){
            cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
            cin>>choice;
            cout<<endl;
            }
            
            //Flip Coin
            coin=rand()%2;
            cout<<coin<<endl;
            
            if(flip==coin){
                cout<<"Player Wins The War!\n"<<endl;;
                player+=5;
                comp-=5;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }
            else{
                cout<<"Computer Wins The War!\n"<<endl;;
                player-=5;
                comp+=5;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }
        }
    }
        if(pRank==cRank && player==4){
        cout<<"It's War!\n";
        cout<<"Both Place 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;
        
        //Prompt to Flip
        cout<<"To Flip The Card, Press Y.\n";
        cin>>choice;
        cout<<endl;
        
        //While Loop to Validate Input
        while(choice!='Y' && choice!='y'){
        cout<<"Invalid Entry, Please Press Y.\n";
        cin>>choice;
        cout<<endl;
        }
        
        //Random Generator To Get Card Values and Suits
        pRank=rand()%13+1;
        pSuit=rand()%4+1;
        cRank=rand()%13+1;
        cSuit=rand()%4+1;
        
        cout<<"Player Played ";
        switch(pRank){
            case 1:cout<<"Ace ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            case 10:cout<<"Ten ";break;
            case 11:cout<<"Jack ";break;
            case 12:cout<<"Queen ";break;
            case 13:cout<<"King ";break;
        }
        switch(pSuit){
            case 1:cout<<"Of Clubs.\n";break;
            case 2:cout<<"Of Diamonds.\n";break;
            case 3:cout<<"Of Hearts.\n";break;
            case 4:cout<<"Of Spades.\n";break;
        }
        
        cout<<"Computer Played ";
        switch(cRank){
            case 1:cout<<"Ace ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            case 10:cout<<"Ten ";break;
            case 11:cout<<"Jack ";break;
            case 12:cout<<"Queen ";break;
            case 13:cout<<"King ";break;
        }
        switch(cSuit){
            case 1:cout<<"Of Clubs.\n";break;
            case 2:cout<<"Of Diamonds.\n";break;
            case 3:cout<<"Of Hearts.\n";break;
            case 4:cout<<"Of Spades.\n";break;
        }
        cout<<endl;
        
        //See Who Gets The Points/Cards
        if(pRank>cRank){
            cout<<"Player Wins The War!\n"<<endl;
            //Counters
            player+=5;
            comp-=5;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
        
        if(pRank<cRank){
            cout<<"Computer Wins The War!\n"<<endl;
            //Counters
            player-=4;
            comp+=4;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
        
        if(pRank==cRank){
            cout<<"It's War Again!\n";
            cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";
            
            //Enter Heads or Tails
            cin>>flip;
            cout<<endl;
            
            //While Loop to Validate Input
            while(flip!=1 && flip!=0){
            cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
            cin>>choice;
            cout<<endl;
            }
            
            //Flip Coin
            coin=rand()%2;
            cout<<coin<<endl;
            
            if(flip==coin){
                cout<<"Player Wins The War!\n"<<endl;;
                player+=5;
                comp-=5;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }
            else{
                cout<<"Computer Wins The War!\n"<<endl;;
                player-=4;
                comp+=4;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }
        }
    }
        if(pRank==cRank && comp==4){
        cout<<"It's War!\n";
        cout<<"Both Place 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;
        
        //Prompt to Flip
        cout<<"To Flip The Card, Press Y.\n";
        cin>>choice;
        cout<<endl;
        
        //While Loop to Validate Input
        while(choice!='Y' && choice!='y'){
        cout<<"Invalid Entry, Please Press Y.\n";
        cin>>choice;
        cout<<endl;
        }
        
        //Random Generator To Get Card Values and Suits
        pRank=rand()%13+1;
        pSuit=rand()%4+1;
        cRank=rand()%13+1;
        cSuit=rand()%4+1;
        
        cout<<"Player Played ";
        switch(pRank){
            case 1:cout<<"Ace ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            case 10:cout<<"Ten ";break;
            case 11:cout<<"Jack ";break;
            case 12:cout<<"Queen ";break;
            case 13:cout<<"King ";break;
        }
        switch(pSuit){
            case 1:cout<<"Of Clubs.\n";break;
            case 2:cout<<"Of Diamonds.\n";break;
            case 3:cout<<"Of Hearts.\n";break;
            case 4:cout<<"Of Spades.\n";break;
        }
        
        cout<<"Computer Played ";
        switch(cRank){
            case 1:cout<<"Ace ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            case 10:cout<<"Ten ";break;
            case 11:cout<<"Jack ";break;
            case 12:cout<<"Queen ";break;
            case 13:cout<<"King ";break;
        }
        switch(cSuit){
            case 1:cout<<"Of Clubs.\n";break;
            case 2:cout<<"Of Diamonds.\n";break;
            case 3:cout<<"Of Hearts.\n";break;
            case 4:cout<<"Of Spades.\n";break;
        }
        cout<<endl;
        
        //See Who Gets The Points/Cards
        if(pRank>cRank){
            cout<<"Player Wins The War!\n"<<endl;
            //Counters
            player+=4;
            comp-=4;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
        
        if(pRank<cRank){
            cout<<"Computer Wins The War!\n"<<endl;
            //Counters
            player-=5;
            comp+=5;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
        
        if(pRank==cRank){
            cout<<"It's War Again!\n";
            cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";
            
            //Enter Heads or Tails
            cin>>flip;
            cout<<endl;
            
            //While Loop to Validate Input
            while(flip!=1 && flip!=0){
            cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
            cin>>choice;
            cout<<endl;
            }
            
            //Flip Coin
            coin=rand()%2;
            cout<<coin<<endl;
            
            if(flip==coin){
                cout<<"Player Wins The War!\n"<<endl;;
                player+=4;
                comp-=4;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }
            else{
                cout<<"Computer Wins The War!\n"<<endl;;
                player-=5;
                comp+=5;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }
        }
    }
        if(pRank==cRank && player==3){
        cout<<"It's War!\n";
        cout<<"Both Place 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;
        
        //Prompt to Flip
        cout<<"To Flip The Card, Press Y.\n";
        cin>>choice;
        cout<<endl;
        
        //While Loop to Validate Input
        while(choice!='Y' && choice!='y'){
        cout<<"Invalid Entry, Please Press Y.\n";
        cin>>choice;
        cout<<endl;
        }
        
        //Random Generator To Get Card Values and Suits
        pRank=rand()%13+1;
        pSuit=rand()%4+1;
        cRank=rand()%13+1;
        cSuit=rand()%4+1;
        
        cout<<"Player Played ";
        switch(pRank){
            case 1:cout<<"Ace ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            case 10:cout<<"Ten ";break;
            case 11:cout<<"Jack ";break;
            case 12:cout<<"Queen ";break;
            case 13:cout<<"King ";break;
        }
        switch(pSuit){
            case 1:cout<<"Of Clubs.\n";break;
            case 2:cout<<"Of Diamonds.\n";break;
            case 3:cout<<"Of Hearts.\n";break;
            case 4:cout<<"Of Spades.\n";break;
        }
        
        cout<<"Computer Played ";
        switch(cRank){
            case 1:cout<<"Ace ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            case 10:cout<<"Ten ";break;
            case 11:cout<<"Jack ";break;
            case 12:cout<<"Queen ";break;
            case 13:cout<<"King ";break;
        }
        switch(cSuit){
            case 1:cout<<"Of Clubs.\n";break;
            case 2:cout<<"Of Diamonds.\n";break;
            case 3:cout<<"Of Hearts.\n";break;
            case 4:cout<<"Of Spades.\n";break;
        }
        cout<<endl;
        
        //See Who Gets The Points/Cards
        if(pRank>cRank){
            cout<<"Player Wins The War!\n"<<endl;
            //Counters
            player+=5;
            comp-=5;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
        
        if(pRank<cRank){
            cout<<"Computer Wins The War!\n"<<endl;
            //Counters
            player-=3;
            comp+=3;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
        
        if(pRank==cRank){
            cout<<"It's War Again!\n";
            cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";
            
            //Enter Heads or Tails
            cin>>flip;
            cout<<endl;
            
            //While Loop to Validate Input
            while(flip!=1 && flip!=0){
            cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
            cin>>choice;
            cout<<endl;
            }
            
            //Flip Coin
            coin=rand()%2;
            cout<<coin<<endl;
            
            if(flip==coin){
                cout<<"Player Wins The War!\n"<<endl;;
                player+=5;
                comp-=5;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }
            else{
                cout<<"Computer Wins The War!\n"<<endl;;
                player-=3;
                comp+=3;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }
        }
    }
        if(pRank==cRank && comp==3){
        cout<<"It's War!\n";
        cout<<"Both Place 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;
        
        //Prompt to Flip
        cout<<"To Flip The Card, Press Y.\n";
        cin>>choice;
        cout<<endl;
        
        //While Loop to Validate Input
        while(choice!='Y' && choice!='y'){
        cout<<"Invalid Entry, Please Press Y.\n";
        cin>>choice;
        cout<<endl;
        }
        
        //Random Generator To Get Card Values and Suits
        pRank=rand()%13+1;
        pSuit=rand()%4+1;
        cRank=rand()%13+1;
        cSuit=rand()%4+1;
        
        cout<<"Player Played ";
        switch(pRank){
            case 1:cout<<"Ace ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            case 10:cout<<"Ten ";break;
            case 11:cout<<"Jack ";break;
            case 12:cout<<"Queen ";break;
            case 13:cout<<"King ";break;
        }
        switch(pSuit){
            case 1:cout<<"Of Clubs.\n";break;
            case 2:cout<<"Of Diamonds.\n";break;
            case 3:cout<<"Of Hearts.\n";break;
            case 4:cout<<"Of Spades.\n";break;
        }
        
        cout<<"Computer Played ";
        switch(cRank){
            case 1:cout<<"Ace ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            case 10:cout<<"Ten ";break;
            case 11:cout<<"Jack ";break;
            case 12:cout<<"Queen ";break;
            case 13:cout<<"King ";break;
        }
        switch(cSuit){
            case 1:cout<<"Of Clubs.\n";break;
            case 2:cout<<"Of Diamonds.\n";break;
            case 3:cout<<"Of Hearts.\n";break;
            case 4:cout<<"Of Spades.\n";break;
        }
        cout<<endl;
        
        //See Who Gets The Points/Cards
        if(pRank>cRank){
            cout<<"Player Wins The War!\n"<<endl;
            //Counters
            player+=3;
            comp-=3;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
        
        if(pRank<cRank){
            cout<<"Computer Wins The War!\n"<<endl;
            //Counters
            player-=5;
            comp+=5;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
        
        if(pRank==cRank){
            cout<<"It's War Again!\n";
            cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";
            
            //Enter Heads or Tails
            cin>>flip;
            cout<<endl;
            
            //While Loop to Validate Input
            while(flip!=1 && flip!=0){
            cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
            cin>>choice;
            cout<<endl;
            }
            
            //Flip Coin
            coin=rand()%2;
            cout<<coin<<endl;
            
            if(flip==coin){
                cout<<"Player Wins The War!\n"<<endl;;
                player+=3;
                comp-=3;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }
            else{
                cout<<"Computer Wins The War!\n"<<endl;;
                player-=5;
                comp+=5;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }
        }
    }
        if(pRank==cRank && player==2){
        cout<<"It's War!\n";
        cout<<"Both Place 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;
        
        //Prompt to Flip
        cout<<"To Flip The Card, Press Y.\n";
        cin>>choice;
        cout<<endl;
        
        //While Loop to Validate Input
        while(choice!='Y' && choice!='y'){
        cout<<"Invalid Entry, Please Press Y.\n";
        cin>>choice;
        cout<<endl;
        }
        
        //Random Generator To Get Card Values and Suits
        pRank=rand()%13+1;
        pSuit=rand()%4+1;
        cRank=rand()%13+1;
        cSuit=rand()%4+1;
        
        cout<<"Player Played ";
        switch(pRank){
            case 1:cout<<"Ace ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            case 10:cout<<"Ten ";break;
            case 11:cout<<"Jack ";break;
            case 12:cout<<"Queen ";break;
            case 13:cout<<"King ";break;
        }
        switch(pSuit){
            case 1:cout<<"Of Clubs.\n";break;
            case 2:cout<<"Of Diamonds.\n";break;
            case 3:cout<<"Of Hearts.\n";break;
            case 4:cout<<"Of Spades.\n";break;
        }
        
        cout<<"Computer Played ";
        switch(cRank){
            case 1:cout<<"Ace ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            case 10:cout<<"Ten ";break;
            case 11:cout<<"Jack ";break;
            case 12:cout<<"Queen ";break;
            case 13:cout<<"King ";break;
        }
        switch(cSuit){
            case 1:cout<<"Of Clubs.\n";break;
            case 2:cout<<"Of Diamonds.\n";break;
            case 3:cout<<"Of Hearts.\n";break;
            case 4:cout<<"Of Spades.\n";break;
        }
        cout<<endl;
        
        //See Who Gets The Points/Cards
        if(pRank>cRank){
            cout<<"Player Wins The War!\n"<<endl;
            //Counters
            player+=5;
            comp-=5;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
        
        if(pRank<cRank){
            cout<<"Computer Wins The War!\n"<<endl;
            //Counters
            player-=2;
            comp+=2;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
        
        if(pRank==cRank){
            cout<<"It's War Again!\n";
            cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";
            
            //Enter Heads or Tails
            cin>>flip;
            cout<<endl;
            
            //While Loop to Validate Input
            while(flip!=1 && flip!=0){
            cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
            cin>>choice;
            cout<<endl;
            }
            
            //Flip Coin
            coin=rand()%2;
            cout<<coin<<endl;
            
            if(flip==coin){
                cout<<"Player Wins The War!\n"<<endl;;
                player+=5;
                comp-=5;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }
            else{
                cout<<"Computer Wins The War!\n"<<endl;;
                player-=2;
                comp+=2;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }
        }
    }
        if(pRank==cRank && comp==2){
        cout<<"It's War!\n";
        cout<<"Both Place 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;
        
        //Prompt to Flip
        cout<<"To Flip The Card, Press Y.\n";
        cin>>choice;
        cout<<endl;
        
        //While Loop to Validate Input
        while(choice!='Y' && choice!='y'){
        cout<<"Invalid Entry, Please Press Y.\n";
        cin>>choice;
        cout<<endl;
        }
        
        //Random Generator To Get Card Values and Suits
        pRank=rand()%13+1;
        pSuit=rand()%4+1;
        cRank=rand()%13+1;
        cSuit=rand()%4+1;
        
        cout<<"Player Played ";
        switch(pRank){
            case 1:cout<<"Ace ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            case 10:cout<<"Ten ";break;
            case 11:cout<<"Jack ";break;
            case 12:cout<<"Queen ";break;
            case 13:cout<<"King ";break;
        }
        switch(pSuit){
            case 1:cout<<"Of Clubs.\n";break;
            case 2:cout<<"Of Diamonds.\n";break;
            case 3:cout<<"Of Hearts.\n";break;
            case 4:cout<<"Of Spades.\n";break;
        }
        
        cout<<"Computer Played ";
        switch(cRank){
            case 1:cout<<"Ace ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            case 10:cout<<"Ten ";break;
            case 11:cout<<"Jack ";break;
            case 12:cout<<"Queen ";break;
            case 13:cout<<"King ";break;
        }
        switch(cSuit){
            case 1:cout<<"Of Clubs.\n";break;
            case 2:cout<<"Of Diamonds.\n";break;
            case 3:cout<<"Of Hearts.\n";break;
            case 4:cout<<"Of Spades.\n";break;
        }
        cout<<endl;
        
        //See Who Gets The Points/Cards
        if(pRank>cRank){
            cout<<"Player Wins The War!\n"<<endl;
            //Counters
            player+=2;
            comp-=2;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
        
        if(pRank<cRank){
            cout<<"Computer Wins The War!\n"<<endl;
            //Counters
            player-=5;
            comp+=5;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
        
        if(pRank==cRank){
            cout<<"It's War Again!\n";
            cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";
            
            //Enter Heads or Tails
            cin>>flip;
            cout<<endl;
            
            //While Loop to Validate Input
            while(flip!=1 && flip!=0){
            cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
            cin>>choice;
            cout<<endl;
            }
            
            //Flip Coin
            coin=rand()%2;
            cout<<coin<<endl;
            
            if(flip==coin){
                cout<<"Player Wins The War!\n"<<endl;;
                player+=2;
                comp-=2;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }
            else{
                cout<<"Computer Wins The War!\n"<<endl;;
                player-=5;
                comp+=5;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }
        }
    }
        if(pRank==cRank && player==1){
        cout<<"It's War!\n";
        cout<<"You Cannot Put Any Cards Down, The Computer Will Put 3 Cards Face Down.\n";
        cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";
        
        //enter heads or tails
        cin>>flip;
        cout<<endl;
        
        //While Loop to Validate Input
        while(flip!=1 && flip!=0){
        cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
        cin>>choice;
        cout<<endl;
        }
        
        //flip coin
        coin=rand()%2;
        cout<<coin<<endl;
        
        if(flip==coin){
            cout<<"Player Wins The War!\n";
            player+=5;
            comp-=5;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
        else{
            cout<<"Computer Wins The War!\n";
            player-=1;
            comp+=1;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
    }
        if(pRank==cRank && comp==1){
        cout<<"It's War!\n";
        cout<<"You Cannot Put Any Cards Down, The Computer Will Put 3 Cards Face Down.\n";
        cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";
        
        //enter heads or tails
        cin>>flip;
        cout<<endl;
        
        //While Loop to Validate Input
        while(flip!=1 && flip!=0){
        cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
        cin>>choice;
        cout<<endl;
        }
        
        //flip coin
        coin=rand()%2;
        cout<<coin<<endl;
        
        if(flip==coin){
            cout<<"Player Wins The War!\n";
            player+=1;
            comp-=1;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
        else{
            cout<<"Computer Wins The War!\n";
            player-=5;
            comp+=5;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
    }
        cnt=(player<52 && comp<52)?"Continue The Game, Flip A Card.\n":"Game Over.\n";
        cout<<cnt;
        cout<<endl;
    }while(player<52 && comp<52);
    
    if(player==52 || comp==0){
        cout<<endl<<"You Won :)\n";
    }
    else if(player==0 || comp==52){
        cout<<endl<<"Computer Won :(\n";
    }
    
    //Exit stage right!
    inFile.close();
    return 0;
}