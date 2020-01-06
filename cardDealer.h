/************************************************************
 * Name:  Shahryar Siamdoust                                *
 * Project:  OPL C++ Five Crowns Game                       *
 * Class:  cardDealer.h                                     *
 * Date:  1/2/2020                                          *
 ************************************************************/

#ifndef cardDealer_hpp
#define cardDealer_hpp

#pragma once
#include "card.h"
#include "deck.h"


class CardDealer {
    
    public:
    
        // *********************************************************
        // ******************** Class Constants ********************
        // *********************************************************
    
        
        CardDealer();
        Card dealCard();
        //void updateWildCards(int face);
        
    
    private:
    
        // *********************************************************
        // ******************** Class Variables ********************
        // *********************************************************
    
    
        // 2 Decks where the cards will be dealt and played with.
        Deck firstDeck,secondDeck;
    
};



#endif /* cardDealer_hpp */
