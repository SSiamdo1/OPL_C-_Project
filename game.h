/************************************************************
 * Name:  Shahryar Siamdoust                                  *
 * Project:  OPL C++ Five Crowns Game            *
 * Class:  game.h    *
 * Date:  10/23/2019                           *
 ************************************************************/
//

#ifndef game_h
#define game_h

#include "round.h"
#include "player.h"
#include "computer.h"
#include "human.h"

class Game
{
    public:
        Game();
        void play();
    
    private:
        int roundNumber = 0;
        
    
};



#endif /* game_h */
