/************************************************************
 * Name:  Shahryar Siamdoust                                *
 * Project:  OPL C++ Five Crowns Game                       *
 * Class:  cardDealer.cpp                                   *
 * Date:  1/2/2020                                          *
 ************************************************************/

#include "cardDealer.h"



// *********************************************************
// ******************** Constructor ************************
// *********************************************************



/* *********************************************************************
 Function Name: CardDealer (Constructor)
 Purpose: To create a deck of 58 unique cards and shuffle them.
 Parameters: none
 Return Value: none
 Local Variables: none
 Algorithm:
 1) Loop through the face and suit to create 55 unique cards.
 2) Add 3 unique jokers
 3) Shuffle the complete deck
 Assistance Received: Converted from Java program.
 ********************************************************************* */

CardDealer::CardDealer()
{
    
    
}

Card CardDealer::dealCard()
{
    // Randomly deal a card from one of the 2 decks until both are empty
    if(firstDeck.isEmpty())
    {
       
            return secondDeck.dealCard();
        
    }
    else
    {
       
        return firstDeck.dealCard();
        
    }
    
}
