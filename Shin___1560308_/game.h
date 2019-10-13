//
//  game.h
//  Project1
//  Soo Young Shin
//  1560308
//

#ifndef game_h
#define game_h

#include "life.h"

class World;
class Game {
public:
    // Constructor/destructor
    Game(Life **life, int numLife);
    ~Game();
    
    // Mutators
    void play();
private:
    World * m_world;
    int m_steps;
    bool m_automate;
};

#endif /* game_h */
