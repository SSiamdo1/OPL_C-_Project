/************************************************************
 * Name:  Shahryar Siamdoust                                  *
 * Project:  OPL C++ Five Crowns Game            *
 * Class:  human.cpp                      *
 * Date:  10/23/2019                           *
 ************************************************************/
//
#include <stdio.h>
#include "human.h"
#include <iostream>
using namespace std;





Human::Human()
{
    
    cout << "Test" << endl;
    //Player();
    //hand.clear();

}

void Human::play(vector <Card> &drawPile, vector <Card> &discardPile)
{
    drawCard(drawPile,discardPile);
    
}

/*void Human::addCard(Card newCard)
{
    
    // add card to Human hand
    hand.push_back(newCard);
    // sort cards
   // Collections.sort(hand);
    
}*/

void Human::drawCard(vector<Card> &drawPile, vector<Card> &discardPile)
{
   
    // Ask whether to draw from drawPile or discardPile
    int response = 0;
    do
    {
        // Print human turn and where to pick card from
        cout << "Human Turn:\n";
        for (int i = 0; i < hand.size(); i++)
        {
            cout << hand[i].toString() << " " ;
            
            cout << endl;
            
        }
        cout << "0: draw pile \n1: discard pile \n2: go out ";
        cout << endl;
        cout << "Enter Choice: " << endl;
        cin >> response;
        
        // Validate Input
        if (response < 0 || response > 2)
        {
            
            cout << "Invalid Input\n";
            
        }
        // Ask for re-input
    }while(response < 0 || response > 2);
    
    // Draw from the correct pile and update it
    if(response==0)
    {
       
        // Add card from draw pile and remove from draw pile
        addCard(drawPile[0]);
        drawPile.erase(drawPile.begin());
        
        
    
    }
    if (response == 1)
    {
        // Add card from discard pile and remove from discard pile
        
       
        
      
    }
}

void Human::discardCard(vector<Card> &discardPile)
{
    
 
    
}
/*

// Pick a card from Draw or Discard Pile.
void Human::Pick_Card(vector<Card>&Player_Cards, vector<Card>&Draw_Pile, vector<Card> &Discard_Pile, int round_cards) {
    
    int index = 0;
    int top_card = Discard_Pile.size();
    
    while (index <= 0 || (index >= 3 || (index > 2 && top_card == 0))) {
        cout << "Pick from (1) Draw Pile or (2) Discard Pile: ";
        cin >> index;
    if (index == 1) {
        Player_Cards.push_back(Draw_Pile[0]);
        Draw_Pile.erase(Draw_Pile.begin());
    }
    
    if (index == 2 && top_card > 0) {
        
        Player_Cards.push_back(Discard_Pile[top_card-1]);
        Discard_Pile.erase(Discard_Pile.begin()+top_card-1);
        
    }
        
    if (index >= 3 || (index == 2 && top_card == 0)) {
        
        cout << "Error" << endl;
    }
    };
}

// Discard a card.
void Human::Discard_Card(vector<Card>&Player_Cards, vector<Card>&Discard_Pile, int round_cards) {

    int index = 0;
    
    while (index <=0 || index > Player_Cards.size()) {
    
    cout << "Which card to discard?: ";
    
    cin >> index;
        
    if (index <=0 || index > Player_Cards.size()) {
            
        cout << "Error, Invalid Choice" << endl;
        
        }
        
    }
    
    Discard_Pile.push_back(Player_Cards[index-1]);
    
    Player_Cards.erase(Player_Cards.begin()+index-1);

    
}
// Go out if possible.
bool Human::Go_Out(vector<Card>&Player_Cards, int round_cards) {
    
    string player_cards[Player_Cards.size()];
    round_cards-= 2;


    if (round_cards >= 1) {
    

        for (int i = 0; i < Player_Cards.size(); i++)
        {
            
            player_cards[i] = Player_Cards[i].Get_Rank();
            
        }
        
        if (player_cards[0] == player_cards[1] && player_cards[1] == player_cards[2]) {
            
            cout << "BOOK!";
            return true;
        }
    }
    
    cout << "Not a Book or Run" << endl;;
    return false;
}

*/
