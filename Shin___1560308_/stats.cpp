//
//  stats.cpp
//  Project1
//  Soo Young Shin
//  1560308
//

#include <iostream>
#include "stats.h"
#include "globals.h"

Stats::Stats(){
    for (int i=0; i<MAX_ROWS; i++) {
        for (int j=0; j<MAX_COLS; j++) {
            this-> births[(i*MAX_ROWS)+j]=64;
        }
    }
}

Stats::~Stats(){}

void Stats::display() const{
    for (int i=0; i<MAX_ROWS; i++){
        for (int j=0; j<MAX_COLS; j++){
            if (births[i*MAX_ROWS+j] == 64)
            {
                std:: cout<< '.';
            }
            else std::cout<< births[(i*MAX_ROWS)+j];
        }
        std::cout<<std::endl;
    }
}

bool Stats::record(int r, int c, int val){
    if(val >0){
        this-> births[r*MAX_ROWS+c] += val;
        return true;
    }
    else return false;
}

