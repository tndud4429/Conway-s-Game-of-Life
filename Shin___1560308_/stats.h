//
//  stats.h
//  Project1
//  Soo Young Shin
//  1560308
//

#ifndef stats_h
#define stats_h

#include "globals.h"

class Stats {
public:
    // Constructor/destructor
    Stats();
    ~Stats();
    // Accessors or Getters
    void display() const;
    // Mutators or Setters
    bool record(int r, int c, int val);
private:
    // TODO
    char births[MAX_ROWS*MAX_COLS];
};

#endif /* stats_h */
