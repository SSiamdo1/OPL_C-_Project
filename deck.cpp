/************************************************************
 * Name:  Shahryar Siamdoust                                *
 * Project:  OPL C++ Five Crowns Game                       *
 * Class:  deck.cpp                                         *
 * Date:  1/2/2020                                          *
 ************************************************************/


#include "deck.h"
#include <iostream>
using namespace std;



// *********************************************************
// ******************** Constructor ************************
// *********************************************************



/* *********************************************************************
 Function Name: Deck (Constructor)
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


Deck::Deck()
{
    // Allocate space to the vector of cards
    //cardVector = new vector<Card>;

    // Create a cards and add them to the deck
    for (int suitIndex = 0; suitIndex < (sizeof (SUITS) / sizeof (SUITS[0]) )-1; suitIndex++)
    {
        for(int faceIndex = MIN_FACE; faceIndex <= MAX_FACE-3; faceIndex++)
        {
            cardVector.push_back(Card(SUITS[suitIndex],faceIndex));
           
        }
    }
    // Add jokers
    for (int suitIndex = 5, faceIndex = MAX_FACE-2; faceIndex <= MAX_FACE; faceIndex++)
    {
        
        cardVector.push_back(Card(SUITS[suitIndex],faceIndex));
        
        
        
    }
    
    random_shuffle(cardVector.begin(), cardVector.end() );
   
    
    
    // shuffle the deck
    //Collections.shuffle(cardVector);
    
    
}

// *********************************************************
// ******************** Selectors **************************
// *********************************************************


/* *********************************************************************
 Function Name: isEmpty
 Purpose: Check if the deck is empty
 Parameters: none
 Return Value: If the size of the card vector is empty or not, a boolean value.
 Local Variables: is_Empty a boolean. To check if the deck is empty or not.
 Algorithm:
 1) Set the boolean variable automatically to false.
 2) Check if the size of the Card Vector is empty. If so set the boolean variable to true.
 3) Return the boolean variable.
 Assistance Received: Converted from Java program.
 ********************************************************************* */

bool Deck::isEmpty()
{
    
    bool is_Empty = false;
    
    if (cardVector.size() == 0)
    {
        is_Empty = true;
    }
    
    return is_Empty;
}



// *********************************************************
// ******************** Mutators ***************************
// *********************************************************


/* *********************************************************************
 Function Name: dealCard
 Purpose: To deal a card from a deck to players or pile
 Parameters: none
 Return Value: null or returnCard, a card object.
 Local Variables: returnCard, from object Card. To get the first card in the deck.
 Algorithm:
 1) If deck is empty return nothing
 2) Get the first card from the deck and return it.
 Assistance Received: Converted from Java program.
 ********************************************************************* */

Card Deck::dealCard(){
   
    cout << cardVector.size() << endl;
    // Get a reference to the first card
    Card returnCard = cardVector.front();
    // Remove the card from the cardVector
    cardVector.erase(cardVector.begin());
    // Return the reference to the removed first card
    return returnCard;
    
}


/* *********************************************************************
 Function Name: updateWildCards
 Purpose: To update the wild card after each round
 Parameters:
 face, an integer. It is the face of the wild card to be updated
 Return Value: none
 Local Variables: none
 Algorithm:
 1) Update all cards with a certain face value to be a wild card.
 Assistance Received: Converted from Java program.
 ********************************************************************* */

// Update the Wild Cards
void Deck::updateWildCards(int face)
{
    for (Card card:cardVector)
    {
        card.updateWildCards(face);
    }
}












//#include "includes.h"

/*
Deck::Deck() {
   
    
    for (int i = 0; i < DECK; i++ ) {
        
        Card_Deck[i];
    }

    
}

   void Deck::Create_Deck() {
       
       int counter = 0;
       for (int i = 0; i < RANK; i++) {
           for (int j = 0; j < SUIT; j++) {
               
               Card_Deck[counter].Set_Rank(i);
               Card_Deck[counter].Set_Suit(j);
               Card_Deck[counter].Set_Full_Card();
               Card_Deck[counter++].Set_Value(i+3);
               
           }
       }
       
       for (int i = 0; i < 3; i++) {
           Card_Deck[counter].Set_Rank(11);
           Card_Deck[counter].Set_Suit(5);
           Card_Deck[counter].Set_Full_Card();
           Card_Deck[counter++].Set_Value(50);
          
       }
       
       for (int i = 0; i < 58; i++) {
           //cout << Card_Deck[i];
           cout << i << ": ";
           Card_Deck[i].Get_Rank();
           Card_Deck[i].Get_Suit();
           cout << endl;
       }
 
     
    }

void Deck::Shuffle_Cards() {
    srand(time(NULL));
    for (int i = 0; i < DECK; i++) {
      
        int r = i + (rand() % (DECK -i));
            
            swap(Card_Deck[i], Card_Deck[r]);
    }
    
   

}

Card Deck::Return_Deck(int card_number) {
    
    
    return Card_Deck[card_number];
    
}
    
    */



