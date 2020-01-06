/************************************************************
 * Name:  Shahryar Siamdoust                                *
 * Project:  OPL C++ Five Crowns Game                       *
 * Class:  deck.h                                           *
 * Date:  1/2/2020                                          *
 ************************************************************/


#ifndef deck_h
#define deck_h

#pragma once
#include "card.h"
#include <vector>




class Deck
{
    
    public:
    
        // *********************************************************
        // ******************** Class Constants ********************
        // *********************************************************
    
    
        // These are the proper suits of the cards in a deck
        char SUITS[6] = {'s','c','d','h','t','o'};
    
        // These are the proper faces of the cards in a deck
        int MIN_FACE = 3, MAX_FACE = 16;
    
        // The number of cards in a deck.
        int DECK_SIZE = 58;
    
        Deck();
        bool isEmpty();
        Card dealCard();
        void updateWildCards(int face);
    
    
    private:
    
        // *********************************************************
        // ******************** Class Variables ********************
        // *********************************************************
    
    
      
        // Vector to hold all the cards of a deck
    
        vector<Card>cardVector;

};


/*
class Deck {
public:
    Deck();
    string Suit_of_Card;
    string Rank_of_Card;
    void Create_Deck();
    void Shuffle_Cards();
    Card Return_Deck(int card_number);
    string Get_Card(int card);
    Card discard_a_card(Card discarded_card);
    string cardss;
   
private:
    Card Card_Deck[58];
};



*/
#endif /* deck_h */
