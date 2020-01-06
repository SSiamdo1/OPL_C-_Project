/************************************************************
 * Name:  Shahryar Siamdoust                                  *
 * Project:  OPL C++ Five Crowns Game            *
 * Class:  game.cpp             *
 * Date:  10/23/2019                           *
 ************************************************************/
//


#include "game.h"


Game::Game()
{
    roundNumber=1;
}


void Game::play()
{

    for(;roundNumber <=11; roundNumber++){
        // Create a Round object
        
        Round round(roundNumber);
        
        // play the round
        round.play();
    }
    
}
