/* 
 * Author: Christopher Mathis
 * Created: February 4, 2020
 * Purpose: see who wins each round
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    unsigned int player, comp, pCard, cCard, coin;
    int flip;//coin value heads or tails
    string cnt;//continue statement
    
    //Initialize Variables
    player=comp=26;//counters starts at 26
    
    //propmt to flip and flip
    cin>>pCard>>cCard;
    
    //See who gets the points/cards
    if(pCard>cCard){
        cout<<"Player Wins This Round\n";
        //counters
        player++;
        comp--;
        cout<<"Player has "<<player<<" cards\n";
        cout<<"Computer has "<<comp<<" cards\n";
    }
    if(pCard<cCard){
        cout<<"Computer Wins This Round\n";
        //counters
        player--;
        comp++;
        cout<<"Player has "<<player<<" cards\n";
        cout<<"Computer has "<<comp<<" cards\n";
    }
    if(pCard==cCard && player>4 && comp>4){
        cout<<"It's War!\n";
        cout<<"Both place 3 cards face down\n";
        cout<<"Each flip another card\n";
        //prompt to flip
        cin>>pCard>>cCard;

        if(pCard>cCard){
            cout<<"Player Wins The War\n";
            //counters
            player+=5;
            comp-=5;
            cout<<"Player has "<<player<<" cards\n";
            cout<<"Computer has "<<comp<<" cards\n";
        }
        if(pCard<cCard){
            cout<<"Computer Wins The War\n";
            //counters
            player-=5;
            comp+=5;
            cout<<"Player has "<<player<<" cards\n";
            cout<<"Computer has "<<comp<<" cards\n";
        }
        if(pCard==cCard){
            cout<<"It's War Again\n";
            cout<<"Flip a coin, choose heads(1) or tails(0)\n";
            //enter heads or tails
            cin>>flip;
            //flip coin
            coin=rand()%2;
            cout<<coin<<endl;
            if(flip==coin){
                cout<<"Player Wins The War\n";
                player+=5;
                comp-=5;
                cout<<"Player has "<<player<<" cards\n";
                cout<<"Computer has "<<comp<<" cards\n";
            }
            else{
                cout<<"Computer Wins The War\n";
                player-=5;
                comp+=5;
                cout<<"Player has "<<player<<" cards\n";
                cout<<"Computer has "<<comp<<" cards\n";
            }
        }
    }
    if(pCard==cCard && player==4){
        cout<<"It's War!\n";
        cout<<"Put 2 cards face down, the Computer will put 3 cards face down\n";
        cout<<"Each flip another card\n";
        //prompt to flip card 
        cin>>pCard>>cCard;

        if(pCard>cCard){
            cout<<"Player Wins The War\n";
            //counters
            player+=5;
            comp-=5;
            cout<<"Player has "<<player<<" cards\n";
            cout<<"Computer has "<<comp<<" cards\n";
        }
        if(pCard<cCard){
            cout<<"Computer Wins The War\n";
            //counters
            player-=4;
            comp+=4;
            cout<<"Player has "<<player<<" cards\n";
            cout<<"Computer has "<<comp<<" cards\n";
        }
        if(pCard==cCard){
            cout<<"It's War Again\n";
            cout<<"Flip a coin, choose heads(1) or tails(0)\n";
            //enter heads or tails
            cin>>flip;
            //flip coin
            coin=rand()%2;
            cout<<coin<<endl;
            if(flip==coin){
                cout<<"Player Wins The War\n";
                player+=5;
                comp-=5;
                cout<<"Player has "<<player<<" cards\n";
                cout<<"Computer has "<<comp<<" cards\n";
            }
            else{
                cout<<"Computer Wins The War\n";
                player-=4;
                comp+=4;
                cout<<"Player has "<<player<<" cards\n";
                cout<<"Computer has "<<comp<<" cards\n";
            }
        }
    }
    if(pCard==cCard && comp==4){
        cout<<"It's War!\n";
        cout<<"Put 3 cards face down, the Computer will put 2 cards face down\n";
        cout<<"Each flip another card\n";
        //prompt to flip card
        cin>>pCard>>cCard;

        if(pCard>cCard){
            cout<<"Player Wins The War\n";
            //counters
            player+=4;
            comp-=4;
            cout<<"Player has "<<player<<" cards\n";
            cout<<"Computer has "<<comp<<" cards\n";
        }
        if(pCard<cCard){
            cout<<"Computer Wins The War\n";
            //counters
            player-=5;
            comp+=5;
            cout<<"Player has "<<player<<" cards\n";
            cout<<"Computer has "<<comp<<" cards\n";
        }
        if(pCard==cCard){
            cout<<"It's War Again\n";
            cout<<"Flip a coin, choose heads(1) or tails(0)\n";
            //enter heads or tails
            cin>>flip;
            //flip coin
            coin=rand()%2;
            cout<<coin<<endl;
            if(flip==coin){
                cout<<"Player Wins The War\n";
                player+=4;
                comp-=4;
                cout<<"Player has "<<player<<" cards\n";
                cout<<"Computer has "<<comp<<" cards\n";
            }
            else{
                cout<<"Computer Wins The War\n";
                player-=5;
                comp+=5;
                cout<<"Player has "<<player<<" cards\n";
                cout<<"Computer has "<<comp<<" cards\n";
            }
        }
    }
    if(pCard==cCard && player==3){
        cout<<"It's War!\n";
        cout<<"Put 1 card face down, the Computer will put 3 cards face down\n";
        cout<<"Each flip another card\n";
        //prompt to flip a card
        cin>>pCard>>cCard;

        if(pCard>cCard){
            cout<<"Player Wins The War\n";
            //counters
            player+=5;
            comp-=5;
            cout<<"Player has "<<player<<" cards\n";
            cout<<"Computer has "<<comp<<" cards\n";
        }
        if(pCard<cCard){
            cout<<"Computer Wins The War\n";
            //counters
            player-=3;
            comp+=3;
            cout<<"Player has "<<player<<" cards\n";
            cout<<"Computer has "<<comp<<" cards\n";
        }
        if(pCard==cCard){
            cout<<"It's War Again\n";
            cout<<"Flip a coin, choose heads(1) or tails(0)\n";
            //enter heads or tails
            cin>>flip;
            //flip coin
            coin=rand()%2;
            cout<<coin<<endl;
            if(flip==coin){
                cout<<"Player Wins The War\n";
                player+=5;
                comp-=5;
                cout<<"Player has "<<player<<" cards\n";
                cout<<"Computer has "<<comp<<" cards\n";
            }
            else{
                cout<<"Computer Wins The War\n";
                player-=3;
                comp+=3;
                cout<<"Player has "<<player<<" cards\n";
                cout<<"Computer has "<<comp<<" cards\n";
            }
        }
    }
    if(pCard==cCard && comp==3){
        cout<<"It's War!\n";
        cout<<"Put 3 cards face down, the Computer will put 1 card face down\n";
        cout<<"Each flip another card\n";
        //prompt to flip a card
        cin>>pCard>>cCard;

        if(pCard>cCard){
            cout<<"Player Wins The War\n";
            //counters
            player+=3;
            comp-=3;
            cout<<"Player has "<<player<<" cards\n";
            cout<<"Computer has "<<comp<<" cards\n";
        }
        if(pCard<cCard){
            cout<<"Computer Wins The War\n";
            //counters
            player-=5;
            comp+=5;
            cout<<"Player has "<<player<<" cards\n";
            cout<<"Computer has "<<comp<<" cards\n";
        }
        if(pCard==cCard){
            cout<<"It's War Again\n";
            cout<<"Flip a coin, choose heads(1) or tails(0)\n";
            //enter heads or tails
            cin>>flip;
            //flip coin
            coin=rand()%2;
            cout<<coin<<endl;
            if(flip==coin){
                cout<<"Player Wins The War\n";
                player+=3;
                comp-=3;
                cout<<"Player has "<<player<<" cards\n";
                cout<<"Computer has "<<comp<<" cards\n";
            }
            else{
                cout<<"Computer Wins The War\n";
                player-=5;
                comp+=5;
                cout<<"Player has "<<player<<" cards\n";
                cout<<"Computer has "<<comp<<" cards\n";
            }
        }
    }
    if(pCard==cCard && player==2){
        cout<<"It's War!\n";
        cout<<"You cannot put any cards down, the Computer will put 3 cards face down\n";
        cout<<"Each flip another card\n";
        //prompt to flip a coin
        cin>>pCard>>cCard;

        if(pCard>cCard){
            cout<<"Player Wins The War\n";
            //counters
            player+=5;
            comp-=5;
            cout<<"Player has "<<player<<" cards\n";
            cout<<"Computer has "<<comp<<" cards\n";
        }
        if(pCard<cCard){
            cout<<"Computer Wins The War\n";
            //counters
            player-=2;
            comp+=2;
            cout<<"Player has "<<player<<" cards\n";
            cout<<"Computer has "<<comp<<" cards\n";
        }
        if(pCard==cCard){
            cout<<"It's War Again\n";
            cout<<"Flip a coin, choose heads(1) or tails(0)\n";
            //enter heads or tails
            cin>>flip;
            //flip coin
            coin=rand()%2;
            cout<<coin<<endl;
            if(flip==coin){
                cout<<"Player Wins The War\n";
                player+=5;
                comp-=5;
                cout<<"Player has "<<player<<" cards\n";
                cout<<"Computer has "<<comp<<" cards\n";
            }
            else{
                cout<<"Computer Wins The War\n";
                player-=2;
                comp+=2;
                cout<<"Player has "<<player<<" cards\n";
                cout<<"Computer has "<<comp<<" cards\n";
            }
        }
    }
    if(pCard==cCard && comp==2){
        cout<<"It's War!\n";
        cout<<"Put 3 cards face down, the Computer cannot put any cards down\n";
        cout<<"Each flip another card\n";
        //prompt to flip a coin
        cin>>pCard>>cCard;

        if(pCard>cCard){
            cout<<"Player Wins The War\n";
            //counters
            player+=2;
            comp-=2;
            cout<<"Player has "<<player<<" cards\n";
            cout<<"Computer has "<<comp<<" cards\n";
        }
        if(pCard<cCard){
            cout<<"Computer Wins The War\n";
            //counters
            player-=5;
            comp+=5;
            cout<<"Player has "<<player<<" cards\n";
            cout<<"Computer has "<<comp<<" cards\n";
        }
        if(pCard==cCard){
            cout<<"It's War Again\n";
            cout<<"Flip a coin, choose heads(1) or tails(0)\n";
            //enter heads or tails
            cin>>flip;
            //flip coin
            coin=rand()%2;
            cout<<coin<<endl;
            if(flip==coin){
                cout<<"Player Wins The War\n";
                player+=2;
                comp-=2;
                cout<<"Player has "<<player<<" cards\n";
                cout<<"Computer has "<<comp<<" cards\n";
            }
            else{
                cout<<"Computer Wins The War\n";
                player-=5;
                comp+=5;
                cout<<"Player has "<<player<<" cards\n";
                cout<<"Computer has "<<comp<<" cards\n";
            }
        }
    }
    if(pCard==cCard && player==1){
        cout<<"It's War!\n";
        cout<<"You cannot put any cards down, the Computer will put 3 cards face down\n";
        cout<<"Flip a coin, choose heads(1) or tails(0)\n";
        //enter heads or tails
        cin>>flip;
        //flip coin
        coin=rand()%2;
        cout<<coin<<endl;
        if(flip==coin){
            cout<<"Player Wins The War\n";
            player+=5;
            comp-=5;
            cout<<"Player has "<<player<<" cards\n";
            cout<<"Computer has "<<comp<<" cards\n";
        }
        else{
            cout<<"Computer Wins The War\n";
            player-=1;
            comp+=1;
            cout<<"Player has "<<player<<" cards\n";
            cout<<"Computer has "<<comp<<" cards\n";
        }
    }
    if(pCard==cCard && comp==1){
        cout<<"It's War!\n";
        cout<<"Put 3 cards face down, the Computer cannot put any cards down\n";
        cout<<"Flip a coin, choose heads(1) or tails(0)\n";
        //enter heads or tails
        cin>>flip;
        //flip coin
        coin=rand()%2;
        cout<<coin<<endl;
        if(flip==coin){
        cout<<"Player Wins The War\n";
        player+=1;
        comp-=1;
        cout<<"Player has "<<player<<" cards\n";
        cout<<"Computer has "<<comp<<" cards\n";
        }
        else{
            cout<<"Computer Wins The War\n";
            player-=5;
            comp+=5;
            cout<<"Player has "<<player<<" cards\n";
            cout<<"Computer has "<<comp<<" cards\n";
        }
    }
    cnt=(player<52 && comp<52)?"Continue the game, flip a card\n":"Game over\n";
    cout<<cnt;
    if(player==52 || comp==0){
        cout<<endl<<"You won :)\n";
    }
    else if(player==0 || comp==52){
        cout<<endl<<"Computer Won :(\n";
    }
    //Exit stage right!
    return 0;
}