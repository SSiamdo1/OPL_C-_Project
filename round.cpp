/************************************************************
 * Name:  Shahryar Siamdoust                                  *
 * Project:  OPL C++ Five Crowns Game            *
 * Class:  round.cpp              *
 * Date:  10/23/2019                           *
 ************************************************************/


#include "round.h"
#include <iostream>
using namespace std;


Round::Round(int inRoundNumber)
{
    roundNumber = inRoundNumber;
   
    // Add them to an iteration array
    
    playerList[0] = &computer;
    playerList[1] = &human;
    
    

    
    
    // Clear the Hands;
    //playerList[0].clearCards();
    //playerList[1].clearCards();
    
    
    // Create a CardDealer
    //cardDealer = new CardDealer();
    CardDealer Card_Dealer;
    
    // Update wild cards
    //cardDealer.updateWildCards(roundNumber+2);
    
    // Deal cards to the 2 players
    for (int count = 0; count < roundNumber +2; count++){
        playerList[0]->addCard(Card_Dealer.dealCard());
        playerList[1]->addCard(Card_Dealer.dealCard());
    }
    
    
    // Deal rest of the cards to draw pile
    //drawPile = new Vector<Card>(Deck.DECK_SIZE*2);
    
      discardPile.push_back(Card_Dealer.dealCard());
    
    Card nextCard = Card_Dealer.dealCard();
    
  
    
   
    //while(nextCard!= NULL){
    for (int i = 0; i < 108; i++)
    {
    
        drawPile.push_back(nextCard);
        nextCard = Card_Dealer.dealCard();
       /* cout << i << "#: ";
        cout << drawPile[i].toString();
        cout << endl;*/
        
        /*cout << i << endl;
        cout << nextCard.getFace() << endl;
        cout << nextCard.getSuit() << endl;*/
    }
    
    drawPile.push_back(nextCard);
  
    
    
   
    //}
    
    // Take the first card from the draw pile and place it in the discard pile

  
    //discardPile.push_back(drawPile[0]);
    //drawPile.erase(drawPile.begin());
  
    
}

void Round:: play()
{
    
    int nextPlayerIndex = 1;
    
   
    while(true)
    {
        
        cout << "Discard Pile: ";
        
        for (int i = 0; i < discardPile.size(); i++)
        {
            
            cout << discardPile[i].toString() << endl;
            
        }
        
        
        cout << "Draw Pile: ";
        
        for (int i = 0; i < drawPile.size(); i++)
        {
            
            cout << drawPile[i].toString() << " ";
            
        }
        
        cout << endl;
        
        playerList[nextPlayerIndex]->play(drawPile,discardPile);
        playerList[nextPlayerIndex-1]->play(drawPile,discardPile);
        

        
      /*  // Computer Plays
        if (nextPlayerIndex == 0) {
            
            System.out.println("Computer Turn");
        }
        
        // Humans Plays
        else {
            
            System.out.println("Human Turn");
        }
        // Have next player play
        System.out.println(this);
        
        if(playerList[nextPlayerIndex].play(drawPile,discardPile)==0){
            // switch players
            nextPlayerIndex = (nextPlayerIndex+1) % TOTAL_PLAYERS;
            break;
        }
        
        if (playerList[nextPlayerIndex].book_Or_run_Found() == true) {
            
            break;
            
        }
        
        
        
        
        // Otherwise, switch players
        nextPlayerIndex = (nextPlayerIndex+1) % TOTAL_PLAYERS;
        
        // Otherwise, ask if game should be serialized
        
        System.out.println("Draw pile size is now " + drawPile.size());
        
        
        */
        
    }
    
}








/*
#include "round.h"

// Initalize 
Round::Round() {
    Round_Number = 1;
    Points = 0;
}

// Get Round Number
int Round::Get_Round_Number() {
    
    return Round_Number++;
}

// Return Points for human
int Round::Return_Player_Points(vector<Card>&Player_Cards) {
    
    int player_points = 0;
    for (int i = 0; i < Player_Cards.size(); i++)
    {
        
        Points = Player_Cards[i].Get_Value();
        player_points += Points;
        
    }
    return player_points;
}

// Return Points for computer
int Round::Return_Computer_Points(vector<Card>&Computer_Cards) {
    
    int computer_points = 0;
    for (int i = 0; i < Computer_Cards.size(); i++)
    {
        
        Points = Computer_Cards[i].Get_Value();
        computer_points += Points;
       
        
    }
    return computer_points;
    
}
 
 */

