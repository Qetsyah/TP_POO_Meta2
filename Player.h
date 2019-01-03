/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.h
 * Author: Qétsyah
 *
 * Created on 14 de Dezembro de 2018, 18:52
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "Ship.h"
#include "Dock.h"
#include "Cell.h"


using namespace std;

class Player {
    int coins;
    unsigned int score;
    int soldiersPort;
    vector <Ship*> playerShips;
    vector <Dock*> playerDocks;
    
public:
    Player(){}
    ~Player(){}
    
//sets    
    bool setCoins(int x);
    bool setScore(int x);
    bool setSoldiersPort(int x);
    bool setPlayerShips(vector <Ship*> &v ); 
    bool setPlayersDocks(vector <Dock*> &d);
//gets
    int getCoins() const;
    int getScore() const;
    vector <Ship*> & getPlayerShips();
    vector <Dock*> & getPlayerDocks();
    
    void incCoins(int x);

    
    void printShipIDs();
};

#endif /* PLAYER_H */

